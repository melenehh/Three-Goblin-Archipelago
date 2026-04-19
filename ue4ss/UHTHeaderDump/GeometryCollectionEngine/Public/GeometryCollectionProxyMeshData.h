#pragma once
#include "CoreMinimal.h"
#include "GeometryCollectionProxyMeshData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FGeometryCollectionProxyMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> ProxyMeshes;
    
    GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionProxyMeshData();
};

