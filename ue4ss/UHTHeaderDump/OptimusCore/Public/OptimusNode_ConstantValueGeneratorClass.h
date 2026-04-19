#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Class -FallbackName=Class
#include "OptimusDataTypeRef.h"
#include "OptimusNode_ConstantValueGeneratorClass.generated.h"

UCLASS(Blueprintable)
class UOptimusNode_ConstantValueGeneratorClass : public UClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataTypeRef DataType;
    
    UOptimusNode_ConstantValueGeneratorClass();

};

