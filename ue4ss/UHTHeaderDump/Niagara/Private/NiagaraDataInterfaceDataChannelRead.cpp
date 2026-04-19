#include "NiagaraDataInterfaceDataChannelRead.h"

UNiagaraDataInterfaceDataChannelRead::UNiagaraDataInterfaceDataChannelRead() {
    this->Channel = NULL;
    this->bReadCurrentFrame = false;
    this->bUpdateSourceDataEveryTick = true;
    this->bOverrideSpawnGroupToDataChannelIndex = true;
    this->SpawnInfoName = TEXT("SpawnInfo");
}


