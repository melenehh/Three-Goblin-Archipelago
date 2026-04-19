#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialParameterInfo.h"
#include "SparseVolumeTextureParameterValue.generated.h"

class USparseVolumeTexture;

USTRUCT(BlueprintType)
struct FSparseVolumeTextureParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialParameterInfo ParameterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USparseVolumeTexture* ParameterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ExpressionGUID;
    
    ENGINE_API FSparseVolumeTextureParameterValue();
};

