#pragma once
#include "CoreMinimal.h"
#include "EMetaSoundBuilderResult.h"
#include "EMetaSoundOutputAudioFormat.h"
#include "MetaSoundBuilderBase.h"
#include "MetaSoundBuilderOptions.h"
#include "OnCreateAuditionGeneratorHandleDelegateDelegate.h"
#include "MetaSoundSourceBuilder.generated.h"

class IMetaSoundDocumentInterface;
class UMetaSoundDocumentInterface;
class UAudioComponent;
class UObject;

UCLASS(Blueprintable, Transient)
class METASOUNDENGINE_API UMetaSoundSourceBuilder : public UMetaSoundBuilderBase {
    GENERATED_BODY()
public:
    UMetaSoundSourceBuilder();

    UFUNCTION(BlueprintCallable)
    void SetFormat(EMetaSoundOutputAudioFormat OutputFormat, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLiveUpdatesEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IMetaSoundDocumentInterface> Build(UObject* Parent, const FMetaSoundBuilderOptions& Options) const;
    
    UFUNCTION(BlueprintCallable)
    void Audition(UObject* Parent, UAudioComponent* AudioComponent, FOnCreateAuditionGeneratorHandleDelegate OnCreateGenerator, bool bLiveUpdatesEnabled);
    
};

