#pragma once
#include "CoreMinimal.h"
#include "NetObjectFilterDefinition.generated.h"

USTRUCT(BlueprintType)
struct FNetObjectFilterDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FilterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConfigClassName;
    
    IRISCORE_API FNetObjectFilterDefinition();
};

