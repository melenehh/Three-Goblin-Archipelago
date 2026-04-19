#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EAIRequestPriority.h"
#include "EPawnActionAbortState.h"
#include "PawnActionEvent.h"
#include "PawnActionStack.h"
#include "PawnActionsComponent.generated.h"

class APawn;
class UDEPRECATED_PawnAction;
class UObject;

UCLASS(Blueprintable, Deprecated, MinimalAPI, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDEPRECATED_PawnActionsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* ControlledPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPawnActionStack> ActionStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPawnActionEvent> ActionEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDEPRECATED_PawnAction* CurrentAction;
    
public:
    UDEPRECATED_PawnActionsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool K2_PushAction(UDEPRECATED_PawnAction* NewAction, TEnumAsByte<EAIRequestPriority::Type> Priority, UObject* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_PerformAction(APawn* Pawn, UDEPRECATED_PawnAction* Action, TEnumAsByte<EAIRequestPriority::Type> Priority);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPawnActionAbortState::Type> K2_ForceAbortAction(UDEPRECATED_PawnAction* ActionToAbort);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPawnActionAbortState::Type> K2_AbortAction(UDEPRECATED_PawnAction* ActionToAbort);
    
};

