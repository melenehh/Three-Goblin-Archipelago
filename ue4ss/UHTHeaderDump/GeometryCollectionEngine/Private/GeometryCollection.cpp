#include "GeometryCollection.h"

UGeometryCollection::UGeometryCollection() {
    this->EnableClustering = true;
    this->ClusterGroupIndex = 0;
    this->MaxClusterLevel = 100;
    this->DamageModel = EDamageModelTypeEnum::Chaos_Damage_Model_UserDefined_Damage_Threshold;
    this->DamageThreshold.AddDefaulted(3);
    this->bUseSizeSpecificDamageThreshold = false;
    this->PerClusterOnlyDamageThreshold = false;
    this->ClusterConnectionType = EClusterConnectionTypeEnum::Chaos_MinimalSpanningSubsetDelaunayTriangulation;
    this->ConnectionGraphBoundsFilteringMargin = 0.00f;
    this->bUseFullPrecisionUVs = false;
    this->bStripOnCook = false;
    this->bStripRenderDataOnCook = false;
    this->CustomRendererType = NULL;
    this->EnableNanite = false;
    this->bConvertVertexColorsToSRGB = true;
    this->PhysicsMaterial = NULL;
    this->bDensityFromPhysicsMaterial = false;
    this->bMassAsDensity = true;
    this->Mass = 2500.00f;
    this->MinimumMassClamp = 0.10f;
    this->bImportCollisionFromSource = false;
    this->bScaleOnRemoval = true;
    this->bRemoveOnMaxSleep = false;
    this->bSlowMovingAsSleeping = true;
    this->SlowMovingVelocityThreshold = 1.00f;
    this->EnableRemovePiecesOnFracture = false;
    this->DataflowAsset = NULL;
    this->DataflowTerminal = TEXT("GeometryCollectionTerminal");
    this->RootIndex = -1;
    this->BoneSelectedMaterialIndex = -1;
    this->BoneSelectedMaterial = NULL;
}

void UGeometryCollection::SetEnableNanite(bool bValue) {
}

void UGeometryCollection::SetConvertVertexColorsToSRGB(bool bValue) {
}


