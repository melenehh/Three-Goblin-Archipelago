#pragma once
#include "CoreMinimal.h"
#include "NiagaraWidgetNamedIntegerInputValue.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraWidgetNamedIntegerInputValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ToolTip;
    
    NIAGARA_API FNiagaraWidgetNamedIntegerInputValue();
};

