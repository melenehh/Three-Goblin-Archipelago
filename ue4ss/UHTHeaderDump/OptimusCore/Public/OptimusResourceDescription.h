#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OptimusDataDomain.h"
#include "OptimusDataTypeRef.h"
#include "OptimusResourceDescription.generated.h"

class UOptimusComponentSourceBinding;
class UOptimusPersistentBufferDataInterface;

UCLASS(Blueprintable)
class OPTIMUSCORE_API UOptimusResourceDescription : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataTypeRef DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOptimusComponentSourceBinding> ComponentBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataDomain DataDomain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusPersistentBufferDataInterface* DataInterface;
    
    UOptimusResourceDescription();

};

