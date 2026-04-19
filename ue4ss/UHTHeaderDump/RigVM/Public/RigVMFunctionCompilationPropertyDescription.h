#pragma once
#include "CoreMinimal.h"
#include "RigVMFunctionCompilationPropertyDescription.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FRigVMFunctionCompilationPropertyDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CPPType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> CPPTypeObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultValue;
    
    RIGVM_API FRigVMFunctionCompilationPropertyDescription();
};

