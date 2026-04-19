#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
#include "Templates/SubclassOf.h"
#include "ChildActorComponent.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UChildActorComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ChildActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, TextExportTransient, ReplicatedUsing=OnRep_ChildActor, meta=(AllowPrivateAccess=true))
    AActor* ChildActor;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ChildActorTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bChildActorIsTransient: 1;
    
public:
    UChildActorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetChildActorClass(TSubclassOf<AActor> InClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ChildActor();
    
    UFUNCTION(BlueprintCallable)
    void OnChildActorDestroyed(AActor* Actor);
    
};

