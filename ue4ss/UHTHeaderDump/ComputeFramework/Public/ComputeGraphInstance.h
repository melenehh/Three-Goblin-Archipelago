#pragma once
#include "CoreMinimal.h"
#include "ComputeGraphInstance.generated.h"

class UComputeDataProvider;

USTRUCT(BlueprintType)
struct COMPUTEFRAMEWORK_API FComputeGraphInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UComputeDataProvider*> DataProviders;
    
public:
    FComputeGraphInstance();
};

