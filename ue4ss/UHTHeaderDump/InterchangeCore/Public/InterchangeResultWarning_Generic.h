#pragma once
#include "CoreMinimal.h"
#include "InterchangeResultWarning.h"
#include "InterchangeResultWarning_Generic.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeResultWarning_Generic : public UInterchangeResultWarning {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UInterchangeResultWarning_Generic();

};

