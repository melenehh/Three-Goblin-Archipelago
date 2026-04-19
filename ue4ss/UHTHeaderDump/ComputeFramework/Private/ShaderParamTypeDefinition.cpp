#include "ShaderParamTypeDefinition.h"

FShaderParamTypeDefinition::FShaderParamTypeDefinition() {
    this->ArrayElementCount = 0;
    this->BindingType = EShaderParamBindingType::None;
    this->ResourceType = EShaderResourceType::None;
}

