#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugDrawComponent -FallbackName=DebugDrawComponent
#include "NavMeshRenderingComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNavMeshRenderingComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    UNavMeshRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

