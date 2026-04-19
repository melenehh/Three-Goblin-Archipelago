#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EHLODLayerType.h"
#include "Templates/SubclassOf.h"
#include "HLODLayer.generated.h"

class AWorldPartitionHLOD;
class UHLODBuilder;
class UHLODBuilderSettings;
class UHLODLayer;
class UWorldPartitionHLODModifier;

UCLASS(Blueprintable, MinimalAPI)
class UHLODLayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHLODLayerType LayerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHLODBuilder> HLODBuilderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NoClear, meta=(AllowPrivateAccess=true))
    UHLODBuilderSettings* HLODBuilderSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsSpatiallyLoaded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CellSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LoadingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHLODLayer* ParentLayer;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWorldPartitionHLOD> HLODActorClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWorldPartitionHLODModifier> HLODModifierClass;
    
public:
    UHLODLayer();

};

