#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DataflowBlueprintLibrary.generated.h"

class UDataflow;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UDataflowBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDataflowBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void EvaluateTerminalNodeByName(UDataflow* Dataflow, FName TerminalNodeName, UObject* ResultAsset);
    
};

