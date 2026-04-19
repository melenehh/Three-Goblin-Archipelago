#pragma once
#include "CoreMinimal.h"
#include "NiagaraGeometryCacheMICOverride.generated.h"

class UMaterialInstanceConstant;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FNiagaraGeometryCacheMICOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OriginalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* ReplacementMaterial;
    
    GEOMETRYCACHE_API FNiagaraGeometryCacheMICOverride();
};

