#pragma once
#include "CoreMinimal.h"
#include "NiagaraDynamicMeshSection.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDynamicMeshSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTriangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    NIAGARA_API FNiagaraDynamicMeshSection();
};

