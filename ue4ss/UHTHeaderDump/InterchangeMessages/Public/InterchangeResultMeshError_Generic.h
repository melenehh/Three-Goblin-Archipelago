#pragma once
#include "CoreMinimal.h"
#include "InterchangeResultMeshError.h"
#include "InterchangeResultMeshError_Generic.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEMESSAGES_API UInterchangeResultMeshError_Generic : public UInterchangeResultMeshError {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UInterchangeResultMeshError_Generic();

};

