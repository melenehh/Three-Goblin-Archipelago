#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ModifyBoneConstraintData.h"
#include "KawaiiPhysicsBoneConstraintsDataAsset.generated.h"

UCLASS(Blueprintable)
class KAWAIIPHYSICS_API UKawaiiPhysicsBoneConstraintsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModifyBoneConstraintData> BoneConstraintsData;
    
    UKawaiiPhysicsBoneConstraintsDataAsset();

};

