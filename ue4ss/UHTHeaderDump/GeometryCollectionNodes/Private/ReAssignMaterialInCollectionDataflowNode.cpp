#include "ReAssignMaterialInCollectionDataflowNode.h"

FReAssignMaterialInCollectionDataflowNode::FReAssignMaterialInCollectionDataflowNode() {
    this->OutsideMaterialIdx = 0;
    this->InsideMaterialIdx = 0;
    this->bAssignOutsideMaterial = false;
    this->bAssignInsideMaterial = false;
}

