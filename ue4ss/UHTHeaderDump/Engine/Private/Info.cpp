#include "Info.h"

AInfo::AInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowTickBeforeBeginPlay = true;
    this->bEnableAutoLODGeneration = false;
}


