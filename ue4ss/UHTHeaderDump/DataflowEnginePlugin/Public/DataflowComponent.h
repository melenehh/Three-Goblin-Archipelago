#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "DataflowComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DATAFLOWENGINEPLUGIN_API UDataflowComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDataflowComponent(const FObjectInitializer& ObjectInitializer);

};

