#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DataflowActor.generated.h"

class UDataflowComponent;

UCLASS(Blueprintable)
class DATAFLOWENGINEPLUGIN_API ADataflowActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDataflowComponent* DataflowComponent;
    
    ADataflowActor(const FObjectInitializer& ObjectInitializer);

};

