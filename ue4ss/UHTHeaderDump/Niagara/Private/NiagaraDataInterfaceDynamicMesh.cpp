#include "NiagaraDataInterfaceDynamicMesh.h"

UNiagaraDataInterfaceDynamicMesh::UNiagaraDataInterfaceDynamicMesh() {
    this->NumVertices = 0;
    this->NumTexCoords = 0;
    this->bHasColors = false;
    this->bHasTangentBasis = false;
    this->bClearTrianglesPerFrame = false;
}


