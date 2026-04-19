#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EAllowConvexMergeMethod -FallbackName=EAllowConvexMergeMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowTransformSelection -FallbackName=DataflowTransformSelection
#include "DataflowSphereCovering.h"
#include "GenerateClusterConvexHullsFromLeafHullsDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FGenerateClusterConvexHullsFromLeafHullsDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FManagedArrayCollection Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowSphereCovering SphereCovering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConvexCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ErrorTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreferExternalCollisionShapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAllowConvexMergeMethod AllowMerges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowTransformSelection OptionalSelectionFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProtectNegativeSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetNumSamples;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinSampleSpacing;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NegativeSpaceTolerance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinRadius;
    
    GEOMETRYCOLLECTIONNODES_API FGenerateClusterConvexHullsFromLeafHullsDataflowNode();
};

