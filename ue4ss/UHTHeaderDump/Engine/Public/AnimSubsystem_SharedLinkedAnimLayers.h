#pragma once
#include "CoreMinimal.h"
#include "AnimSubsystemInstance.h"
#include "LinkedAnimLayerClassData.h"
#include "Templates/SubclassOf.h"
#include "AnimSubsystem_SharedLinkedAnimLayers.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct FAnimSubsystem_SharedLinkedAnimLayers : public FAnimSubsystemInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLinkedAnimLayerClassData> ClassesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UAnimInstance>> PersistentClasses;
    
public:
    ENGINE_API FAnimSubsystem_SharedLinkedAnimLayers();
};

