#pragma once
#include "CoreMinimal.h"
#include "PawnAction.h"
#include "PawnAction_Wait.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UDEPRECATED_PawnAction_Wait : public UDEPRECATED_PawnAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToWait;
    
    UDEPRECATED_PawnAction_Wait();

};

