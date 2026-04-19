#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ToolTargetManager.generated.h"

class UToolTargetFactory;

UCLASS(Blueprintable, MinimalAPI, Transient)
class UToolTargetManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UToolTargetFactory*> Factories;
    
public:
    UToolTargetManager();

};

