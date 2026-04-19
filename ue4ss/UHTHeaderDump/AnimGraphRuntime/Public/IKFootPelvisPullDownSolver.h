#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=VectorRK4SpringInterpolator -FallbackName=VectorRK4SpringInterpolator
#include "IKFootPelvisPullDownSolver.generated.h"

USTRUCT(BlueprintType)
struct FIKFootPelvisPullDownSolver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVectorRK4SpringInterpolator PelvisAdjustmentInterp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PelvisAdjustmentInterpAlpha;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PelvisAdjustmentMaxDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PelvisAdjustmentErrorTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PelvisAdjustmentMaxIter;
    
    ANIMGRAPHRUNTIME_API FIKFootPelvisPullDownSolver();
};

