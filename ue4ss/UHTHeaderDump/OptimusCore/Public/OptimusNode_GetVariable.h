#pragma once
#include "CoreMinimal.h"
#include "OptimusNode.h"
#include "OptimusNode_GetVariable_DuplicationInfo.h"
#include "OptimusValueProvider.h"
#include "OptimusNode_GetVariable.generated.h"

class UOptimusVariableDescription;

UCLASS(Blueprintable)
class UOptimusNode_GetVariable : public UOptimusNode, public IOptimusValueProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOptimusVariableDescription> VariableDesc;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusNode_GetVariable_DuplicationInfo DuplicationInfo;
    
public:
    UOptimusNode_GetVariable();


    // Fix for true pure virtual functions not being implemented
};

