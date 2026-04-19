#pragma once
#include "CoreMinimal.h"
#include "NavigationData.h"
#include "AbstractNavData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AAbstractNavData : public ANavigationData {
    GENERATED_BODY()
public:
    AAbstractNavData(const FObjectInitializer& ObjectInitializer);

};

