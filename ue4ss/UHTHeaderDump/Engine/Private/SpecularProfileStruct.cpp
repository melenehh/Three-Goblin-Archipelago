#include "SpecularProfileStruct.h"

FSpecularProfileStruct::FSpecularProfileStruct() {
    this->Format = ESpecularProfileFormat::ViewLightVector;
    this->Texture = NULL;
}

