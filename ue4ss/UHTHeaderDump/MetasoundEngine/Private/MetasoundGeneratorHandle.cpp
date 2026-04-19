#include "MetasoundGeneratorHandle.h"

UMetasoundGeneratorHandle::UMetasoundGeneratorHandle() {
}

bool UMetasoundGeneratorHandle::WatchOutput(FName OutputName, const FOnMetasoundOutputValueChanged& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName) {
    return false;
}

UMetasoundGeneratorHandle* UMetasoundGeneratorHandle::CreateMetaSoundGeneratorHandle(UAudioComponent* OnComponent) {
    return NULL;
}

bool UMetasoundGeneratorHandle::ApplyParameterPack(UMetasoundParameterPack* Pack) {
    return false;
}


