#pragma once
#include "CoreMinimal.h"
#include "FieldNodeBase.h"
#include "ReturnResultsTerminal.generated.h"

class UReturnResultsTerminal;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UReturnResultsTerminal : public UFieldNodeBase {
    GENERATED_BODY()
public:
    UReturnResultsTerminal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReturnResultsTerminal* SetReturnResultsTerminal();
    
};

