#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BlackboardKeySelector.generated.h"

class UBlackboardKeyType;

USTRUCT(BlueprintType)
struct FBlackboardKeySelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBlackboardKeyType*> AllowedTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectedKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBlackboardKeyType> SelectedKeyType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SelectedKeyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNoneIsAllowedValue: 1;
    
public:
    AIMODULE_API FBlackboardKeySelector();
};

