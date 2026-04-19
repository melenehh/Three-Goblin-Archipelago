#pragma once
#include "CoreMinimal.h"
#include "RigVMByteCode.h"
#include "RigVMFunctionCompilationPropertyDescription.h"
#include "RigVMFunctionCompilationPropertyPath.h"
#include "RigVMOperand.h"
#include "RigVMFunctionCompilationData.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunctionCompilationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMByteCode ByteCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FunctionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMFunctionCompilationPropertyDescription> WorkPropertyDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMFunctionCompilationPropertyPath> WorkPropertyPathDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMFunctionCompilationPropertyDescription> LiteralPropertyDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMFunctionCompilationPropertyPath> LiteralPropertyPathDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMFunctionCompilationPropertyDescription> DebugPropertyDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMFunctionCompilationPropertyPath> DebugPropertyPathDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMFunctionCompilationPropertyDescription> ExternalPropertyDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMFunctionCompilationPropertyPath> ExternalPropertyPathDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FName> ExternalRegisterIndexToVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FRigVMOperand> Operands;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Hash;
    
    FRigVMFunctionCompilationData();
};

