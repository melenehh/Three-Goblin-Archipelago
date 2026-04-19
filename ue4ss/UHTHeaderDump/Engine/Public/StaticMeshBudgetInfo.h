#pragma once
#include "CoreMinimal.h"
#include "StaticMeshBudgetInfo.generated.h"

USTRUCT(BlueprintType)
struct FStaticMeshBudgetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LodGroupName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinimumExtent;
    
    ENGINE_API FStaticMeshBudgetInfo();
};

