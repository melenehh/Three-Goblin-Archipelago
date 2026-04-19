#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementHandle -FallbackName=ScriptTypedElementHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementRuntime -ObjectName=TypedElementPrimitiveCustomDataInterface -FallbackName=TypedElementPrimitiveCustomDataInterface
#include "SMInstanceElementPrimitiveCustomDataInterface.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USMInstanceElementPrimitiveCustomDataInterface : public UObject, public ITypedElementPrimitiveCustomDataInterface {
    GENERATED_BODY()
public:
    USMInstanceElementPrimitiveCustomDataInterface();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetCustomDataValue(const FScriptTypedElementHandle& InElementHandle, int32 CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty) override PURE_VIRTUAL(SetCustomDataValue,);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomData(const FScriptTypedElementHandle& InElementHandle, const TArray<float>& CustomDataFloats, bool bMarkRenderStateDirty) override PURE_VIRTUAL(SetCustomData,);
    
};

