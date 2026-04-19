#pragma once
#include "CoreMinimal.h"
#include "FieldCookedMetaDataStore.generated.h"

USTRUCT(BlueprintType)
struct FFieldCookedMetaDataStore {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> FieldMetaData;
    
public:
    ENGINE_API FFieldCookedMetaDataStore();
};

