#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "NavFilter_AIControllerDefault.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UNavFilter_AIControllerDefault();

};

