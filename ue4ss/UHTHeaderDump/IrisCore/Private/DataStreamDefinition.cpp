#include "DataStreamDefinition.h"

FDataStreamDefinition::FDataStreamDefinition() {
    this->Class = NULL;
    this->DefaultSendStatus = EDataStreamSendStatus::Send;
    this->bAutoCreate = false;
}

