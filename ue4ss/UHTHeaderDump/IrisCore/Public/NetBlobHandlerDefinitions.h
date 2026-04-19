#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetBlobHandlerDefinition.h"
#include "NetBlobHandlerDefinitions.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient, Config=Engine)
class UNetBlobHandlerDefinitions : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetBlobHandlerDefinition> NetBlobHandlerDefinitions;
    
public:
    UNetBlobHandlerDefinitions();

};

