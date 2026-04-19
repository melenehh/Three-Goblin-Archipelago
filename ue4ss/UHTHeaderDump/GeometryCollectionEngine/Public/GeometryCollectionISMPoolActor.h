#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GeometryCollectionISMPoolActor.generated.h"

class UGeometryCollectionISMPoolComponent;
class UGeometryCollectionISMPoolDebugDrawComponent;

UCLASS(Blueprintable, MinimalAPI)
class AGeometryCollectionISMPoolActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGeometryCollectionISMPoolComponent* ISMPoolComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGeometryCollectionISMPoolDebugDrawComponent* ISMPoolDebugDrawComp;
    
public:
    AGeometryCollectionISMPoolActor(const FObjectInitializer& ObjectInitializer);

};

