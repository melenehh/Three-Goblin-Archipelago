#include "NiagaraDataInterfaceRenderTarget2DArray.h"

UNiagaraDataInterfaceRenderTarget2DArray::UNiagaraDataInterfaceRenderTarget2DArray() {
    this->OverrideRenderTargetFormat = RTF_R8;
    this->OverrideRenderTargetFilter = TF_Default;
    this->bInheritUserParameterSettings = false;
    this->bOverrideFormat = false;
}


