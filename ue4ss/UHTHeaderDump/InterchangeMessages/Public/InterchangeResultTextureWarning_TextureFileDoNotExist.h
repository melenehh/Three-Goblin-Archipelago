#pragma once
#include "CoreMinimal.h"
#include "InterchangeResultTextureWarning.h"
#include "InterchangeResultTextureWarning_TextureFileDoNotExist.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEMESSAGES_API UInterchangeResultTextureWarning_TextureFileDoNotExist : public UInterchangeResultTextureWarning {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MaterialName;
    
    UInterchangeResultTextureWarning_TextureFileDoNotExist();

};

