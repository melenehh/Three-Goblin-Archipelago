#pragma once
#include "CoreMinimal.h"
#include "MetaSoundFrontendDocumentBuilder.generated.h"

class IMetaSoundDocumentInterface;
class UMetaSoundDocumentInterface;

USTRUCT(BlueprintType)
struct METASOUNDFRONTEND_API FMetaSoundFrontendDocumentBuilder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMetaSoundDocumentInterface> DocumentInterface;
    
public:
    FMetaSoundFrontendDocumentBuilder();
};

