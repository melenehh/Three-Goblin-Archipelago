#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
#include "EInterchangeNodeContainerType.h"
#include "InterchangeBaseNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeBaseNode : public UObject {
    GENERATED_BODY()
public:
    UInterchangeBaseNode();

    UFUNCTION(BlueprintCallable)
    bool SetParentUid(const FString& ParentUid);
    
    UFUNCTION(BlueprintCallable)
    bool SetEnabled(const bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool SetDisplayLabel(const FString& DisplayName);
    
    UFUNCTION(BlueprintCallable)
    bool SetAssetName(const FString& AssetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RemoveTargetNodeUid(const FString& AssetUid) const;
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAttribute(const FString& NodeAttributeKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeNode(const FString& UniqueID, const FString& DisplayLabel, const EInterchangeNodeContainerType NodeContainerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVector2Attribute(const FString& NodeAttributeKey, FVector2f& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUniqueID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTargetNodeUids(TArray<FString>& OutTargetAssets) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTargetNodeCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStringAttribute(const FString& NodeAttributeKey, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetParentUid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInterchangeNodeContainerType GetNodeContainerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLinearColorAttribute(const FString& NodeAttributeKey, FLinearColor& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInt32Attribute(const FString& NodeAttributeKey, int32& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGuidAttribute(const FString& NodeAttributeKey, FGuid& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFloatAttribute(const FString& NodeAttributeKey, float& OutValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetDoubleAttribute(const FString& NodeAttributeKey, double& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDisplayLabel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBooleanAttribute(const FString& NodeAttributeKey, bool& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAssetName() const;
    
    UFUNCTION(BlueprintCallable)
    bool AddVector2Attribute(const FString& NodeAttributeKey, const FVector2f& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AddTargetNodeUid(const FString& AssetUid) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddStringAttribute(const FString& NodeAttributeKey, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddLinearColorAttribute(const FString& NodeAttributeKey, const FLinearColor& Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddInt32Attribute(const FString& NodeAttributeKey, const int32& Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddGuidAttribute(const FString& NodeAttributeKey, const FGuid& Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddFloatAttribute(const FString& NodeAttributeKey, const float& Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddDoubleAttribute(const FString& NodeAttributeKey, const double& Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddBooleanAttribute(const FString& NodeAttributeKey, const bool& Value);
    
};

