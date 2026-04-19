#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryCollectionEngine -ObjectName=GeometryCollectionSource -FallbackName=GeometryCollectionSource
#include "GetGeometryCollectionSourcesDataflowNode.generated.h"

class UGeometryCollection;

USTRUCT(BlueprintType)
struct FGetGeometryCollectionSourcesDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCollection* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeometryCollectionSource> Sources;
    
    GEOMETRYCOLLECTIONNODES_API FGetGeometryCollectionSourcesDataflowNode();
};

