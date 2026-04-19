#pragma once
#include "CoreMinimal.h"
#include "ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "AsyncPhysicsInputComponent.generated.h"

class UAsyncPhysicsData;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAsyncPhysicsInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAsyncPhysicsData> DataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAsyncPhysicsData*> BufferedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncPhysicsData* DataToConsume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncPhysicsData* DataToWrite;
    
public:
    UAsyncPhysicsInputComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerRPCBufferInput(UAsyncPhysicsData* AsyncPhysicsData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAsyncPhysicsData* GetDataToWrite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAsyncPhysicsData* GetDataToConsume() const;
    
};

