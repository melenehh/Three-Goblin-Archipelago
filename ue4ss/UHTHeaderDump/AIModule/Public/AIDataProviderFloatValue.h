#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderTypedValue.h"
#include "AIDataProviderFloatValue.generated.h"

USTRUCT(BlueprintType)
struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    AIMODULE_API FAIDataProviderFloatValue();
};

