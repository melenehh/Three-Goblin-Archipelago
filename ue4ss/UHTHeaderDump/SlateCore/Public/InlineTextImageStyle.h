#pragma once
#include "CoreMinimal.h"
#include "SlateBrush.h"
#include "SlateWidgetStyle.h"
#include "InlineTextImageStyle.generated.h"

USTRUCT(BlueprintType)
struct FInlineTextImageStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Image;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Baseline;
    
    SLATECORE_API FInlineTextImageStyle();
};

