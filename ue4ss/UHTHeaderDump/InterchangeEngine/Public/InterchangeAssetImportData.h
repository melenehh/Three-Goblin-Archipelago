#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetImportData -FallbackName=AssetImportData
#include "InterchangeAssetImportData.generated.h"

class UInterchangeBaseNode;
class UInterchangeBaseNodeContainer;
class UInterchangeFactoryBaseNode;
class UObject;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UInterchangeAssetImportData : public UAssetImportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SceneImportAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NodeUniqueID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterchangeBaseNodeContainer* NodeContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Pipelines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterchangeBaseNodeContainer* TransientNodeContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> TransientPipelines;
    
public:
    UInterchangeAssetImportData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SetPipelines(const TArray<UObject*>& InPipelines) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetNodeContainer(UInterchangeBaseNodeContainer* InNodeContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ScriptGetFirstFilename() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> ScriptExtractFilenames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> ScriptExtractDisplayLabels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInterchangeBaseNode* GetStoredNode(const FString& InNodeUniqueId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInterchangeFactoryBaseNode* GetStoredFactoryNode(const FString& InNodeUniqueId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UObject*> GetPipelines() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfPipelines() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInterchangeBaseNodeContainer* GetNodeContainer() const;
    
};

