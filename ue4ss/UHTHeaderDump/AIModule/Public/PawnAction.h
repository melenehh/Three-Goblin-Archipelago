#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EAIRequestPriority.h"
#include "EPawnActionResult.h"
#include "Templates/SubclassOf.h"
#include "PawnAction.generated.h"

class UBrainComponent;
class UDEPRECATED_PawnAction;
class UDEPRECATED_PawnActionsComponent;

UCLASS(Abstract, Blueprintable, Deprecated, EditInlineNew, MinimalAPI, NotPlaceable)
class UDEPRECATED_PawnAction : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDEPRECATED_PawnAction* ChildAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDEPRECATED_PawnAction* ParentAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDEPRECATED_PawnActionsComponent* OwnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* Instigator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBrainComponent* BrainComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowNewSameClassInstance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReplaceActiveSameClassInstance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldPauseMovement: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysNotifyOnFinished: 1;
    
public:
    UDEPRECATED_PawnAction();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EAIRequestPriority::Type> GetActionPriority();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Finish(TEnumAsByte<EPawnActionResult::Type> WithResult);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDEPRECATED_PawnAction* CreateActionInstance(UObject* WorldContextObject, TSubclassOf<UDEPRECATED_PawnAction> ActionClass);
    
};

