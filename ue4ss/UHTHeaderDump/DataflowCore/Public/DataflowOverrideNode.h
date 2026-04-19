#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowOverrideNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowOverrideNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOverriden;
    
    DATAFLOWCORE_API FDataflowOverrideNode();
};

