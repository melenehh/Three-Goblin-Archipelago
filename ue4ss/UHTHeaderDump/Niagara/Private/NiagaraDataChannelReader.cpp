#include "NiagaraDataChannelReader.h"

UNiagaraDataChannelReader::UNiagaraDataChannelReader() {
    this->Owner = NULL;
}

FVector4 UNiagaraDataChannelReader::ReadVector4(FName VarName, int32 Index) const {
    return FVector4{};
}

FVector2D UNiagaraDataChannelReader::ReadVector2D(FName VarName, int32 Index) const {
    return FVector2D{};
}

FVector UNiagaraDataChannelReader::ReadVector(FName VarName, int32 Index) const {
    return FVector{};
}

FQuat UNiagaraDataChannelReader::ReadQuat(FName VarName, int32 Index) const {
    return FQuat{};
}

FVector UNiagaraDataChannelReader::ReadPosition(FName VarName, int32 Index) const {
    return FVector{};
}

FLinearColor UNiagaraDataChannelReader::ReadLinearColor(FName VarName, int32 Index) const {
    return FLinearColor{};
}

int32 UNiagaraDataChannelReader::ReadInt(FName VarName, int32 Index) const {
    return 0;
}

double UNiagaraDataChannelReader::ReadFloat(FName VarName, int32 Index) const {
    return 0.0;
}

bool UNiagaraDataChannelReader::ReadBool(FName VarName, int32 Index) const {
    return false;
}

int32 UNiagaraDataChannelReader::Num() const {
    return 0;
}

bool UNiagaraDataChannelReader::InitAccess(FNiagaraDataChannelSearchParameters SearchParams, bool bReadPrevFrameData) {
    return false;
}


