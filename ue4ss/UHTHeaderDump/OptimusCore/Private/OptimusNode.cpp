#include "OptimusNode.h"

UOptimusNode::UOptimusNode() {
    this->DiagnosticLevel = EOptimusDiagnosticLevel::None;
}

bool UOptimusNode::SetGraphPosition(const FVector2D& InPosition) {
    return false;
}

FName UOptimusNode::GetNodeName() const {
    return NAME_None;
}

FName UOptimusNode::GetNodeCategory() const {
    return NAME_None;
}

FVector2D UOptimusNode::GetGraphPosition() const {
    return FVector2D{};
}

FText UOptimusNode::GetDisplayName() const {
    return FText::GetEmpty();
}


