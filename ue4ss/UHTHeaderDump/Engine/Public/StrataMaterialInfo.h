#pragma once
#include "CoreMinimal.h"
#include "StrataMaterialInfo.generated.h"

class USpecularProfile;
class USubsurfaceProfile;

USTRUCT(BlueprintType)
struct FStrataMaterialInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ShadingModelField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasShadingModelFromExpression;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ConnectedProperties;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ConnectedPropertyMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USubsurfaceProfile*> SubsurfaceProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USpecularProfile*> SpecularProfiles;
    
public:
    ENGINE_API FStrataMaterialInfo();
};

