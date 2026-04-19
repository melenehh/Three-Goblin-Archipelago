#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "EReimportStrategyFlags.h"
#include "InterchangeBaseNode.h"
#include "InterchangeFactoryBaseNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeFactoryBaseNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeFactoryBaseNode();

    UFUNCTION(BlueprintCallable)
    bool UnsetSkipNodeImport();
    
    UFUNCTION(BlueprintCallable)
    bool UnsetForceNodeReimport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldSkipNodeImport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldForceNodeReimport() const;
    
    UFUNCTION(BlueprintCallable)
    bool SetSkipNodeImport();
    
    UFUNCTION(BlueprintCallable)
    bool SetReimportStrategyFlags(const EReimportStrategyFlags& ReimportStrategyFlags);
    
    UFUNCTION(BlueprintCallable)
    bool SetForceNodeReimport();
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSubPath(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomReferenceObject(const FSoftObjectPath& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveFactoryDependencyUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EReimportStrategyFlags GetReimportStrategyFlags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFactoryDependency(const int32 Index, FString& OutDependency) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFactoryDependenciesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFactoryDependencies(TArray<FString>& OutDependencies) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSubPath(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomReferenceObject(FSoftObjectPath& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddFactoryDependencyUid(const FString& DependencyUid);
    
};

