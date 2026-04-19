#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InteractiveToolPropertySet.generated.h"

class UInteractiveToolPropertySet;

UCLASS(Blueprintable, MinimalAPI, Transient)
class UInteractiveToolPropertySet : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UInteractiveToolPropertySet*> CachedPropertiesMap;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPropertySetEnabled;
    
public:
    UInteractiveToolPropertySet();

};

