#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AssetUserData.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew, MinimalAPI)
class UAssetUserData : public UObject {
    GENERATED_BODY()
public:
    UAssetUserData();

};

