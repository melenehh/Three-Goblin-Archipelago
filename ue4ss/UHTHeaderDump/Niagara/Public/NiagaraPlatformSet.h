#pragma once
#include "CoreMinimal.h"
#include "NiagaraDeviceProfileStateEntry.h"
#include "NiagaraPlatformSetCVarCondition.h"
#include "NiagaraPlatformSet.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraPlatformSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraPlatformSetCVarCondition> CVarConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QualityLevelMask;
    
    NIAGARA_API FNiagaraPlatformSet();
};

