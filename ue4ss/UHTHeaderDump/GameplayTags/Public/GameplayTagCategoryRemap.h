#pragma once
#include "CoreMinimal.h"
#include "GameplayTagCategoryRemap.generated.h"

USTRUCT(BlueprintType)
struct FGameplayTagCategoryRemap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BaseCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RemapCategories;
    
    GAMEPLAYTAGS_API FGameplayTagCategoryRemap();
};

