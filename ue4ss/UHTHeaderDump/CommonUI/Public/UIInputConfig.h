#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonInput -ObjectName=ECommonInputMode -FallbackName=ECommonInputMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMouseCaptureMode -FallbackName=EMouseCaptureMode
#include "UIInputConfig.generated.h"

USTRUCT(BlueprintType)
struct COMMONUI_API FUIInputConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreMoveInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreLookInput;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputMode InputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMouseCaptureMode MouseCaptureMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideCursorDuringViewportCapture;
    
public:
    FUIInputConfig();
};

