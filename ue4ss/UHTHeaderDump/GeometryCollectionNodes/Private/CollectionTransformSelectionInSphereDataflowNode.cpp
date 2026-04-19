#include "CollectionTransformSelectionInSphereDataflowNode.h"

FCollectionTransformSelectionInSphereDataflowNode::FCollectionTransformSelectionInSphereDataflowNode() {
    this->Type = ESelectSubjectTypeEnum::Dataflow_SelectSubjectType_Vertices;
    this->bAllVerticesMustContainedInSphere = false;
}

