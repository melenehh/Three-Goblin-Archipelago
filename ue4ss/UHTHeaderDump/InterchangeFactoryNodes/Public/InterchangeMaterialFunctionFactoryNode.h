#pragma once
#include "CoreMinimal.h"
#include "InterchangeBaseMaterialFactoryNode.h"
#include "InterchangeMaterialFunctionFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeMaterialFunctionFactoryNode : public UInterchangeBaseMaterialFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeMaterialFunctionFactoryNode();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInputConnection(const FString& InputName, FString& ExpressionNodeUid, FString& OutputName) const;
    
};

