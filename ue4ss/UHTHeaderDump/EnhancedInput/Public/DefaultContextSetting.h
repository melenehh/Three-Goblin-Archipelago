#pragma once
#include "CoreMinimal.h"
#include "DefaultContextSetting.generated.h"

class UInputMappingContext;

USTRUCT(BlueprintType)
struct FDefaultContextSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UInputMappingContext> InputMappingContext;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    ENHANCEDINPUT_API FDefaultContextSetting();
};

