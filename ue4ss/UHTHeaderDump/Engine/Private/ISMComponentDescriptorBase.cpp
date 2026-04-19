#include "ISMComponentDescriptorBase.h"

FISMComponentDescriptorBase::FISMComponentDescriptorBase() {
    this->Hash = 0;
    this->ComponentClass = NULL;
    this->Mobility = EComponentMobility::Static;
    this->VirtualTextureRenderPassType = ERuntimeVirtualTextureMainPassType::Never;
    this->LightmapType = ELightmapType::Default;
    this->RayTracingGroupId = 0;
    this->RayTracingGroupCullingPriority = ERayTracingGroupCullingPriority::CP_0_NEVER_CULL;
    this->bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::No;
    this->CustomDepthStencilWriteMask = ERendererStencilMask::ERSM_Default;
    this->InstanceStartCullDistance = 0;
    this->InstanceEndCullDistance = 0;
    this->InstanceLODDistanceScale = 0.00f;
    this->VirtualTextureCullMips = 0;
    this->TranslucencySortPriority = 0;
    this->OverriddenLightMapRes = 0;
    this->CustomDepthStencilValue = 0;
    this->bCastShadow = false;
    this->bCastDynamicShadow = false;
    this->bCastStaticShadow = false;
    this->bCastContactShadow = false;
    this->bCastShadowAsTwoSided = false;
    this->bAffectDynamicIndirectLighting = false;
    this->bAffectDistanceFieldLighting = false;
    this->bReceivesDecals = false;
    this->bOverrideLightMapRes = false;
    this->bUseAsOccluder = false;
    this->bEnableDensityScaling = false;
    this->bEnableDiscardOnLoad = false;
    this->bRenderCustomDepth = false;
    this->bVisibleInRayTracing = false;
    this->bHiddenInGame = false;
    this->bIsEditorOnly = false;
    this->bVisible = false;
    this->bEvaluateWorldPositionOffset = false;
    this->bReverseCulling = false;
    this->bUseDefaultCollision = false;
    this->bGenerateOverlapEvents = false;
    this->WorldPositionOffsetDisableDistance = 0;
    this->ShadowCacheInvalidationBehavior = EShadowCacheInvalidationBehavior::Auto;
    this->DetailMode = DM_Low;
}

