#include "InterchangeFactoryBaseNode.h"

UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode() {
}

bool UInterchangeFactoryBaseNode::UnsetSkipNodeImport() {
    return false;
}

bool UInterchangeFactoryBaseNode::UnsetForceNodeReimport() {
    return false;
}

bool UInterchangeFactoryBaseNode::ShouldSkipNodeImport() const {
    return false;
}

bool UInterchangeFactoryBaseNode::ShouldForceNodeReimport() const {
    return false;
}

bool UInterchangeFactoryBaseNode::SetSkipNodeImport() {
    return false;
}

bool UInterchangeFactoryBaseNode::SetReimportStrategyFlags(const EReimportStrategyFlags& ReimportStrategyFlags) {
    return false;
}

bool UInterchangeFactoryBaseNode::SetForceNodeReimport() {
    return false;
}

bool UInterchangeFactoryBaseNode::SetCustomSubPath(const FString& AttributeValue) {
    return false;
}

bool UInterchangeFactoryBaseNode::SetCustomReferenceObject(const FSoftObjectPath& AttributeValue) {
    return false;
}

bool UInterchangeFactoryBaseNode::RemoveFactoryDependencyUid(const FString& DependencyUid) {
    return false;
}

EReimportStrategyFlags UInterchangeFactoryBaseNode::GetReimportStrategyFlags() const {
    return EReimportStrategyFlags::ApplyNoProperties;
}

void UInterchangeFactoryBaseNode::GetFactoryDependency(const int32 Index, FString& OutDependency) const {
}

int32 UInterchangeFactoryBaseNode::GetFactoryDependenciesCount() const {
    return 0;
}

void UInterchangeFactoryBaseNode::GetFactoryDependencies(TArray<FString>& OutDependencies) const {
}

bool UInterchangeFactoryBaseNode::GetCustomSubPath(FString& AttributeValue) const {
    return false;
}

bool UInterchangeFactoryBaseNode::GetCustomReferenceObject(FSoftObjectPath& AttributeValue) const {
    return false;
}

bool UInterchangeFactoryBaseNode::AddFactoryDependencyUid(const FString& DependencyUid) {
    return false;
}


