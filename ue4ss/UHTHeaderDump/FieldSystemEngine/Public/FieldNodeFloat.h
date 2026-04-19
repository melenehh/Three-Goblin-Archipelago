#pragma once
#include "CoreMinimal.h"
#include "FieldNodeBase.h"
#include "FieldNodeFloat.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFieldNodeFloat : public UFieldNodeBase {
    GENERATED_BODY()
public:
    UFieldNodeFloat(const FObjectInitializer& ObjectInitializer);

};

