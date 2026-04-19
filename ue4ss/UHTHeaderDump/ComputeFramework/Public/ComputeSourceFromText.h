#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
#include "ComputeSource.h"
#include "ComputeSourceFromText.generated.h"

UCLASS(Blueprintable)
class COMPUTEFRAMEWORK_API UComputeSourceFromText : public UComputeSource {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath SourceFile;
    
    UComputeSourceFromText();

};

