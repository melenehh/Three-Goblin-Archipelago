#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ActorInstanceHandleInterface.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UActorInstanceHandleInterface : public UObject {
    GENERATED_BODY()
public:
    UActorInstanceHandleInterface();

};

