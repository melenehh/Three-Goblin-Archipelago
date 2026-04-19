#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OptimusActionStack.generated.h"

UCLASS(Blueprintable)
class OPTIMUSCORE_API UOptimusActionStack : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TransactedActionIndex;
    
public:
    UOptimusActionStack();

};

