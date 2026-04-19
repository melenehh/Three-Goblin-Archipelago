#pragma once
#include "CoreMinimal.h"
#include "AnimNodeData.generated.h"

class IAnimClassInterface;
class UAnimClassInterface;

USTRUCT(BlueprintType)
struct FAnimNodeData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IAnimClassInterface> AnimClassInterface;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Flags;
    
public:
    ENGINE_API FAnimNodeData();
};

