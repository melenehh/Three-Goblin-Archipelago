#include "NiagaraDataInterfaceRenderTargetCube.h"

UNiagaraDataInterfaceRenderTargetCube::UNiagaraDataInterfaceRenderTargetCube() {
    this->Size = 0;
    this->OverrideRenderTargetFormat = RTF_R8;
    this->OverrideRenderTargetFilter = TF_Default;
    this->bInheritUserParameterSettings = false;
    this->bOverrideFormat = false;
}


