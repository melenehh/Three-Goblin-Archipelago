#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ESlateColorStylingMode.h"
#include "SlateColor.generated.h"

USTRUCT(BlueprintType)
struct FSlateColor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SpecifiedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateColorStylingMode ColorUseRule;
    
public:
    SLATECORE_API FSlateColor();
};

