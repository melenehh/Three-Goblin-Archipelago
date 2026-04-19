#pragma once
#include "CoreMinimal.h"
#include "AssetBundleEntry.h"
#include "AssetBundleData.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FAssetBundleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssetBundleEntry> Bundles;
    
    COREUOBJECT_API FAssetBundleData();
};

