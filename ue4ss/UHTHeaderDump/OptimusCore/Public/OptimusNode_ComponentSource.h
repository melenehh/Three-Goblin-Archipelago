#pragma once
#include "CoreMinimal.h"
#include "OptimusComponentBindingProvider.h"
#include "OptimusNode.h"
#include "OptimusNode_ComponentSource.generated.h"

class UOptimusComponentSourceBinding;

UCLASS(Blueprintable)
class UOptimusNode_ComponentSource : public UOptimusNode, public IOptimusComponentBindingProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusComponentSourceBinding* Binding;
    
public:
    UOptimusNode_ComponentSource();


    // Fix for true pure virtual functions not being implemented
};

