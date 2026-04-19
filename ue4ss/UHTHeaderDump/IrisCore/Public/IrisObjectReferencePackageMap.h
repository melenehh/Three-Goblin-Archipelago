#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PackageMap -FallbackName=PackageMap
#include "IrisObjectReferencePackageMap.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UIrisObjectReferencePackageMap : public UPackageMap {
    GENERATED_BODY()
public:
    UIrisObjectReferencePackageMap();

};

