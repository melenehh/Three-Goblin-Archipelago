#include "NiagaraDataInterfaceActorComponent.h"

UNiagaraDataInterfaceActorComponent::UNiagaraDataInterfaceActorComponent() {
    this->SourceMode = ENDIActorComponentSourceMode::Default;
    this->LocalPlayerIndex = 0;
    this->bRequireCurrentFrameData = true;
}


