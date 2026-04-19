#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PendingNetGame.generated.h"

class UDemoNetDriver;
class UNetDriver;

UCLASS(Blueprintable, Transient)
class ENGINE_API UPendingNetGame : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetDriver* NetDriver;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDemoNetDriver* DemoNetDriver;
    
public:
    UPendingNetGame();

};

