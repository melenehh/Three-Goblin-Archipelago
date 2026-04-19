#include "GroomAsset.h"

UGroomAsset::UGroomAsset() {
    this->EnableGlobalInterpolation = false;
    this->EnableSimulationCache = false;
    this->HairInterpolationType = EGroomInterpolationType::SmoothTransform;
    this->RiggedSkeletalMesh = NULL;
}

void UGroomAsset::SetRiggedSkeletalMesh(USkeletalMesh* In) {
}

void UGroomAsset::SetHairInterpolationType(EGroomInterpolationType In) {
}

void UGroomAsset::SetHairGroupsRendering(const TArray<FHairGroupsRendering>& In) {
}

void UGroomAsset::SetHairGroupsPhysics(const TArray<FHairGroupsPhysics>& In) {
}

void UGroomAsset::SetHairGroupsMeshes(const TArray<FHairGroupsMeshesSourceDescription>& In) {
}

void UGroomAsset::SetHairGroupsMaterials(const TArray<FHairGroupsMaterial>& In) {
}

void UGroomAsset::SetHairGroupsLOD(const TArray<FHairGroupsLOD>& In) {
}

void UGroomAsset::SetHairGroupsInterpolation(const TArray<FHairGroupsInterpolation>& In) {
}

void UGroomAsset::SetHairGroupsCards(const TArray<FHairGroupsCardsSourceDescription>& In) {
}

void UGroomAsset::SetEnableSimulationCache(bool In) {
}

void UGroomAsset::SetEnableGlobalInterpolation(bool In) {
}

void UGroomAsset::SetDeformedGroupSections(const TArray<int32>& In) {
}

USkeletalMesh* UGroomAsset::GetRiggedSkeletalMesh() const {
    return NULL;
}

EGroomInterpolationType UGroomAsset::GetHairInterpolationType() const {
    return EGroomInterpolationType::None;
}

TArray<FHairGroupsRendering> UGroomAsset::GetHairGroupsRendering() {
    return TArray<FHairGroupsRendering>();
}

TArray<FHairGroupsPhysics> UGroomAsset::GetHairGroupsPhysics() {
    return TArray<FHairGroupsPhysics>();
}

TArray<FHairGroupsMeshesSourceDescription> UGroomAsset::GetHairGroupsMeshes() {
    return TArray<FHairGroupsMeshesSourceDescription>();
}

TArray<FHairGroupsMaterial> UGroomAsset::GetHairGroupsMaterials() {
    return TArray<FHairGroupsMaterial>();
}

TArray<FHairGroupsLOD> UGroomAsset::GetHairGroupsLOD() {
    return TArray<FHairGroupsLOD>();
}

TArray<FHairGroupsInterpolation> UGroomAsset::GetHairGroupsInterpolation() {
    return TArray<FHairGroupsInterpolation>();
}

TArray<FHairGroupsCardsSourceDescription> UGroomAsset::GetHairGroupsCards() {
    return TArray<FHairGroupsCardsSourceDescription>();
}

bool UGroomAsset::GetEnableSimulationCache() const {
    return false;
}

bool UGroomAsset::GetEnableGlobalInterpolation() const {
    return false;
}

TArray<int32> UGroomAsset::GetDeformedGroupSections() {
    return TArray<int32>();
}


