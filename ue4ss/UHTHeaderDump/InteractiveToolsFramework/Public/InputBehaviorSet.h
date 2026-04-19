#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BehaviorInfo.h"
#include "InputBehaviorSet.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UInputBehaviorSet : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBehaviorInfo> Behaviors;
    
public:
    UInputBehaviorSet();

};

