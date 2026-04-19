#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintGeneratedClass -FallbackName=BlueprintGeneratedClass
#include "RigVMGraphFunctionHost.h"
#include "RigVMGraphFunctionStore.h"
#include "RigVMBlueprintGeneratedClass.generated.h"

UCLASS(Blueprintable)
class RIGVM_API URigVMBlueprintGeneratedClass : public UBlueprintGeneratedClass, public IRigVMGraphFunctionHost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMGraphFunctionStore GraphFunctionStore;
    
    URigVMBlueprintGeneratedClass();


    // Fix for true pure virtual functions not being implemented
};

