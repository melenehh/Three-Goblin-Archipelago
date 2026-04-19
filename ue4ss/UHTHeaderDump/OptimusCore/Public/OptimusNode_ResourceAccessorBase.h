#pragma once
#include "CoreMinimal.h"
#include "EOptimusBufferWriteType.h"
#include "OptimusComponentBindingProvider.h"
#include "OptimusDataInterfaceProvider.h"
#include "OptimusNode.h"
#include "OptimusNode_ResourceAccessorBase_DuplicationInfo.h"
#include "OptimusNode_ResourceAccessorBase.generated.h"

class UOptimusResourceDescription;

UCLASS(Abstract, Blueprintable)
class UOptimusNode_ResourceAccessorBase : public UOptimusNode, public IOptimusDataInterfaceProvider, public IOptimusComponentBindingProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOptimusResourceDescription> ResourceDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusBufferWriteType WriteType;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusNode_ResourceAccessorBase_DuplicationInfo DuplicationInfo;
    
public:
    UOptimusNode_ResourceAccessorBase();


    // Fix for true pure virtual functions not being implemented
};

