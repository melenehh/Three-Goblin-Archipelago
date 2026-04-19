#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EGroomBindingMeshType.h"
#include "GoomBindingGroupInfo.h"
#include "GroomBindingAsset.generated.h"

class UGeometryCache;
class UGroomAsset;
class USkeletalMesh;

UCLASS(Blueprintable)
class HAIRSTRANDSCORE_API UGroomBindingAsset : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroomBindingMeshType GroomBindingType;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGroomAsset* Groom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SourceSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* TargetSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCache* SourceGeometryCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCache* TargetGeometryCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInterpolationPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchingSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FGoomBindingGroupInfo> GroupInfos;
    
public:
    UGroomBindingAsset();

    UFUNCTION(BlueprintCallable)
    void SetTargetSkeletalMesh(USkeletalMesh* InSkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetGeometryCache(UGeometryCache* InGeometryCache);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceSkeletalMesh(USkeletalMesh* InSkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceGeometryCache(UGeometryCache* InGeometryCache);
    
    UFUNCTION(BlueprintCallable)
    void SetNumInterpolationPoints(int32 InNumInterpolationPoints);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchingSection(int32 InMatchingSection);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupInfos(const TArray<FGoomBindingGroupInfo>& InGroupInfos);
    
    UFUNCTION(BlueprintCallable)
    void SetGroomBindingType(EGroomBindingMeshType InGroomBindingType);
    
    UFUNCTION(BlueprintCallable)
    void SetGroom(UGroomAsset* InGroom);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMesh* GetTargetSkeletalMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGeometryCache* GetTargetGeometryCache() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMesh* GetSourceSkeletalMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGeometryCache* GetSourceGeometryCache() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumInterpolationPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatchingSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGoomBindingGroupInfo> GetGroupInfos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGroomBindingMeshType GetGroomBindingType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGroomAsset* GetGroom() const;
    
};

