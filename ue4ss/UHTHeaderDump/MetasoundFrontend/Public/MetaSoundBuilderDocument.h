#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MetaSoundDocumentInterface.h"
#include "MetasoundFrontendDocument.h"
#include "MetaSoundBuilderDocument.generated.h"

UCLASS(Blueprintable)
class METASOUNDFRONTEND_API UMetaSoundBuilderDocument : public UObject, public IMetaSoundDocumentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendDocument Document;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* MetaSoundUClass;
    
public:
    UMetaSoundBuilderDocument();


    // Fix for true pure virtual functions not being implemented
};

