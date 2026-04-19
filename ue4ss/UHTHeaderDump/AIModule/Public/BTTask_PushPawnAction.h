#pragma once
#include "CoreMinimal.h"
#include "BTTask_PawnActionBase.h"
#include "BTTask_PushPawnAction.generated.h"

class UDEPRECATED_PawnAction;

UCLASS(Blueprintable, MinimalAPI)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDEPRECATED_PawnAction* Action;
    
public:
    UBTTask_PushPawnAction();

};

