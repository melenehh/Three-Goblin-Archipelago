#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetObjectPrioritizerDefinition.h"
#include "NetObjectPrioritizerDefinitions.generated.h"

UCLASS(Blueprintable, Transient, Config=Engine)
class UNetObjectPrioritizerDefinitions : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetObjectPrioritizerDefinition> NetObjectPrioritizerDefinitions;
    
public:
    UNetObjectPrioritizerDefinitions();

};

