#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "HeterogeneousVolume.generated.h"

class UHeterogeneousVolumeComponent;

UCLASS(Blueprintable, MinimalAPI)
class AHeterogeneousVolume : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeterogeneousVolumeComponent* HeterogeneousVolumeComponent;
    
public:
    AHeterogeneousVolume(const FObjectInitializer& ObjectInitializer);

};

