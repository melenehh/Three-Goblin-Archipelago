#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "InterchangeSceneNode.generated.h"

class UInterchangeBaseNodeContainer;

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangeSceneNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeSceneNode();

    UFUNCTION(BlueprintCallable)
    bool SetSlotMaterialDependencyUid(const FString& SlotName, const FString& MaterialDependencyUid);
    
    UFUNCTION(BlueprintCallable)
    bool SetMorphTargetCurveWeight(const FString& MorphTargetName, const float& Weight);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomTimeZeroLocalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& AttributeValue, bool bResetCache);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomLocalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& AttributeValue, bool bResetCache);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomGeometricTransform(const FTransform& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomBindPoseLocalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& AttributeValue, bool bResetCache);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAssetInstanceUid(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAnimationAssetUidToPlay(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSpecializedType(const FString& SpecializedType);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSlotMaterialDependencyUid(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpecializedTypeContains(const FString& SpecializedType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSpecializedTypes(TArray<FString>& OutSpecializedTypes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpecializedTypeCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSpecializedType(const int32 Index, FString& OutSpecializedType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSlotMaterialDependencyUid(const FString& SlotName, FString& OutMaterialDependency) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMorphTargetCurveWeights(TMap<FString, float>& OutMorphTargetCurveWeights) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomTimeZeroLocalTransform(FTransform& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomTimeZeroGlobalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomLocalTransform(FTransform& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomGlobalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomGeometricTransform(FTransform& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomBindPoseLocalTransform(FTransform& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomBindPoseGlobalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAssetInstanceUid(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddSpecializedType(const FString& SpecializedType);
    
};

