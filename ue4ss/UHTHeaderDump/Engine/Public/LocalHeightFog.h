#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "LocalHeightFog.generated.h"

class ULocalHeightFogComponent;

UCLASS(Blueprintable, MinimalAPI)
class ALocalHeightFog : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocalHeightFogComponent* LocalHeightFogVolume;
    
public:
    ALocalHeightFog(const FObjectInitializer& ObjectInitializer);

};

