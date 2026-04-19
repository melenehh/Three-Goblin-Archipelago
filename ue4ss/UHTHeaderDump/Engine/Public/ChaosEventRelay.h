#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BreakEventSignatureDelegate.h"
#include "CollisionEventSignatureDelegate.h"
#include "CrumblingEventSignatureDelegate.h"
#include "RemovalEventSignatureDelegate.h"
#include "ChaosEventRelay.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UChaosEventRelay : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionEventSignature OnCollisionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakEventSignature OnBreakEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemovalEventSignature OnRemovalEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrumblingEventSignature OnCrumblingEvent;
    
    UChaosEventRelay();

};

