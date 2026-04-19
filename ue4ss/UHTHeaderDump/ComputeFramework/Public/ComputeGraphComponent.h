#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ComputeGraphInstance.h"
#include "ComputeGraphComponent.generated.h"

class UComputeGraph;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class COMPUTEFRAMEWORK_API UComputeGraphComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UComputeGraph* ComputeGraph;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComputeGraphInstance ComputeGraphInstance;
    
public:
    UComputeGraphComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void QueueExecute();
    
    UFUNCTION(BlueprintCallable)
    void DestroyDataProviders();
    
    UFUNCTION(BlueprintCallable)
    void CreateDataProviders(int32 InBindingIndex, UObject* InBindingObject);
    
};

