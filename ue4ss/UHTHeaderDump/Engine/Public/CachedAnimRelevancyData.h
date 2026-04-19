#pragma once
#include "CoreMinimal.h"
#include "CachedAnimRelevancyData.generated.h"

USTRUCT(BlueprintType)
struct FCachedAnimRelevancyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateMachineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateName;
    
    ENGINE_API FCachedAnimRelevancyData();
};

