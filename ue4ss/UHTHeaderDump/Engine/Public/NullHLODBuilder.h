#pragma once
#include "CoreMinimal.h"
#include "HLODBuilder.h"
#include "NullHLODBuilder.generated.h"

UCLASS(Blueprintable, HideDropdown, MinimalAPI)
class UNullHLODBuilder : public UHLODBuilder {
    GENERATED_BODY()
public:
    UNullHLODBuilder();

};

