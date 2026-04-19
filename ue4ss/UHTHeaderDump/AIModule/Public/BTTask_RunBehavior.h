#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "BTTask_RunBehavior.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable, MinimalAPI)
class UBTTask_RunBehavior : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorAsset;
    
public:
    UBTTask_RunBehavior();

};

