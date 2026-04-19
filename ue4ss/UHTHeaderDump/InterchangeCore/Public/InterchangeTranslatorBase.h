#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InterchangeTranslatorBase.generated.h"

class UInterchangeResultsContainer;
class UInterchangeSourceData;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UInterchangeTranslatorBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterchangeResultsContainer* Results;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterchangeSourceData* SourceData;
    
    UInterchangeTranslatorBase();

};

