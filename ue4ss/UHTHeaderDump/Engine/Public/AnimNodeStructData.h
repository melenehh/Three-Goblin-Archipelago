#pragma once
#include "CoreMinimal.h"
#include "AnimNodeStructData.generated.h"

USTRUCT(BlueprintType)
struct FAnimNodeStructData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> NameToIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumProperties;
    
public:
    ENGINE_API FAnimNodeStructData();
};

