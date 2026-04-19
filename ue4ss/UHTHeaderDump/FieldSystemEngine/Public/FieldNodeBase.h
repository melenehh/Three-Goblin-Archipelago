#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "FieldNodeBase.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFieldNodeBase : public UActorComponent {
    GENERATED_BODY()
public:
    UFieldNodeBase(const FObjectInitializer& ObjectInitializer);

};

