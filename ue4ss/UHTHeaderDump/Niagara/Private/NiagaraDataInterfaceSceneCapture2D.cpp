#include "NiagaraDataInterfaceSceneCapture2D.h"

UNiagaraDataInterfaceSceneCapture2D::UNiagaraDataInterfaceSceneCapture2D() {
    this->SourceMode = ENDISceneCapture2DSourceMode::UserParameterThenAttachParent;
    this->bAutoMoveWithComponent = false;
    this->AutoMoveOffsetLocationMode = ENDISceneCapture2DOffsetMode::Disabled;
    this->AutoMoveOffsetRotationMode = ENDISceneCapture2DOffsetMode::Disabled;
    this->ManagedCaptureSource = SCS_SceneColorHDR;
    this->ManagedTextureFormat = RTF_RGBA8;
    this->ManagedProjectionType = ECameraProjectionMode::Perspective;
    this->ManagedFOVAngle = 90.00f;
    this->ManagedOrthoWidth = 512.00f;
    this->bManagedCaptureEveryFrame = true;
    this->bManagedCaptureOnMovement = false;
}

void UNiagaraDataInterfaceSceneCapture2D::SetSceneCapture2DManagedShowOnlyActors(UNiagaraComponent* NiagaraSystem, const FName ParameterName, TArray<AActor*> ShowOnlyActors) {
}


