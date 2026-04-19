#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimNodeReferenceConversionResult -FallbackName=EAnimNodeReferenceConversionResult
#include "BlendListBaseReference.h"
#include "BlendListBaseLibrary.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBlendListBaseLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlendListBaseLibrary();

    UFUNCTION(BlueprintCallable)
    static void ResetNode(const FBlendListBaseReference& BlendListBase);
    
    UFUNCTION(BlueprintCallable)
    static FBlendListBaseReference ConvertToBlendListBase(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    
};

