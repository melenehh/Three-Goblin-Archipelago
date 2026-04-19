#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "BlackboardKeySelector.h"
#include "BTDecorator_KeepInCone.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTDecorator_KeepInCone : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConeHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ConeOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Observed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseSelfAsOrigin: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseSelfAsObserved: 1;
    
    UBTDecorator_KeepInCone();

};

