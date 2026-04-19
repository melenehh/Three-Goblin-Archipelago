#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "GeometryCollectionISMPoolComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGeometryCollectionISMPoolComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UGeometryCollectionISMPoolComponent(const FObjectInitializer& ObjectInitializer);

};

