#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "GeometryCollectionISMPoolSubSystem.generated.h"

class AGeometryCollectionISMPoolActor;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryCollectionISMPoolSubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGeometryCollectionISMPoolActor* ISMPoolActor;
    
public:
    UGeometryCollectionISMPoolSubSystem();

};

