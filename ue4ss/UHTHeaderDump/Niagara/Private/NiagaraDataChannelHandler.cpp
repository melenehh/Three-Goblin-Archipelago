#include "NiagaraDataChannelHandler.h"

UNiagaraDataChannelHandler::UNiagaraDataChannelHandler() {
    this->Writer = NULL;
    this->Reader = NULL;
}

UNiagaraDataChannelWriter* UNiagaraDataChannelHandler::GetDataChannelWriter() {
    return NULL;
}

UNiagaraDataChannelReader* UNiagaraDataChannelHandler::GetDataChannelReader() {
    return NULL;
}


