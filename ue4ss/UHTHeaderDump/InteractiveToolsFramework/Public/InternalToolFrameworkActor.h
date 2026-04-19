#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "InternalToolFrameworkActor.generated.h"

UCLASS(Blueprintable, MinimalAPI, NotPlaceable, Transient)
class AInternalToolFrameworkActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelectableInEditor;
    
    AInternalToolFrameworkActor(const FObjectInitializer& ObjectInitializer);

};

