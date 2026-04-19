#pragma once
#include "CoreMinimal.h"
#include "SlateBrush.h"
#include "SlateWidgetStyle.h"
#include "ExpandableAreaStyle.generated.h"

USTRUCT(BlueprintType)
struct FExpandableAreaStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush CollapsedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ExpandedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RolloutAnimationSeconds;
    
    SLATECORE_API FExpandableAreaStyle();
};

