#pragma once
#include "CoreMinimal.h"
#include "AssetUserData.h"
#include "CurveMetaData.h"
#include "Interface_AnimCurveMetaData.h"
#include "AnimCurveMetaData.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UAnimCurveMetaData : public UAssetUserData, public IInterface_AnimCurveMetaData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCurveMetaData> CurveMetaData;
    
public:
    UAnimCurveMetaData();


    // Fix for true pure virtual functions not being implemented
};

