#pragma once
#include "CoreMinimal.h"
#include "MetaSoundOutput.h"
#include "OnMetasoundOutputValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnMetasoundOutputValueChanged, FName, OutputName, const FMetaSoundOutput&, Output);

