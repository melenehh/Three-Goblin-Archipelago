#pragma once
#include "CoreMinimal.h"
#include "InterchangeResultSuccess.h"
#include "InterchangeResultDisplay_Generic.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeResultDisplay_Generic : public UInterchangeResultSuccess {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UInterchangeResultDisplay_Generic();

};

