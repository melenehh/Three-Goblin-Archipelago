#include "NiagaraDataInterfaceDataChannelWrite.h"

UNiagaraDataInterfaceDataChannelWrite::UNiagaraDataInterfaceDataChannelWrite() {
    this->AllocationMode = ENiagaraDataChannelAllocationMode::Static;
    this->AllocationCount = 0;
    this->bPublishToGame = false;
    this->bPublishToCPU = false;
    this->bPublishToGPU = false;
    this->bUpdateDestinationDataEveryTick = true;
    this->Channel = NULL;
}


