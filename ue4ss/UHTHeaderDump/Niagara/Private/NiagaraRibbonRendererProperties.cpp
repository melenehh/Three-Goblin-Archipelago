#include "NiagaraRibbonRendererProperties.h"

UNiagaraRibbonRendererProperties::UNiagaraRibbonRendererProperties() {
    this->Material = NULL;
    this->FacingMode = ENiagaraRibbonFacingMode::Screen;
    this->MaxNumRibbons = 0;
    this->DrawDirection = ENiagaraRibbonDrawDirection::FrontToBack;
    this->Shape = ENiagaraRibbonShapeMode::Plane;
    this->bEnableAccurateGeometry = false;
    this->bUseMaterialBackfaceCulling = false;
    this->bUseGPUInit = false;
    this->bUseConstantFactor = false;
    this->bScreenSpaceTessellation = true;
    this->bLinkOrderUseUniqueID = true;
    this->WidthSegmentationCount = 1;
    this->MultiPlaneCount = 2;
    this->TubeSubdivisions = 3;
    this->TessellationMode = ENiagaraRibbonTessellationMode::Automatic;
    this->CurveTension = 0.00f;
    this->TessellationFactor = 16;
    this->TessellationAngle = 15.00f;
    this->MaterialParamValidMask = 0;
}


