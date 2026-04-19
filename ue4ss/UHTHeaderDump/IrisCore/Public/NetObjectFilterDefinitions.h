#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetObjectFilterDefinition.h"
#include "NetObjectFilterDefinitions.generated.h"

UCLASS(Blueprintable, Transient, Config=Engine)
class UNetObjectFilterDefinitions : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetObjectFilterDefinition> NetObjectFilterDefinitions;
    
public:
    UNetObjectFilterDefinitions();

};

