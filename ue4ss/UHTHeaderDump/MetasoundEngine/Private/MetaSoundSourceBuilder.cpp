#include "MetaSoundSourceBuilder.h"

UMetaSoundSourceBuilder::UMetaSoundSourceBuilder() {
}

void UMetaSoundSourceBuilder::SetFormat(EMetaSoundOutputAudioFormat OutputFormat, EMetaSoundBuilderResult& OutResult) {
}

bool UMetaSoundSourceBuilder::GetLiveUpdatesEnabled() const {
    return false;
}

TScriptInterface<IMetaSoundDocumentInterface> UMetaSoundSourceBuilder::Build(UObject* Parent, const FMetaSoundBuilderOptions& Options) const {
    return NULL;
}

void UMetaSoundSourceBuilder::Audition(UObject* Parent, UAudioComponent* AudioComponent, FOnCreateAuditionGeneratorHandleDelegate OnCreateGenerator, bool bLiveUpdatesEnabled) {
}


