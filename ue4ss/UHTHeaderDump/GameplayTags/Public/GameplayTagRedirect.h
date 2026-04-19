#pragma once
#include "CoreMinimal.h"
#include "GameplayTagRedirect.generated.h"

USTRUCT(BlueprintType)
struct FGameplayTagRedirect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OldTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NewTagName;
    
    GAMEPLAYTAGS_API FGameplayTagRedirect();
};

