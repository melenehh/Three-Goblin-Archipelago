#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Actor.h"
#include "WorldPartitionHLOD.generated.h"

UCLASS(Blueprintable, MinimalAPI, NotPlaceable)
class AWorldPartitionHLOD : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LODLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireWarmup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SourceCellGuid;
    
public:
    AWorldPartitionHLOD(const FObjectInitializer& ObjectInitializer);

};

