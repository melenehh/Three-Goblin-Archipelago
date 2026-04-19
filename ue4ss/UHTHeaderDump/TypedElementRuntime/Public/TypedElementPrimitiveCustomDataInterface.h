#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementHandle -FallbackName=ScriptTypedElementHandle
#include "TypedElementPrimitiveCustomDataInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UTypedElementPrimitiveCustomDataInterface : public UInterface {
    GENERATED_BODY()
};

class ITypedElementPrimitiveCustomDataInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetCustomDataValue(const FScriptTypedElementHandle& InElementHandle, int32 CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty) PURE_VIRTUAL(SetCustomDataValue,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetCustomData(const FScriptTypedElementHandle& InElementHandle, const TArray<float>& CustomDataFloats, bool bMarkRenderStateDirty) PURE_VIRTUAL(SetCustomData,);
    
};

