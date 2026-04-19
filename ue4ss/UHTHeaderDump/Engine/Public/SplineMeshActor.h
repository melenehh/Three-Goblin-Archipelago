#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "SplineMeshActor.generated.h"

class USplineMeshComponent;

UCLASS(Blueprintable, MinimalAPI)
class ASplineMeshActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* SplineMeshComponent;
    
public:
    ASplineMeshActor(const FObjectInitializer& ObjectInitializer);

};

