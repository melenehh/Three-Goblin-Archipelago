#pragma once
#include "CoreMinimal.h"
#include "SlateBrush.h"
#include "SlateWidgetStyle.h"
#include "SplitterStyle.generated.h"

USTRUCT(BlueprintType)
struct FSplitterStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush HandleNormalBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush HandleHighlightBrush;
    
    SLATECORE_API FSplitterStyle();
};

