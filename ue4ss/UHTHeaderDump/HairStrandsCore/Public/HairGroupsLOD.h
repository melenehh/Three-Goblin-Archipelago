#pragma once
#include "CoreMinimal.h"
#include "EGroomLODType.h"
#include "HairLODSettings.h"
#include "HairGroupsLOD.generated.h"

USTRUCT(BlueprintType)
struct HAIRSTRANDSCORE_API FHairGroupsLOD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroomLODType LODType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHairLODSettings> LODs;
    
    FHairGroupsLOD();
};

