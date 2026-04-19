#include "NiagaraDataInterfaceStaticMesh.h"

UNiagaraDataInterfaceStaticMesh::UNiagaraDataInterfaceStaticMesh() {
    this->SourceMode = ENDIStaticMesh_SourceMode::Default;
    this->DefaultMesh = NULL;
    this->SourceComponent = NULL;
    this->bCaptureTransformsPerFrame = true;
    this->bUsePhysicsBodyVelocity = false;
    this->bAllowSamplingFromStreamingLODs = false;
    this->LODIndex = 0;
    this->InstanceIndex = -1;
}

void UNiagaraDataInterfaceStaticMesh::SetNiagaraStaticMeshDIInstanceIndex(UNiagaraComponent* NiagaraSystem, const FName UserParameterName, int32 NewInstanceIndex) {
}

void UNiagaraDataInterfaceStaticMesh::OnSourceEndPlay(AActor* InSource, TEnumAsByte<EEndPlayReason::Type> Reason) {
}


