#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderTypedValue.h"
#include "AIDataProviderBoolValue.generated.h"

USTRUCT(BlueprintType)
struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultValue;
    
    AIMODULE_API FAIDataProviderBoolValue();
};

