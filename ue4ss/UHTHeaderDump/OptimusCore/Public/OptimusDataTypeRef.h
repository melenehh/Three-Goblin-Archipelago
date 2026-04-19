#pragma once
#include "CoreMinimal.h"
#include "OptimusDataTypeRef.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct OPTIMUSCORE_API FOptimusDataTypeRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> TypeObject;
    
    FOptimusDataTypeRef();
};

