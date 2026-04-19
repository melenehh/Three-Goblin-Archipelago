#include "NiagaraDataChannelWriter.h"

UNiagaraDataChannelWriter::UNiagaraDataChannelWriter() {
    this->Owner = NULL;
}

void UNiagaraDataChannelWriter::WriteVector4(FName VarName, int32 Index, FVector4 InData) {
}

void UNiagaraDataChannelWriter::WriteVector2D(FName VarName, int32 Index, FVector2D InData) {
}

void UNiagaraDataChannelWriter::WriteVector(FName VarName, int32 Index, FVector InData) {
}

void UNiagaraDataChannelWriter::WriteSpawnInfo(FName VarName, int32 Index, FNiagaraSpawnInfo InData) {
}

void UNiagaraDataChannelWriter::WriteQuat(FName VarName, int32 Index, FQuat InData) {
}

void UNiagaraDataChannelWriter::WritePosition(FName VarName, int32 Index, FVector InData) {
}

void UNiagaraDataChannelWriter::WriteLinearColor(FName VarName, int32 Index, FLinearColor InData) {
}

void UNiagaraDataChannelWriter::WriteInt(FName VarName, int32 Index, int32 InData) {
}

void UNiagaraDataChannelWriter::WriteFloat(FName VarName, int32 Index, double InData) {
}

void UNiagaraDataChannelWriter::WriteBool(FName VarName, int32 Index, bool InData) {
}

int32 UNiagaraDataChannelWriter::Num() const {
    return 0;
}

bool UNiagaraDataChannelWriter::InitWrite(FNiagaraDataChannelSearchParameters SearchParams, int32 Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU) {
    return false;
}


