#pragma once
#include "CoreMinimal.h"
#include "CurveBase.h"
#include "RichCurve.h"
#include "CurveFloat.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UCurveFloat : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve FloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEventCurve;
    
    UCurveFloat();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatValue(float InTime) const;
    
};

