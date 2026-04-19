#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GeometryCollectionExternalRenderInterface.h"
#include "GeometryCollectionISMPoolRenderer.generated.h"

class AGeometryCollectionISMPoolActor;

UCLASS(Blueprintable)
class UGeometryCollectionISMPoolRenderer : public UObject, public IGeometryCollectionExternalRenderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGeometryCollectionISMPoolActor* ISMPoolActor;
    
public:
    UGeometryCollectionISMPoolRenderer();


    // Fix for true pure virtual functions not being implemented
};

