#pragma once
#include "CoreMinimal.h"
#include "LinkedAnimLayerInstanceData.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct FLinkedAnimLayerInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* Instance;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, TWeakObjectPtr<UAnimInstance>> LinkedFunctions;
    
public:
    ENGINE_API FLinkedAnimLayerInstanceData();
};

