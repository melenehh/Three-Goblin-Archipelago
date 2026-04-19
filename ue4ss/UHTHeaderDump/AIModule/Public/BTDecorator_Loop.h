#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "BTDecorator_Loop.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTDecorator_Loop : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLoops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfiniteLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfiniteLoopTimeoutTime;
    
    UBTDecorator_Loop();

};

