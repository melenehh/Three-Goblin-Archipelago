#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InterchangeMeshFactoryNode.h"
#include "InterchangeStaticMeshFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeStaticMeshFactoryNode : public UInterchangeMeshFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeStaticMeshFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSupportFaceRemap(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSrcLightmapIndex(const int32& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomMinLightmapResolution(const int32& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomMaxLumenMeshCards(const int32& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomGenerateLightmapUVs(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomGenerateDistanceFieldAsIfTwoSided(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDstLightmapIndex(const int32& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDistanceFieldResolutionScale(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDistanceFieldReplacementMesh(const FSoftObjectPath& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomBuildScale3D(const FVector& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomBuildReversedIndexBuffer(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomBuildNanite(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSocketUd(const FString& SocketUid);
    
    UFUNCTION(BlueprintCallable)
    void InitializeStaticMeshNode(const FString& UniqueID, const FString& DisplayLabel, const FString& InAssetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSocketUids(TArray<FString>& OutSocketUids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSocketUidCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSupportFaceRemap(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSrcLightmapIndex(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomMinLightmapResolution(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomMaxLumenMeshCards(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomGenerateLightmapUVs(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomDstLightmapIndex(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomDistanceFieldResolutionScale(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomDistanceFieldReplacementMesh(FSoftObjectPath& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomBuildScale3D(FVector& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomBuildReversedIndexBuffer(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomBuildNanite(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddSocketUids(const TArray<FString>& InSocketUids);
    
    UFUNCTION(BlueprintCallable)
    bool AddSocketUid(const FString& SocketUid);
    
};

