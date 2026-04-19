#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
#include "ComputeKernelSource.h"
#include "ComputeKernelFromText.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class COMPUTEFRAMEWORK_API UComputeKernelFromText : public UComputeKernelSource {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath SourceFile;
    
    UComputeKernelFromText();

};

