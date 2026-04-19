#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ImportAssetParameters.h"
#include "InterchangeManager.generated.h"

class UInterchangeManager;
class UInterchangeSourceData;
class UInterchangeWriterBase;

UCLASS(Blueprintable, MinimalAPI, Transient)
class UInterchangeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UClass*> RegisteredTranslatorsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UClass*> RegisteredFactoryClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UInterchangeWriterBase*> RegisteredWriters;
    
public:
    UInterchangeManager();

    UFUNCTION(BlueprintCallable)
    bool ImportScene(const FString& ContentPath, const UInterchangeSourceData* SourceData, const FImportAssetParameters& ImportAssetParameters);
    
    UFUNCTION(BlueprintCallable)
    bool ImportAsset(const FString& ContentPath, const UInterchangeSourceData* SourceData, const FImportAssetParameters& ImportAssetParameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetRegisteredFactoryClass(const UClass* ClassToMake) const;
    
    UFUNCTION(BlueprintCallable)
    static UInterchangeManager* GetInterchangeManagerScripted();
    
    UFUNCTION(BlueprintCallable)
    bool ExportScene(const UObject* World, bool bIsAutomated);
    
    UFUNCTION(BlueprintCallable)
    bool ExportAsset(const UObject* Asset, bool bIsAutomated);
    
    UFUNCTION(BlueprintCallable)
    static UInterchangeSourceData* CreateSourceData(const FString& InFilename);
    
};

