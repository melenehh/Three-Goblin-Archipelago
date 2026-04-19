#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InterchangeFactoryBase.generated.h"

class UInterchangeResultsContainer;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UInterchangeFactoryBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterchangeResultsContainer* Results;
    
    UInterchangeFactoryBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetFactoryClass() const;
    
};

