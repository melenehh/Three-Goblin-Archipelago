#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowTransformSelection -FallbackName=DataflowTransformSelection
//CROSS-MODULE INCLUDE V2: -ModuleName=FractureEngine -ObjectName=EConvexHullSimplifyMethod -FallbackName=EConvexHullSimplifyMethod
#include "SimplifyConvexHullsDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FSimplifyConvexHullsDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FManagedArrayCollection Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowTransformSelection OptionalSelectionFilter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EConvexHullSimplifyMethod SimplifyMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimplificationAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimplificationDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTargetTriangleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseExistingVertices;
    
    GEOMETRYCOLLECTIONNODES_API FSimplifyConvexHullsDataflowNode();
};

