#pragma once
#include "CoreMinimal.h"
#include "PathFollowingComponent.h"
#include "GridPathFollowingComponent.generated.h"

class UNavLocalGridManager;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGridPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNavLocalGridManager* GridManager;
    
public:
    UGridPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

