#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "StructCookedMetaDataStore.h"
#include "StructCookedMetaData.generated.h"

UCLASS(Blueprintable, MinimalAPI, Within=ScriptStruct)
class UStructCookedMetaData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStructCookedMetaDataStore StructMetaData;
    
public:
    UStructCookedMetaData();

};

