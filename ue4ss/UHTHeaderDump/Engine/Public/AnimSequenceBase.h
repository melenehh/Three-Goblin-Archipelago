#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyEvent.h"
#include "AnimationAsset.h"
#include "RawCurveTracks.h"
#include "AnimSequenceBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UAnimSequenceBase : public UAnimationAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimNotifyEvent> Notifies;
    
protected:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequenceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawCurveTracks RawCurveData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UAnimSequenceBase();

};

