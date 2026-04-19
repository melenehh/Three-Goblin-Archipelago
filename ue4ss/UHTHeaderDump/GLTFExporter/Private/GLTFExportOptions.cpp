#include "GLTFExportOptions.h"

UGLTFExportOptions::UGLTFExportOptions() {
    this->ExportUniformScale = 0.01f;
    this->bExportPreviewMesh = true;
    this->bSkipNearDefaultValues = true;
    this->bIncludeCopyrightNotice = false;
    this->bExportProxyMaterials = true;
    this->bExportUnlitMaterials = true;
    this->bExportClearCoatMaterials = true;
    this->bExportEmissiveStrength = true;
    this->BakeMaterialInputs = EGLTFMaterialBakeMode::UseMeshData;
    this->DefaultMaterialBakeSize = EGLTFMaterialBakeSizePOT::POT_1024;
    this->DefaultMaterialBakeFilter = TF_Trilinear;
    this->DefaultMaterialBakeTiling = TA_Wrap;
    this->DefaultLevelOfDetail = 0;
    this->bExportVertexColors = false;
    this->bExportVertexSkinWeights = true;
    this->bUseMeshQuantization = false;
    this->bExportLevelSequences = true;
    this->bExportAnimationSequences = true;
    this->TextureImageFormat = EGLTFTextureImageFormat::PNG;
    this->TextureImageQuality = 0;
    this->bExportTextureTransforms = true;
    this->bAdjustNormalmaps = true;
    this->bExportHiddenInGame = false;
    this->bExportLights = true;
    this->bExportCameras = true;
    this->ExportMaterialVariants = EGLTFMaterialVariantMode::UseMeshData;
}

void UGLTFExportOptions::ResetToDefault() {
}


