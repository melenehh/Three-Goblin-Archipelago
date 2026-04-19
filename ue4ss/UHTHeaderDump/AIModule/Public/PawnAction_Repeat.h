#pragma once
#include "CoreMinimal.h"
#include "EPawnActionFailHandling.h"
#include "PawnAction.h"
#include "PawnAction_Repeat.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UDEPRECATED_PawnAction_Repeat : public UDEPRECATED_PawnAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDEPRECATED_PawnAction* ActionToRepeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDEPRECATED_PawnAction* RecentActionCopy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPawnActionFailHandling::Type> ChildFailureHandlingMode;
    
    UDEPRECATED_PawnAction_Repeat();

};

