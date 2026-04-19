#include "NiagaraDataInterfaceRigidMeshCollisionQuery.h"

UNiagaraDataInterfaceRigidMeshCollisionQuery::UNiagaraDataInterfaceRigidMeshCollisionQuery() {
    this->OnlyUseMoveable = true;
    this->UseComplexCollisions = false;
    this->GlobalSearchAllowed = false;
    this->GlobalSearchForced = false;
    this->GlobalSearchFallback_Unscripted = false;
    this->MaxNumPrimitives = 100;
}


