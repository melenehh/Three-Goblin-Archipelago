#pragma once
#include "CoreMinimal.h"
#include "WidgetNamedInputValue.generated.h"

USTRUCT(BlueprintType)
struct FWidgetNamedInputValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ToolTip;
    
    NIAGARA_API FWidgetNamedInputValue();
};

