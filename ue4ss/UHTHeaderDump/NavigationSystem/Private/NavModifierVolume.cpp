#include "NavModifierVolume.h"
#include "NavArea_Null.h"
#include "Templates/SubclassOf.h"

ANavModifierVolume::ANavModifierVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Null::StaticClass();
    this->bMaskFillCollisionUnderneathForNavmesh = false;
    this->NavMeshResolution = ENavigationDataResolution::MAX;
}

void ANavModifierVolume::SetAreaClass(TSubclassOf<UNavArea> NewAreaClass) {
}


