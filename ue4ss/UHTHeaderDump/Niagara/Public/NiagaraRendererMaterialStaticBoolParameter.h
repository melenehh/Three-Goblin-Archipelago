#pragma once
#include "CoreMinimal.h"
#include "NiagaraRendererMaterialStaticBoolParameter.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraRendererMaterialStaticBoolParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StaticVariableName;
    
    NIAGARA_API FNiagaraRendererMaterialStaticBoolParameter();
};

