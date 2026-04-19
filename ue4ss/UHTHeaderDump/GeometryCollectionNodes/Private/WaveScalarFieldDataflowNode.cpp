#include "WaveScalarFieldDataflowNode.h"

FWaveScalarFieldDataflowNode::FWaveScalarFieldDataflowNode() {
    this->Magnitude = 0.00f;
    this->Wavelength = 0.00f;
    this->Period = 0.00f;
    this->FunctionType = EDataflowWaveFunctionType::Dataflow_WaveFunctionType_Cosine;
    this->FalloffType = EDataflowFieldFalloffType::Dataflow_FieldFalloffType_None;
    this->NumSamplePositions = 0;
}

