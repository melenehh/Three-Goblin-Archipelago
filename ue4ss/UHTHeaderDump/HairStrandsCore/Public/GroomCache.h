#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AssetUserData -FallbackName=Interface_AssetUserData
#include "GroomCacheInfo.h"
#include "GroomCache.generated.h"

class UAssetUserData;

UCLASS(Blueprintable)
class HAIRSTRANDSCORE_API UGroomCache : public UObject, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> AssetUserData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroomCacheInfo GroomCacheInfo;
    
public:
    UGroomCache();


    // Fix for true pure virtual functions not being implemented
};

