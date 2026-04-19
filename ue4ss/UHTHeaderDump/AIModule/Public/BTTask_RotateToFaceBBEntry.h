#pragma once
#include "CoreMinimal.h"
#include "BTTask_BlackboardBase.h"
#include "BTTask_RotateToFaceBBEntry.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=Engine)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Precision;
    
public:
    UBTTask_RotateToFaceBBEntry();

};

