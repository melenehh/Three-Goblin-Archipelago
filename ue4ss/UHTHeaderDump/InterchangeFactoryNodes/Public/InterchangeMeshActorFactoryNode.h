#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "InterchangeActorFactoryNode.h"
#include "InterchangeMeshActorFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeMeshActorFactoryNode : public UInterchangeActorFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeMeshActorFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetSlotMaterialDependencyUid(const FString& SlotName, const FString& MaterialDependencyUid);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomGeometricTransform(const FTransform& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAnimationAssetUidToPlay(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSlotMaterialDependencyUid(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSlotMaterialDependencyUid(const FString& SlotName, FString& OutMaterialDependency) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomGeometricTransform(FTransform& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue) const;
    
};

