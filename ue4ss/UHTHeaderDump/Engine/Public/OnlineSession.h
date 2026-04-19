#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnlineSession.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class UOnlineSession : public UObject {
    GENERATED_BODY()
public:
    UOnlineSession();

};

