#pragma once
#include "CoreMinimal.h"
#include "MaterialOverrideNanite.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialOverrideNanite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OverrideMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> OverrideMaterialRef;
    
public:
    ENGINE_API FMaterialOverrideNanite();
};

