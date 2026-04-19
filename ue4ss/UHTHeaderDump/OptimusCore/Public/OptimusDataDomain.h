#pragma once
#include "CoreMinimal.h"
#include "EOptimusDataDomainType.h"
#include "OptimusDataDomain.generated.h"

USTRUCT(BlueprintType)
struct OPTIMUSCORE_API FOptimusDataDomain {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusDataDomainType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DimensionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Expression;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LevelNames;
    
public:
    FOptimusDataDomain();
};

