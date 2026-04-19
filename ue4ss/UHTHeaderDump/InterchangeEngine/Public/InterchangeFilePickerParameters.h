#pragma once
#include "CoreMinimal.h"
#include "InterchangeFilePickerParameters.generated.h"

USTRUCT(BlueprintType)
struct FInterchangeFilePickerParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultipleFiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultPath;
    
    INTERCHANGEENGINE_API FInterchangeFilePickerParameters();
};

