#pragma once
#include "CoreMinimal.h"
#include "TextAppearance.h"
#include "TipSettings.generated.h"

USTRUCT(BlueprintType)
struct ASYNCLOADINGSCREEN_API FTipSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> TipText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextAppearance Appearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TipWrapAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetDisplayTipTextManually;
    
    FTipSettings();
};

