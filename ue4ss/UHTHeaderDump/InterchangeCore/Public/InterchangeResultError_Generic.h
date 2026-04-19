#pragma once
#include "CoreMinimal.h"
#include "InterchangeResultError.h"
#include "InterchangeResultError_Generic.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeResultError_Generic : public UInterchangeResultError {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UInterchangeResultError_Generic();

};

