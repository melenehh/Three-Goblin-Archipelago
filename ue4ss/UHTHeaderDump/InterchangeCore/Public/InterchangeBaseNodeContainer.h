#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InterchangeBaseNodeContainer.generated.h"

class UInterchangeBaseNode;
class UInterchangeFactoryBaseNode;

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeBaseNodeContainer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UInterchangeBaseNode*> Nodes;
    
public:
    UInterchangeBaseNodeContainer();

    UFUNCTION(BlueprintCallable)
    bool SetNodeParentUid(const FString& NodeUniqueID, const FString& NewParentNodeUid);
    
    UFUNCTION(BlueprintCallable)
    void SaveToFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void ResetChildrenCache();
    
    UFUNCTION(BlueprintCallable)
    void ReplaceNode(const FString& NodeUniqueID, UInterchangeFactoryBaseNode* NewNode);
    
    UFUNCTION(BlueprintCallable)
    void LoadFromFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNodeUidValid(const FString& NodeUniqueID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRoots(TArray<FString>& RootNodes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNodes(const UClass* ClassNode, TArray<FString>& OutNodes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetNodeChildrenUids(const FString& NodeUniqueID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNodeChildrenCount(const FString& NodeUniqueID) const;
    
    UFUNCTION(BlueprintCallable)
    UInterchangeBaseNode* GetNodeChildren(const FString& NodeUniqueID, int32 ChildIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInterchangeBaseNode* GetNode(const FString& NodeUniqueID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInterchangeFactoryBaseNode* GetFactoryNode(const FString& NodeUniqueID) const;
    
    UFUNCTION(BlueprintCallable)
    void ComputeChildrenCache();
    
    UFUNCTION(BlueprintCallable)
    FString AddNode(UInterchangeBaseNode* Node);
    
};

