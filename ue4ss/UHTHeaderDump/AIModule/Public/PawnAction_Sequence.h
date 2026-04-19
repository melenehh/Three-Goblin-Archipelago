#pragma once
#include "CoreMinimal.h"
#include "EPawnActionFailHandling.h"
#include "PawnAction.h"
#include "PawnAction_Sequence.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UDEPRECATED_PawnAction_Sequence : public UDEPRECATED_PawnAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDEPRECATED_PawnAction*> ActionSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPawnActionFailHandling::Type> ChildFailureHandlingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDEPRECATED_PawnAction* RecentActionCopy;
    
    UDEPRECATED_PawnAction_Sequence();

};

