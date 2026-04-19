#pragma once
#include "CoreMinimal.h"
#include "PrimitiveComponent.h"
#include "DebugDrawComponent.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDebugDrawComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDebugDrawComponent(const FObjectInitializer& ObjectInitializer);

};

