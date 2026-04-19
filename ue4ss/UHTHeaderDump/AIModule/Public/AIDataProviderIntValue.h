#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderTypedValue.h"
#include "AIDataProviderIntValue.generated.h"

USTRUCT(BlueprintType)
struct FAIDataProviderIntValue : public FAIDataProviderTypedValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValue;
    
    AIMODULE_API FAIDataProviderIntValue();
};

