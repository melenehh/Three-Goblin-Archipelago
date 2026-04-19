#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBaseNode -FallbackName=InterchangeFactoryBaseNode
#include "InterchangeActorFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeActorFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeActorFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomMobility(const uint8& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomGlobalTransform(const FTransform& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomActorClassName(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomMobility(uint8& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomGlobalTransform(FTransform& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomActorClassName(FString& AttributeValue) const;
    
};

