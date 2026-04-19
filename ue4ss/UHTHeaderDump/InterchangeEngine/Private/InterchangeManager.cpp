#include "InterchangeManager.h"

UInterchangeManager::UInterchangeManager() {
}

bool UInterchangeManager::ImportScene(const FString& ContentPath, const UInterchangeSourceData* SourceData, const FImportAssetParameters& ImportAssetParameters) {
    return false;
}

bool UInterchangeManager::ImportAsset(const FString& ContentPath, const UInterchangeSourceData* SourceData, const FImportAssetParameters& ImportAssetParameters) {
    return false;
}

UClass* UInterchangeManager::GetRegisteredFactoryClass(const UClass* ClassToMake) const {
    return NULL;
}

UInterchangeManager* UInterchangeManager::GetInterchangeManagerScripted() {
    return NULL;
}

bool UInterchangeManager::ExportScene(const UObject* World, bool bIsAutomated) {
    return false;
}

bool UInterchangeManager::ExportAsset(const UObject* Asset, bool bIsAutomated) {
    return false;
}

UInterchangeSourceData* UInterchangeManager::CreateSourceData(const FString& InFilename) {
    return NULL;
}


