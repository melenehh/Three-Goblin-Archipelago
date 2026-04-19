#pragma once
#include "CoreMinimal.h"
#include "FieldNodeBase.h"
#include "FieldNodeVector.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFieldNodeVector : public UFieldNodeBase {
    GENERATED_BODY()
public:
    UFieldNodeVector(const FObjectInitializer& ObjectInitializer);

};

