#pragma once
#include "CoreMinimal.h"
#include "RestrictedConfigInfo.generated.h"

USTRUCT(BlueprintType)
struct FRestrictedConfigInfo {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RestrictedConfigName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Owners;
    
    GAMEPLAYTAGS_API FRestrictedConfigInfo();
};

