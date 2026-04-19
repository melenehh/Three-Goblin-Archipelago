#pragma once
#include "CoreMinimal.h"
#include "NodeChain.generated.h"

USTRUCT(BlueprintType)
struct FNodeChain {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Nodes;
    
    ANIMATIONCORE_API FNodeChain();
};

