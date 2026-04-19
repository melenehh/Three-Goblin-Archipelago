#include "ControlRigTestData.h"

UControlRigTestData::UControlRigTestData() {
    this->Tolerance = 0.00f;
}

bool UControlRigTestData::SetupReplay(UControlRig* InControlRig, bool bGroundTruth) {
    return false;
}

void UControlRigTestData::ReleaseReplay() {
}

bool UControlRigTestData::Record(UControlRig* InControlRig, double InRecordingDuration) {
    return false;
}

bool UControlRigTestData::IsReplaying() const {
    return false;
}

bool UControlRigTestData::IsRecording() const {
    return false;
}

FVector2D UControlRigTestData::GetTimeRange(bool bInput) const {
    return FVector2D{};
}

EControlRigTestDataPlaybackMode UControlRigTestData::GetPlaybackMode() const {
    return EControlRigTestDataPlaybackMode::Live;
}

int32 UControlRigTestData::GetFrameIndexForTime(double InSeconds, bool bInput) const {
    return 0;
}

UControlRigTestData* UControlRigTestData::CreateNewAsset(const FString& InDesiredPackagePath, const FString& InBlueprintPathName) {
    return NULL;
}


