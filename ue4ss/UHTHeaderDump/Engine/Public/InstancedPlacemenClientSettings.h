#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InstancedPlacemenClientSettings.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UInstancedPlacemenClientSettings : public UObject {
    GENERATED_BODY()
public:
    UInstancedPlacemenClientSettings();

};

