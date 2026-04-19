#include "InterchangeAnimationTrackSetFactoryNode.h"

UInterchangeAnimationTrackSetFactoryNode::UInterchangeAnimationTrackSetFactoryNode() {
}

bool UInterchangeAnimationTrackSetFactoryNode::SetCustomFrameRate(const float& AttributeValue) {
    return false;
}

bool UInterchangeAnimationTrackSetFactoryNode::RemoveCustomAnimationTrackUid(const FString& AnimationTrackUid) {
    return false;
}

UClass* UInterchangeAnimationTrackSetFactoryNode::GetObjectClass() const {
    return NULL;
}

bool UInterchangeAnimationTrackSetFactoryNode::GetCustomFrameRate(float& AttributeValue) const {
    return false;
}

void UInterchangeAnimationTrackSetFactoryNode::GetCustomAnimationTrackUids(TArray<FString>& OutAnimationTrackUids) const {
}

int32 UInterchangeAnimationTrackSetFactoryNode::GetCustomAnimationTrackUidCount() const {
    return 0;
}

void UInterchangeAnimationTrackSetFactoryNode::GetCustomAnimationTrackUid(const int32 Index, FString& OutAnimationTrackUid) const {
}

bool UInterchangeAnimationTrackSetFactoryNode::AddCustomAnimationTrackUid(const FString& AnimationTrackUid) {
    return false;
}


