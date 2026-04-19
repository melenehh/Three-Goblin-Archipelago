#pragma once
#include "CoreMinimal.h"
#include "ActorComponent.h"
#include "ETimelineLengthMode.h"
#include "OnTimelineEventDelegate.h"
#include "OnTimelineFloatDelegate.h"
#include "OnTimelineLinearColorDelegate.h"
#include "OnTimelineVectorDelegate.h"
#include "Timeline.h"
#include "TimelineComponent.generated.h"

class UCurveFloat;
class UCurveLinearColor;
class UCurveVector;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTimelineComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Timeline, meta=(AllowPrivateAccess=true))
    FTimeline TheTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreTimeDilation: 1;
    
public:
    UTimelineComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVectorCurve(UCurveVector* NewVectorCurve, FName VectorTrackName);
    
    UFUNCTION(BlueprintCallable)
    void SetTimelinePostUpdateFunc(FOnTimelineEvent NewTimelinePostUpdateFunc);
    
    UFUNCTION(BlueprintCallable)
    void SetTimelineLengthMode(TEnumAsByte<ETimelineLengthMode> NewLengthMode);
    
    UFUNCTION(BlueprintCallable)
    void SetTimelineLength(float NewLength);
    
    UFUNCTION(BlueprintCallable)
    void SetTimelineFinishedFunc(FOnTimelineEvent NewTimelineFinishedFunc);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float NewRate);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetNewTime(float NewTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLooping(bool bNewLooping);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearColorCurve(UCurveLinearColor* NewLinearColorCurve, FName LinearColorTrackName);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatCurve(UCurveFloat* NewFloatCurve, FName FloatTrackName);
    
    UFUNCTION(BlueprintCallable)
    void ReverseFromEnd();
    
    UFUNCTION(BlueprintCallable)
    void Reverse();
    
    UFUNCTION(BlueprintCallable)
    void PlayFromStart();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Timeline(FTimeline& OldTimeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReversing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimelineLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScaledTimelineLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlaybackPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIgnoreTimeDilation() const;
    
    UFUNCTION(BlueprintCallable)
    void AddInterpVector(UCurveVector* VectorCurve, FOnTimelineVector InterpFunc, FName PropertyName, FName TrackName);
    
    UFUNCTION(BlueprintCallable)
    void AddInterpLinearColor(UCurveLinearColor* LinearColorCurve, FOnTimelineLinearColor InterpFunc, FName PropertyName, FName TrackName);
    
    UFUNCTION(BlueprintCallable)
    void AddInterpFloat(UCurveFloat* FloatCurve, FOnTimelineFloat InterpFunc, FName PropertyName, FName TrackName);
    
    UFUNCTION(BlueprintCallable)
    void AddEvent(float Time, FOnTimelineEvent EventFunc);
    
};

