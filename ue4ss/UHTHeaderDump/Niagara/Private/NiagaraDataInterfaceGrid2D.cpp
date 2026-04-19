#include "NiagaraDataInterfaceGrid2D.h"

UNiagaraDataInterfaceGrid2D::UNiagaraDataInterfaceGrid2D() {
    this->ClearBeforeNonIterationStage = true;
    this->NumCellsX = 3;
    this->NumCellsY = 3;
    this->NumCellsMaxAxis = 3;
    this->NumAttributes = 0;
    this->SetGridFromMaxAxis = false;
}


