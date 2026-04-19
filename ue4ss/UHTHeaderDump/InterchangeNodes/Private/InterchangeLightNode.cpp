#include "InterchangeLightNode.h"

UInterchangeLightNode::UInterchangeLightNode() {
}

bool UInterchangeLightNode::SetCustomIntensityUnits(const EInterchangeLightUnits& AttributeValue) {
    return false;
}

bool UInterchangeLightNode::SetCustomIESTexture(const FString& AttributeValue) {
    return false;
}

bool UInterchangeLightNode::SetCustomAttenuationRadius(float AttributeValue) {
    return false;
}

bool UInterchangeLightNode::GetCustomIntensityUnits(EInterchangeLightUnits& AttributeValue) const {
    return false;
}

bool UInterchangeLightNode::GetCustomIESTexture(FString& AttributeValue) const {
    return false;
}

bool UInterchangeLightNode::GetCustomAttenuationRadius(float& AttributeValue) const {
    return false;
}


