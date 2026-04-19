#pragma once
#include "CoreMinimal.h"
#include "NetBlobHandlerDefinition.generated.h"

USTRUCT(BlueprintType)
struct FNetBlobHandlerDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    IRISCORE_API FNetBlobHandlerDefinition();
};

