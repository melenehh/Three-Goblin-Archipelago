#pragma once
#include "CoreMinimal.h"
#include "SlateBrush.h"
#include "SlateWidgetStyle.h"
#include "TableViewStyle.generated.h"

USTRUCT(BlueprintType)
struct FTableViewStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BackgroundBrush;
    
    SLATECORE_API FTableViewStyle();
};

