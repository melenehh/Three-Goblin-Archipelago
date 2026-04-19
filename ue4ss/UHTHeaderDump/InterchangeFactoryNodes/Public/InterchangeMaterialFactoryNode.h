#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EBlendMode -FallbackName=EBlendMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMaterialShadingModel -FallbackName=EMaterialShadingModel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERefractionMode -FallbackName=ERefractionMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETranslucencyLightingMode -FallbackName=ETranslucencyLightingMode
#include "InterchangeBaseMaterialFactoryNode.h"
#include "InterchangeMaterialFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeMaterialFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomTwoSided(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomTranslucencyLightingMode(const TEnumAsByte<ETranslucencyLightingMode>& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomShadingModel(const TEnumAsByte<EMaterialShadingModel>& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomScreenSpaceReflections(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomRefractionMethod(const TEnumAsByte<ERefractionMode>& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomOpacityMaskClipValue(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomBlendMode(const TEnumAsByte<EBlendMode>& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTransmissionColorConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTangentConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSubsurfaceConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpecularConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRefractionConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOpacityConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOcclusionConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNormalConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMetallicConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFuzzColorConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEmissiveColorConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomTwoSided(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomTranslucencyLightingMode(TEnumAsByte<ETranslucencyLightingMode>& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomShadingModel(TEnumAsByte<EMaterialShadingModel>& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomScreenSpaceReflections(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomRefractionMethod(TEnumAsByte<ERefractionMode>& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomOpacityMaskClipValue(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomBlendMode(TEnumAsByte<EBlendMode>& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetClothConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetClearCoatRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetClearCoatNormalConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetClearCoatConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBaseColorConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAnisotropyConnection(FString& ExpressionNodeUid, FString& OutputName) const;
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToTransmissionColor(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToTangent(const FString& ExpressionNodeUid);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToSubsurface(const FString& ExpressionNodeUid);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToSpecular(const FString& ExpressionNodeUid);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToRoughness(const FString& ExpressionNodeUid);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToRefraction(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToOpacity(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToOcclusion(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToNormal(const FString& ExpressionNodeUid);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToMetallic(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToFuzzColor(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToEmissiveColor(const FString& ExpressionNodeUid);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToCloth(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToClearCoatRoughness(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToClearCoatNormal(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToClearCoat(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToBaseColor(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToAnisotropy(const FString& ExpressionNodeUid);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToTransmissionColor(const FString& ExpressionNodeUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToTangent(const FString& ExpressionNodeUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToSubsurface(const FString& ExpressionNodeUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToSpecular(const FString& ExpressionNodeUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToRoughness(const FString& ExpressionNodeUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToRefraction(const FString& ExpressionNodeUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToOpacity(const FString& ExpressionNodeUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToOcclusion(const FString& ExpressionNodeUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToNormal(const FString& ExpressionNodeUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToMetallic(const FString& ExpressionNodeUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToFuzzColor(const FString& ExpressionNodeUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToEmissiveColor(const FString& ExpressionNodeUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToCloth(const FString& ExpressionNodeUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToClearCoatRoughness(const FString& ExpressionNodeUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToClearCoatNormal(const FString& ExpressionNodeUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToClearCoat(const FString& ExpressionNodeUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToBaseColor(const FString& ExpressionNodeUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectOutputToAnisotropy(const FString& ExpressionNodeUid, const FString& OutputName);
    
};

