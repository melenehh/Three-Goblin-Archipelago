#include "TimelineComponent.h"
#include "Net/UnrealNetwork.h"

UTimelineComponent::UTimelineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnoreTimeDilation = false;
}

void UTimelineComponent::Stop() {
}

void UTimelineComponent::SetVectorCurve(UCurveVector* NewVectorCurve, FName VectorTrackName) {
}

void UTimelineComponent::SetTimelinePostUpdateFunc(FOnTimelineEvent NewTimelinePostUpdateFunc) {
}

void UTimelineComponent::SetTimelineLengthMode(TEnumAsByte<ETimelineLengthMode> NewLengthMode) {
}

void UTimelineComponent::SetTimelineLength(float NewLength) {
}

void UTimelineComponent::SetTimelineFinishedFunc(FOnTimelineEvent NewTimelineFinishedFunc) {
}

void UTimelineComponent::SetPlayRate(float NewRate) {
}

void UTimelineComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate) {
}

void UTimelineComponent::SetNewTime(float NewTime) {
}

void UTimelineComponent::SetLooping(bool bNewLooping) {
}

void UTimelineComponent::SetLinearColorCurve(UCurveLinearColor* NewLinearColorCurve, FName LinearColorTrackName) {
}

void UTimelineComponent::SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation) {
}

void UTimelineComponent::SetFloatCurve(UCurveFloat* NewFloatCurve, FName FloatTrackName) {
}

void UTimelineComponent::ReverseFromEnd() {
}

void UTimelineComponent::Reverse() {
}

void UTimelineComponent::PlayFromStart() {
}

void UTimelineComponent::Play() {
}

void UTimelineComponent::OnRep_Timeline(FTimeline& OldTimeline) {
}

bool UTimelineComponent::IsReversing() const {
    return false;
}

bool UTimelineComponent::IsPlaying() const {
    return false;
}

bool UTimelineComponent::IsLooping() const {
    return false;
}

float UTimelineComponent::GetTimelineLength() const {
    return 0.0f;
}

float UTimelineComponent::GetScaledTimelineLength() const {
    return 0.0f;
}

float UTimelineComponent::GetPlayRate() const {
    return 0.0f;
}

float UTimelineComponent::GetPlaybackPosition() const {
    return 0.0f;
}

bool UTimelineComponent::GetIgnoreTimeDilation() const {
    return false;
}

void UTimelineComponent::AddInterpVector(UCurveVector* VectorCurve, FOnTimelineVector InterpFunc, FName PropertyName, FName TrackName) {
}

void UTimelineComponent::AddInterpLinearColor(UCurveLinearColor* LinearColorCurve, FOnTimelineLinearColor InterpFunc, FName PropertyName, FName TrackName) {
}

void UTimelineComponent::AddInterpFloat(UCurveFloat* FloatCurve, FOnTimelineFloat InterpFunc, FName PropertyName, FName TrackName) {
}

void UTimelineComponent::AddEvent(float Time, FOnTimelineEvent EventFunc) {
}

void UTimelineComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTimelineComponent, TheTimeline);
}


