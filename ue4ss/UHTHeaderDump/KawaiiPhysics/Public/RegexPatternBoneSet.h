#pragma once
#include "CoreMinimal.h"
#include "RegexPatternBoneSet.generated.h"

USTRUCT(BlueprintType)
struct FRegexPatternBoneSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegexPatternBone1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegexPatternBone2;
    
    KAWAIIPHYSICS_API FRegexPatternBoneSet();
};

