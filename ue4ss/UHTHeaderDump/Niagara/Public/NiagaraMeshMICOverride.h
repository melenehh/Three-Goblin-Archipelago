#pragma once
#include "CoreMinimal.h"
#include "NiagaraMeshMICOverride.generated.h"

class UMaterialInstanceConstant;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FNiagaraMeshMICOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OriginalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* ReplacementMaterial;
    
    NIAGARA_API FNiagaraMeshMICOverride();
};

