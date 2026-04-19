#pragma once
#include "CoreMinimal.h"
#include "CachedAnimStateData.h"
#include "CachedAnimStateArray.generated.h"

USTRUCT(BlueprintType)
struct FCachedAnimStateArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCachedAnimStateData> States;
    
    ENGINE_API FCachedAnimStateArray();
};

