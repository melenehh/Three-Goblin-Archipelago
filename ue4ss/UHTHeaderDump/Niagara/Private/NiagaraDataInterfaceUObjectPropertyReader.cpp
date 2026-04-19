#include "NiagaraDataInterfaceUObjectPropertyReader.h"

UNiagaraDataInterfaceUObjectPropertyReader::UNiagaraDataInterfaceUObjectPropertyReader() {
    this->SourceMode = ENDIObjectPropertyReaderSourceMode::Binding;
    this->SourceActorComponentClass = NULL;
}

void UNiagaraDataInterfaceUObjectPropertyReader::SetUObjectReaderPropertyRemap(UNiagaraComponent* NiagaraComponent, FName UserParameterName, FName GraphName, FName RemapName) {
}


