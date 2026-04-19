#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ComputeKernelDefinitionSet.h"
#include "ComputeKernelPermutationSet.h"
#include "ShaderFunctionDefinition.h"
#include "ComputeKernelSource.generated.h"

class UComputeSource;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class COMPUTEFRAMEWORK_API UComputeKernelSource : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EntryPoint;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector GroupSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComputeKernelPermutationSet PermutationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComputeKernelDefinitionSet DefinitionsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UComputeSource*> AdditionalSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FShaderFunctionDefinition> ExternalInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FShaderFunctionDefinition> ExternalOutputs;
    
    UComputeKernelSource();

};

