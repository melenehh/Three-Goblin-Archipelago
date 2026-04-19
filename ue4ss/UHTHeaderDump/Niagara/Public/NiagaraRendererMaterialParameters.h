#pragma once
#include "CoreMinimal.h"
#include "NiagaraMaterialAttributeBinding.h"
#include "NiagaraRendererMaterialScalarParameter.h"
#include "NiagaraRendererMaterialStaticBoolParameter.h"
#include "NiagaraRendererMaterialTextureParameter.h"
#include "NiagaraRendererMaterialVectorParameter.h"
#include "NiagaraRendererMaterialParameters.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraRendererMaterialParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraMaterialAttributeBinding> AttributeBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraRendererMaterialScalarParameter> ScalarParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraRendererMaterialVectorParameter> VectorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraRendererMaterialTextureParameter> TextureParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraRendererMaterialStaticBoolParameter> StaticBoolParameters;
    
    NIAGARA_API FNiagaraRendererMaterialParameters();
};

