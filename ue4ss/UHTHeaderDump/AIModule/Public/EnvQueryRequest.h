#pragma once
#include "CoreMinimal.h"
#include "EnvQueryRequest.generated.h"

class UEnvQuery;
class UObject;
class UWorld;

USTRUCT(BlueprintType)
struct FEnvQueryRequest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
public:
    AIMODULE_API FEnvQueryRequest();
};

