#include "InterchangeBaseNode.h"

UInterchangeBaseNode::UInterchangeBaseNode() {
}

bool UInterchangeBaseNode::SetParentUid(const FString& ParentUid) {
    return false;
}

bool UInterchangeBaseNode::SetEnabled(const bool bIsEnabled) {
    return false;
}

bool UInterchangeBaseNode::SetDisplayLabel(const FString& DisplayName) {
    return false;
}

bool UInterchangeBaseNode::SetAssetName(const FString& AssetName) {
    return false;
}

bool UInterchangeBaseNode::RemoveTargetNodeUid(const FString& AssetUid) const {
    return false;
}

bool UInterchangeBaseNode::RemoveAttribute(const FString& NodeAttributeKey) {
    return false;
}

bool UInterchangeBaseNode::IsEnabled() const {
    return false;
}

void UInterchangeBaseNode::InitializeNode(const FString& UniqueID, const FString& DisplayLabel, const EInterchangeNodeContainerType NodeContainerType) {
}

bool UInterchangeBaseNode::GetVector2Attribute(const FString& NodeAttributeKey, FVector2f& OutValue) const {
    return false;
}

FString UInterchangeBaseNode::GetUniqueID() const {
    return TEXT("");
}

void UInterchangeBaseNode::GetTargetNodeUids(TArray<FString>& OutTargetAssets) const {
}

int32 UInterchangeBaseNode::GetTargetNodeCount() const {
    return 0;
}

bool UInterchangeBaseNode::GetStringAttribute(const FString& NodeAttributeKey, FString& OutValue) const {
    return false;
}

FString UInterchangeBaseNode::GetParentUid() const {
    return TEXT("");
}

EInterchangeNodeContainerType UInterchangeBaseNode::GetNodeContainerType() const {
    return EInterchangeNodeContainerType::None;
}

bool UInterchangeBaseNode::GetLinearColorAttribute(const FString& NodeAttributeKey, FLinearColor& OutValue) const {
    return false;
}

bool UInterchangeBaseNode::GetInt32Attribute(const FString& NodeAttributeKey, int32& OutValue) const {
    return false;
}

bool UInterchangeBaseNode::GetGuidAttribute(const FString& NodeAttributeKey, FGuid& OutValue) const {
    return false;
}

bool UInterchangeBaseNode::GetFloatAttribute(const FString& NodeAttributeKey, float& OutValue) const {
    return false;
}

bool UInterchangeBaseNode::GetDoubleAttribute(const FString& NodeAttributeKey, double& OutValue) const {
    return false;
}

FString UInterchangeBaseNode::GetDisplayLabel() const {
    return TEXT("");
}

bool UInterchangeBaseNode::GetBooleanAttribute(const FString& NodeAttributeKey, bool& OutValue) const {
    return false;
}

FString UInterchangeBaseNode::GetAssetName() const {
    return TEXT("");
}

bool UInterchangeBaseNode::AddVector2Attribute(const FString& NodeAttributeKey, const FVector2f& Value) {
    return false;
}

bool UInterchangeBaseNode::AddTargetNodeUid(const FString& AssetUid) const {
    return false;
}

bool UInterchangeBaseNode::AddStringAttribute(const FString& NodeAttributeKey, const FString& Value) {
    return false;
}

bool UInterchangeBaseNode::AddLinearColorAttribute(const FString& NodeAttributeKey, const FLinearColor& Value) {
    return false;
}

bool UInterchangeBaseNode::AddInt32Attribute(const FString& NodeAttributeKey, const int32& Value) {
    return false;
}

bool UInterchangeBaseNode::AddGuidAttribute(const FString& NodeAttributeKey, const FGuid& Value) {
    return false;
}

bool UInterchangeBaseNode::AddFloatAttribute(const FString& NodeAttributeKey, const float& Value) {
    return false;
}

bool UInterchangeBaseNode::AddDoubleAttribute(const FString& NodeAttributeKey, const double& Value) {
    return false;
}

bool UInterchangeBaseNode::AddBooleanAttribute(const FString& NodeAttributeKey, const bool& Value) {
    return false;
}


