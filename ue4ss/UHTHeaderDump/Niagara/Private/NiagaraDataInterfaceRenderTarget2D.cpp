#include "NiagaraDataInterfaceRenderTarget2D.h"

UNiagaraDataInterfaceRenderTarget2D::UNiagaraDataInterfaceRenderTarget2D() {
    this->MipMapGeneration = ENiagaraMipMapGeneration::Disabled;
    this->MipMapGenerationType = ENiagaraMipMapGenerationType::Linear;
    this->OverrideRenderTargetFormat = RTF_R8;
    this->OverrideRenderTargetFilter = TF_Default;
    this->bInheritUserParameterSettings = false;
    this->bOverrideFormat = false;
}


