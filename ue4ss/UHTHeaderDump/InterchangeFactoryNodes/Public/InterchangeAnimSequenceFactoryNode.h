#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBaseNode -FallbackName=InterchangeFactoryBaseNode
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeNodes -ObjectName=InterchangeAnimationPayLoadKey -FallbackName=InterchangeAnimationPayLoadKey
#include "InterchangeAnimSequenceFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeAnimSequenceFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeAnimSequenceFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSkeletonSoftObjectPath(const FSoftObjectPath& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSkeletonFactoryNodeUid(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomRemoveCurveRedundantKeys(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomMaterialDriveParameterOnCustomAttribute(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportBoneTracksSampleRate(const double& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportBoneTracksRangeStop(const double& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportBoneTracksRangeStart(const double& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportBoneTracks(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportAttributeCurves(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDoNotImportCurveWithZero(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDeleteExistingNonCurveCustomAttributes(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDeleteExistingMorphTargetCurves(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDeleteExistingCustomAttributeCurves(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAddCurveMetadataToSkeleton(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationPayloadKeysForSceneNodeUids(const TMap<FString, FString>& SceneNodeAnimationPayloadKeyUids, const TMap<FString, uint8>& SceneNodeAnimationPayloadKeyTypes);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationPayloadKeysForMorphTargetNodeUids(const TMap<FString, FString>& MorphTargetAnimationPayloadKeyUids, const TMap<FString, uint8>& MorphTargetAnimationPayloadKeyTypes);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnimatedMaterialCurveSuffixe(const FString& MaterialCurveSuffixe);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnimatedAttributeStepCurveName(const FString& AttributeStepCurveName);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnimatedAttributeCurveName(const FString& AttributeCurveName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAnimatedMaterialCurveSuffixe(const FString& MaterialCurveSuffixe);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAnimatedAttributeStepCurveName(const FString& AttributeStepCurveName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAnimatedAttributeCurveName(const FString& AttributeCurveName);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnimSequenceNode(const FString& UniqueID, const FString& DisplayLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSceneNodeAnimationPayloadKeys(TMap<FString, FInterchangeAnimationPayLoadKey>& OutSceneNodeAnimationPayloadKeys) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMorphTargetNodeAnimationPayloadKeys(TMap<FString, FInterchangeAnimationPayLoadKey>& OutMorphTargetNodeAnimationPayloads) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSkeletonFactoryNodeUid(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomRemoveCurveRedundantKeys(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomImportBoneTracksSampleRate(double& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomImportBoneTracksRangeStop(double& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomImportBoneTracksRangeStart(double& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomImportBoneTracks(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomImportAttributeCurves(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomDoNotImportCurveWithZero(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAddCurveMetadataToSkeleton(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAnimatedMaterialCurveSuffixesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAnimatedMaterialCurveSuffixes(TArray<FString>& OutMaterialCurveSuffixes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAnimatedMaterialCurveSuffixe(const int32 Index, FString& OutMaterialCurveSuffixe) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAnimatedAttributeStepCurveNamesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAnimatedAttributeStepCurveNames(TArray<FString>& OutAttributeStepCurveNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAnimatedAttributeStepCurveName(const int32 Index, FString& OutAttributeStepCurveName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAnimatedAttributeCurveNamesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAnimatedAttributeCurveNames(TArray<FString>& OutAttributeCurveNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAnimatedAttributeCurveName(const int32 Index, FString& OutAttributeCurveName) const;
    
};

