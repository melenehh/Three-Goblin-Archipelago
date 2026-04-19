#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AssetUserData -FallbackName=Interface_AssetUserData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PerPlatformBool -FallbackName=PerPlatformBool
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PerPlatformInt -FallbackName=PerPlatformInt
#include "EGroomInterpolationType.h"
#include "HairGroupInfoWithVisibility.h"
#include "HairGroupsCardsSourceDescription.h"
#include "HairGroupsInterpolation.h"
#include "HairGroupsLOD.h"
#include "HairGroupsMaterial.h"
#include "HairGroupsMeshesSourceDescription.h"
#include "HairGroupsPhysics.h"
#include "HairGroupsRendering.h"
#include "GroomAsset.generated.h"

class UAssetUserData;
class USkeletalMesh;

UCLASS(Blueprintable)
class HAIRSTRANDSCORE_API UGroomAsset : public UObject, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupInfoWithVisibility> HairGroupsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupsRendering> HairGroupsRendering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupsPhysics> HairGroupsPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupsInterpolation> HairGroupsInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupsLOD> HairGroupsLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupsCardsSourceDescription> HairGroupsCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupsMeshesSourceDescription> HairGroupsMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupsMaterial> HairGroupsMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    bool EnableGlobalInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    bool EnableSimulationCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    EGroomInterpolationType HairInterpolationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* RiggedSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DeformedGroupSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MinLOD;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformBool DisableBelowMinLodStripping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> EffectiveLODBias;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> AssetUserData;
    
    UGroomAsset();

    UFUNCTION(BlueprintCallable)
    void SetRiggedSkeletalMesh(USkeletalMesh* In);
    
    UFUNCTION(BlueprintCallable)
    void SetHairInterpolationType(EGroomInterpolationType In);
    
    UFUNCTION(BlueprintCallable)
    void SetHairGroupsRendering(const TArray<FHairGroupsRendering>& In);
    
    UFUNCTION(BlueprintCallable)
    void SetHairGroupsPhysics(const TArray<FHairGroupsPhysics>& In);
    
    UFUNCTION(BlueprintCallable)
    void SetHairGroupsMeshes(const TArray<FHairGroupsMeshesSourceDescription>& In);
    
    UFUNCTION(BlueprintCallable)
    void SetHairGroupsMaterials(const TArray<FHairGroupsMaterial>& In);
    
    UFUNCTION(BlueprintCallable)
    void SetHairGroupsLOD(const TArray<FHairGroupsLOD>& In);
    
    UFUNCTION(BlueprintCallable)
    void SetHairGroupsInterpolation(const TArray<FHairGroupsInterpolation>& In);
    
    UFUNCTION(BlueprintCallable)
    void SetHairGroupsCards(const TArray<FHairGroupsCardsSourceDescription>& In);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSimulationCache(bool In);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableGlobalInterpolation(bool In);
    
    UFUNCTION(BlueprintCallable)
    void SetDeformedGroupSections(const TArray<int32>& In);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMesh* GetRiggedSkeletalMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGroomInterpolationType GetHairInterpolationType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHairGroupsRendering> GetHairGroupsRendering();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHairGroupsPhysics> GetHairGroupsPhysics();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHairGroupsMeshesSourceDescription> GetHairGroupsMeshes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHairGroupsMaterial> GetHairGroupsMaterials();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHairGroupsLOD> GetHairGroupsLOD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHairGroupsInterpolation> GetHairGroupsInterpolation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHairGroupsCardsSourceDescription> GetHairGroupsCards();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableSimulationCache() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableGlobalInterpolation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetDeformedGroupSections();
    

    // Fix for true pure virtual functions not being implemented
};

