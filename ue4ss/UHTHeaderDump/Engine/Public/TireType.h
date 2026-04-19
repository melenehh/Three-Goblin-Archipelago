#pragma once
#include "CoreMinimal.h"
#include "DataAsset.h"
#include "TireType.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTireType : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrictionScale;
    
    UTireType();

};

