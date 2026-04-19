#pragma once
#include "CoreMinimal.h"
#include "LinkedAnimLayerInstanceData.h"
#include "LinkedAnimLayerClassData.generated.h"

USTRUCT(BlueprintType)
struct FLinkedAnimLayerClassData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLinkedAnimLayerInstanceData> InstancesData;
    
public:
    ENGINE_API FLinkedAnimLayerClassData();
};

