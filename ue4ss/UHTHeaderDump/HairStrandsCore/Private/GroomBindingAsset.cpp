#include "GroomBindingAsset.h"

UGroomBindingAsset::UGroomBindingAsset() {
    this->GroomBindingType = EGroomBindingMeshType::SkeletalMesh;
    this->Groom = NULL;
    this->SourceSkeletalMesh = NULL;
    this->TargetSkeletalMesh = NULL;
    this->SourceGeometryCache = NULL;
    this->TargetGeometryCache = NULL;
    this->NumInterpolationPoints = 100;
    this->MatchingSection = 0;
}

void UGroomBindingAsset::SetTargetSkeletalMesh(USkeletalMesh* InSkeletalMesh) {
}

void UGroomBindingAsset::SetTargetGeometryCache(UGeometryCache* InGeometryCache) {
}

void UGroomBindingAsset::SetSourceSkeletalMesh(USkeletalMesh* InSkeletalMesh) {
}

void UGroomBindingAsset::SetSourceGeometryCache(UGeometryCache* InGeometryCache) {
}

void UGroomBindingAsset::SetNumInterpolationPoints(int32 InNumInterpolationPoints) {
}

void UGroomBindingAsset::SetMatchingSection(int32 InMatchingSection) {
}

void UGroomBindingAsset::SetGroupInfos(const TArray<FGoomBindingGroupInfo>& InGroupInfos) {
}

void UGroomBindingAsset::SetGroomBindingType(EGroomBindingMeshType InGroomBindingType) {
}

void UGroomBindingAsset::SetGroom(UGroomAsset* InGroom) {
}

USkeletalMesh* UGroomBindingAsset::GetTargetSkeletalMesh() const {
    return NULL;
}

UGeometryCache* UGroomBindingAsset::GetTargetGeometryCache() const {
    return NULL;
}

USkeletalMesh* UGroomBindingAsset::GetSourceSkeletalMesh() const {
    return NULL;
}

UGeometryCache* UGroomBindingAsset::GetSourceGeometryCache() const {
    return NULL;
}

int32 UGroomBindingAsset::GetNumInterpolationPoints() const {
    return 0;
}

int32 UGroomBindingAsset::GetMatchingSection() const {
    return 0;
}

TArray<FGoomBindingGroupInfo> UGroomBindingAsset::GetGroupInfos() const {
    return TArray<FGoomBindingGroupInfo>();
}

EGroomBindingMeshType UGroomBindingAsset::GetGroomBindingType() const {
    return EGroomBindingMeshType::SkeletalMesh;
}

UGroomAsset* UGroomBindingAsset::GetGroom() const {
    return NULL;
}


