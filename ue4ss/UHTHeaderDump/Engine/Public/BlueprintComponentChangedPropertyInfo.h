#pragma once
#include "CoreMinimal.h"
#include "BlueprintComponentChangedPropertyInfo.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct FBlueprintComponentChangedPropertyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArrayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* PropertyScope;
    
    ENGINE_API FBlueprintComponentChangedPropertyInfo();
};

