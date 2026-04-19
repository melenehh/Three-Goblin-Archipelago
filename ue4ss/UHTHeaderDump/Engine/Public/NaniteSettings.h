#pragma once
#include "CoreMinimal.h"
#include "NaniteSettings.generated.h"

USTRUCT(BlueprintType)
struct FNaniteSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMaskedMaterials;
    
    ENGINE_API FNaniteSettings();
};

