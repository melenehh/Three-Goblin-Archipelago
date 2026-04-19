#pragma once
#include "CoreMinimal.h"
#include "MetaSoundBuilderOptions.generated.h"

class IMetaSoundDocumentInterface;
class UMetaSoundDocumentInterface;

USTRUCT(BlueprintType)
struct METASOUNDENGINE_API FMetaSoundBuilderOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceUniqueClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddToRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMetaSoundDocumentInterface> ExistingMetaSound;
    
    FMetaSoundBuilderOptions();
};

