#include "ShaderValueType.h"

FShaderValueType::FShaderValueType() {
    this->Type = EShaderFundamentalType::Bool;
    this->DimensionType = EShaderFundamentalDimensionType::Scalar;
    this->bIsDynamicArray = false;
}

