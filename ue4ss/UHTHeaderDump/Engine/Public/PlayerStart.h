#pragma once
#include "CoreMinimal.h"
#include "NavigationObjectBase.h"
#include "PlayerStart.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class APlayerStart : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerStartTag;
    
    APlayerStart(const FObjectInitializer& ObjectInitializer);

};

