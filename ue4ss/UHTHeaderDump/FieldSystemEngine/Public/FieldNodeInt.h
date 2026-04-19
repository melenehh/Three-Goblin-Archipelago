#pragma once
#include "CoreMinimal.h"
#include "FieldNodeBase.h"
#include "FieldNodeInt.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFieldNodeInt : public UFieldNodeBase {
    GENERATED_BODY()
public:
    UFieldNodeInt(const FObjectInitializer& ObjectInitializer);

};

