#pragma once
#include "CoreMinimal.h"
#include "BTService.h"
#include "BlackboardKeySelector.h"
#include "BTService_BlackboardBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UBTService_BlackboardBase : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKey;
    
public:
    UBTService_BlackboardBase();

};

