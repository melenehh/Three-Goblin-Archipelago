#include "NiagaraSettings.h"

UNiagaraSettings::UNiagaraSettings() {
    this->bSystemsSupportLargeWorldCoordinates = true;
    this->bEnforceStrictStackTypes = true;
    this->bExperimentalVMEnabled = false;
    this->bLimitDeltaTime = true;
    this->MaxDeltaTimePerTick = 0.12f;
    this->QualityLevels.AddDefaulted(5);
    this->DefaultRenderTargetFormat = RTF_RGBA16f;
    this->DefaultGridFormat = ENiagaraGpuBufferFormat::HalfFloat;
    this->DefaultRendererMotionVectorSetting = ENiagaraDefaultRendererMotionVectorSetting::Precise;
    this->DefaultPixelCoverageMode = ENiagaraDefaultRendererPixelCoverageMode::Enabled;
    this->DefaultSortPrecision = ENiagaraDefaultSortPrecision::Low;
    this->DefaultGpuTranslucentLatency = ENiagaraDefaultGpuTranslucentLatency::Immediate;
    this->DefaultLightInverseExposureBlend = 0.00f;
    this->NDISkelMesh_GpuMaxInfluences = ENDISkelMesh_GpuMaxInfluences::Unlimited;
    this->NDISkelMesh_GpuUniformSamplingFormat = ENDISkelMesh_GpuUniformSamplingFormat::Full;
    this->NDISkelMesh_AdjacencyTriangleIndexFormat = ENDISkelMesh_AdjacencyTriangleIndexFormat::Full;
    this->NDIStaticMesh_AllowDistanceFields = false;
    this->NDICollisionQuery_AsyncGpuTraceProviderOrder.AddDefaulted(2);
    this->SimCacheAuxiliaryFileBasePath = TEXT("{project_dir}/Saved/NiagaraSimCache");
    this->SimCacheMaxCPUMemoryVolumetrics = 5000;
}


