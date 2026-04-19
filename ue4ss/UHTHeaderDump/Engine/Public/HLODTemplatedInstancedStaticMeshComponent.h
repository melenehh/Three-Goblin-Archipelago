#pragma once
#include "CoreMinimal.h"
#include "InstancedStaticMeshComponent.h"
#include "Templates/SubclassOf.h"
#include "HLODTemplatedInstancedStaticMeshComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHLODTemplatedInstancedStaticMeshComponent : public UInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TemplateActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TemplateComponentName;
    
public:
    UHLODTemplatedInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

