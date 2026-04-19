#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DataStreamDefinition.h"
#include "DataStreamDefinitions.generated.h"

UCLASS(Blueprintable, Transient, Config=Engine)
class UDataStreamDefinitions : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataStreamDefinition> DataStreamDefinitions;
    
public:
    UDataStreamDefinitions();

};

