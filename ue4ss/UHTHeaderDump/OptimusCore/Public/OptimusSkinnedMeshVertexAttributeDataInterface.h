#pragma once
#include "CoreMinimal.h"
#include "OptimusComputeDataInterface.h"
#include "OptimusSkinnedMeshVertexAttributeDataInterface.generated.h"

UCLASS(Blueprintable)
class UOptimusSkinnedMeshVertexAttributeDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttributeName;
    
public:
    UOptimusSkinnedMeshVertexAttributeDataInterface();

};

