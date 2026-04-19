#pragma once
#include "CoreMinimal.h"
#include "ObjectCookedMetaDataStore.generated.h"

USTRUCT(BlueprintType)
struct FObjectCookedMetaDataStore {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> ObjectMetaData;
    
public:
    ENGINE_API FObjectCookedMetaDataStore();
};

