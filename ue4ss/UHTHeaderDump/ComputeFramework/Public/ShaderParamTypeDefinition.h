#pragma once
#include "CoreMinimal.h"
#include "EShaderParamBindingType.h"
#include "EShaderResourceType.h"
#include "ShaderValueTypeHandle.h"
#include "ShaderParamTypeDefinition.generated.h"

USTRUCT(BlueprintType)
struct COMPUTEFRAMEWORK_API FShaderParamTypeDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TypeDeclaration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShaderValueTypeHandle ValueType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ArrayElementCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShaderParamBindingType BindingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShaderResourceType ResourceType;
    
    FShaderParamTypeDefinition();
};

