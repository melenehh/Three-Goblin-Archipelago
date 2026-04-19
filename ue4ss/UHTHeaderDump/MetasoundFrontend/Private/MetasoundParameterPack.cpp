#include "MetasoundParameterPack.h"

UMetasoundParameterPack::UMetasoundParameterPack() {
}

ESetParamResult UMetasoundParameterPack::SetTrigger(FName ParameterName, bool OnlyIfExists) {
    return ESetParamResult::Succeeded;
}

ESetParamResult UMetasoundParameterPack::SetString(FName ParameterName, const FString& InValue, bool OnlyIfExists) {
    return ESetParamResult::Succeeded;
}

ESetParamResult UMetasoundParameterPack::SetInt(FName ParameterName, int32 InValue, bool OnlyIfExists) {
    return ESetParamResult::Succeeded;
}

ESetParamResult UMetasoundParameterPack::SetFloat(FName ParameterName, float InValue, bool OnlyIfExists) {
    return ESetParamResult::Succeeded;
}

ESetParamResult UMetasoundParameterPack::SetBool(FName ParameterName, bool InValue, bool OnlyIfExists) {
    return ESetParamResult::Succeeded;
}

UMetasoundParameterPack* UMetasoundParameterPack::MakeMetasoundParameterPack() {
    return NULL;
}

bool UMetasoundParameterPack::HasTrigger(FName ParameterName) const {
    return false;
}

bool UMetasoundParameterPack::HasString(FName ParameterName) const {
    return false;
}

bool UMetasoundParameterPack::HasInt(FName ParameterName) const {
    return false;
}

bool UMetasoundParameterPack::HasFloat(FName ParameterName) const {
    return false;
}

bool UMetasoundParameterPack::HasBool(FName ParameterName) const {
    return false;
}

bool UMetasoundParameterPack::GetTrigger(FName ParameterName, ESetParamResult& Result) const {
    return false;
}

FString UMetasoundParameterPack::GetString(FName ParameterName, ESetParamResult& Result) const {
    return TEXT("");
}

int32 UMetasoundParameterPack::GetInt(FName ParameterName, ESetParamResult& Result) const {
    return 0;
}

float UMetasoundParameterPack::GetFloat(FName ParameterName, ESetParamResult& Result) const {
    return 0.0f;
}

bool UMetasoundParameterPack::GetBool(FName ParameterName, ESetParamResult& Result) const {
    return false;
}


