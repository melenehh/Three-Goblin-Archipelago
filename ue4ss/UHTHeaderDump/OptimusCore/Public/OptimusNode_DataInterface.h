#pragma once
#include "CoreMinimal.h"
#include "OptimusDataInterfaceProvider.h"
#include "OptimusNode.h"
#include "OptimusNode_DataInterface.generated.h"

class UOptimusComputeDataInterface;

UCLASS(Blueprintable)
class UOptimusNode_DataInterface : public UOptimusNode, public IOptimusDataInterfaceProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DataInterfaceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptimusComputeDataInterface* DataInterfaceData;
    
public:
    UOptimusNode_DataInterface();


    // Fix for true pure virtual functions not being implemented
};

