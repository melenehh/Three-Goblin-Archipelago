#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InterchangeResultsContainer.generated.h"

class UInterchangeResult;

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeResultsContainer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInterchangeResult*> Results;
    
public:
    UInterchangeResultsContainer();

};

