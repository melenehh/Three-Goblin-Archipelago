#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ContextObjectStore.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UContextObjectStore : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ContextObjects;
    
public:
    UContextObjectStore();

};

