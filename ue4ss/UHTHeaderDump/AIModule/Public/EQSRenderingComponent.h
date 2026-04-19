#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugDrawComponent -FallbackName=DebugDrawComponent
#include "EQSRenderingComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEQSRenderingComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    UEQSRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

