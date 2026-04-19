#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PackageMap -FallbackName=PackageMap
#include "PackageMapClient.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPackageMapClient : public UPackageMap {
    GENERATED_BODY()
public:
    UPackageMapClient();

};

