#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeLayoutInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraTypeLayoutInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 NumFloatComponents;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 NumInt32Components;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 NumHalfComponents;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> ComponentsOffsets;
    
public:
    NIAGARA_API FNiagaraTypeLayoutInfo();
};

