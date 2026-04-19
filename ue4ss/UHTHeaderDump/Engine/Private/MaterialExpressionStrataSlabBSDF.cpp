#include "MaterialExpressionStrataSlabBSDF.h"

UMaterialExpressionStrataSlabBSDF::UMaterialExpressionStrataSlabBSDF() {
    this->SubsurfaceProfile = NULL;
    this->SpecularProfile = NULL;
    this->bUseSSSDiffusion = true;
}


