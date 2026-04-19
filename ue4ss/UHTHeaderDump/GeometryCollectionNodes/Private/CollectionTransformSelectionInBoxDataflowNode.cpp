#include "CollectionTransformSelectionInBoxDataflowNode.h"

FCollectionTransformSelectionInBoxDataflowNode::FCollectionTransformSelectionInBoxDataflowNode() {
    this->Type = ESelectSubjectTypeEnum::Dataflow_SelectSubjectType_Vertices;
    this->bAllVerticesMustContainedInBox = false;
}

