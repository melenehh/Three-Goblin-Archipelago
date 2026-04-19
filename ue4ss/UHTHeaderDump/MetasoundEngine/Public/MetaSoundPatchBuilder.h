#pragma once
#include "CoreMinimal.h"
#include "MetaSoundBuilderBase.h"
#include "MetaSoundBuilderOptions.h"
#include "MetaSoundPatchBuilder.generated.h"

class IMetaSoundDocumentInterface;
class UMetaSoundDocumentInterface;
class UObject;

UCLASS(Blueprintable, Transient)
class METASOUNDENGINE_API UMetaSoundPatchBuilder : public UMetaSoundBuilderBase {
    GENERATED_BODY()
public:
    UMetaSoundPatchBuilder();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IMetaSoundDocumentInterface> Build(UObject* Parent, const FMetaSoundBuilderOptions& Options) const;
    
};

