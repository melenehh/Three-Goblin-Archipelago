#pragma once
#include "CoreMinimal.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDynamicMeshMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FNiagaraDynamicMeshMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraUserParameterBinding MaterialUserParamBinding;
    
    NIAGARA_API FNiagaraDynamicMeshMaterial();
};

