#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EOptimusNodePinDirection.h"
#include "EOptimusNodePinStorageType.h"
#include "OptimusDataDomain.h"
#include "OptimusDataTypeRef.h"
#include "OptimusNodePin.generated.h"

class UOptimusNodePin;

UCLASS(Blueprintable)
class OPTIMUSCORE_API UOptimusNodePin : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGroupingPin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusNodePinDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusNodePinStorageType StorageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataDomain DataDomain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataTypeRef DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOptimusNodePin*> SubPins;
    
public:
    UOptimusNodePin();

};

