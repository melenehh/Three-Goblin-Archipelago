#include "DataLayerAsset.h"

UDataLayerAsset::UDataLayerAsset() {
    this->DataLayerType = EDataLayerType::Editor;
    this->bSupportsActorFilters = false;
}

bool UDataLayerAsset::IsRuntime() const {
    return false;
}

EDataLayerType UDataLayerAsset::GetType() const {
    return EDataLayerType::Runtime;
}

FColor UDataLayerAsset::GetDebugColor() const {
    return FColor{};
}


