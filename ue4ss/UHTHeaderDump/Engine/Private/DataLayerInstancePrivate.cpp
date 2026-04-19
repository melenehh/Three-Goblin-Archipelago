#include "DataLayerInstancePrivate.h"
#include "DataLayerAsset.h"

UDataLayerInstancePrivate::UDataLayerInstancePrivate() {
    this->DataLayerAsset = CreateDefaultSubobject<UDataLayerAsset>(TEXT("DataLayerAsset"));
}


