#pragma once
#include "CoreMinimal.h"
#include "EditableTextBoxStyle.h"
#include "SlateWidgetStyle.h"
#include "TextBlockStyle.h"
#include "InlineEditableTextBlockStyle.generated.h"

USTRUCT(BlueprintType)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableTextBoxStyle EditableTextBoxStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle TextStyle;
    
    SLATECORE_API FInlineEditableTextBlockStyle();
};

