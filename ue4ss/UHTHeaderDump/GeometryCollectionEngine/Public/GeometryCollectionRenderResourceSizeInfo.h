#pragma once
#include "CoreMinimal.h"
#include "GeometryCollectionRenderResourceSizeInfo.generated.h"

USTRUCT(BlueprintType)
struct FGeometryCollectionRenderResourceSizeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 MeshResourcesSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 NaniteResourcesSize;
    
    GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionRenderResourceSizeInfo();
};

