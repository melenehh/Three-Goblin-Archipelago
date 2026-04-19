#pragma once
#include "CoreMinimal.h"
#include "InterchangeResultMeshWarning.h"
#include "InterchangeResultMeshWarning_TooManyUVs.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEMESSAGES_API UInterchangeResultMeshWarning_TooManyUVs : public UInterchangeResultMeshWarning {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExcessUVs;
    
    UInterchangeResultMeshWarning_TooManyUVs();

};

