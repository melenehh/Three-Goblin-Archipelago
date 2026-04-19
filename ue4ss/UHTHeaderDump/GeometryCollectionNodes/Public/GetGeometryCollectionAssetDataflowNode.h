#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "GetGeometryCollectionAssetDataflowNode.generated.h"

class UGeometryCollection;

USTRUCT(BlueprintType)
struct FGetGeometryCollectionAssetDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCollection* Asset;
    
    GEOMETRYCOLLECTIONNODES_API FGetGeometryCollectionAssetDataflowNode();
};

