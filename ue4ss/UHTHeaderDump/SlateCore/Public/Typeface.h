#pragma once
#include "CoreMinimal.h"
#include "TypefaceEntry.h"
#include "Typeface.generated.h"

USTRUCT(BlueprintType)
struct FTypeface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTypefaceEntry> Fonts;
    
    SLATECORE_API FTypeface();
};

