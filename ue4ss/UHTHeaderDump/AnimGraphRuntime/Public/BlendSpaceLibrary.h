#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimNodeReferenceConversionResult -FallbackName=EAnimNodeReferenceConversionResult
#include "BlendSpaceReference.h"
#include "BlendSpaceLibrary.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBlendSpaceLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlendSpaceLibrary();

    UFUNCTION(BlueprintCallable)
    static void SnapToPosition(const FBlendSpaceReference& BlendSpace, FVector NewPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetPosition(const FBlendSpaceReference& BlendSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetFilteredPosition(const FBlendSpaceReference& BlendSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertToBlendSpacePure(const FAnimNodeReference& Node, FBlendSpaceReference& BlendSpace, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    static FBlendSpaceReference ConvertToBlendSpace(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    
};

