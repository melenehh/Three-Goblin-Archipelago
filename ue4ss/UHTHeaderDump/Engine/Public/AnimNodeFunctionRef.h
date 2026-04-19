#pragma once
#include "CoreMinimal.h"
#include "AnimNodeFunctionRef.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct FAnimNodeFunctionRef {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFunction* Function;
    
public:
    ENGINE_API FAnimNodeFunctionRef();
};

