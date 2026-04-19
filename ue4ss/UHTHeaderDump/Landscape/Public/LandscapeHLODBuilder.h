#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HLODBuilder -FallbackName=HLODBuilder
#include "LandscapeHLODBuilder.generated.h"

UCLASS(Blueprintable, HideDropdown, MinimalAPI)
class ULandscapeHLODBuilder : public UHLODBuilder {
    GENERATED_BODY()
public:
    ULandscapeHLODBuilder();

};

