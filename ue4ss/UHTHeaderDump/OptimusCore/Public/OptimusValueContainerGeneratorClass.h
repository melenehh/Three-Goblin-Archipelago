#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Class -FallbackName=Class
#include "OptimusDataTypeRef.h"
#include "OptimusValueContainerGeneratorClass.generated.h"

UCLASS(Blueprintable)
class OPTIMUSCORE_API UOptimusValueContainerGeneratorClass : public UClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataTypeRef DataType;
    
    UOptimusValueContainerGeneratorClass();

};

