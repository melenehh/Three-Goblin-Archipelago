#pragma once
#include "CoreMinimal.h"
#include "DataLayerInstance.h"
#include "DataLayerInstancePrivate.generated.h"

class UDataLayerAsset;

UCLASS(Blueprintable, MinimalAPI, Within=WorldDataLayers)
class UDataLayerInstancePrivate : public UDataLayerInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShortName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* DataLayerAsset;
    
public:
    UDataLayerInstancePrivate();

};

