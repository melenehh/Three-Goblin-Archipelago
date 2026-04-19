#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AssetUserData -FallbackName=Interface_AssetUserData
#include "InterchangeSceneImportAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSceneImportAsset : public UObject, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UInterchangeSceneImportAsset();


    // Fix for true pure virtual functions not being implemented
};

