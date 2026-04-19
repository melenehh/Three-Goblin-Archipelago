#include "DataLayerManager.h"

UDataLayerManager::UDataLayerManager() {
}

bool UDataLayerManager::SetDataLayerRuntimeState(const UDataLayerAsset* InDataLayerAsset, EDataLayerRuntimeState InState, bool bInIsRecursive) {
    return false;
}

bool UDataLayerManager::SetDataLayerInstanceRuntimeState(const UDataLayerInstance* InDataLayerInstance, EDataLayerRuntimeState InState, bool bInIsRecursive) {
    return false;
}

EDataLayerRuntimeState UDataLayerManager::GetDataLayerInstanceRuntimeState(const UDataLayerInstance* InDataLayerInstance) const {
    return EDataLayerRuntimeState::Unloaded;
}

UDataLayerInstance* UDataLayerManager::GetDataLayerInstanceFromName(const FName& InDataLayerInstanceName) const {
    return NULL;
}

UDataLayerInstance* UDataLayerManager::GetDataLayerInstanceFromAsset(const UDataLayerAsset* InDataLayerAsset) const {
    return NULL;
}

EDataLayerRuntimeState UDataLayerManager::GetDataLayerInstanceEffectiveRuntimeState(const UDataLayerInstance* InDataLayerInstance) const {
    return EDataLayerRuntimeState::Unloaded;
}


