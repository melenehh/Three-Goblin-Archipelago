#include "ConstraintsScriptingLibrary.h"

UConstraintsScriptingLibrary::UConstraintsScriptingLibrary() {
}

bool UConstraintsScriptingLibrary::RemoveThisConstraint(UWorld* InWorld, UTickableConstraint* InTickableConstraint) {
    return false;
}

bool UConstraintsScriptingLibrary::RemoveConstraint(UWorld* InWorld, int32 InIndex) {
    return false;
}

UConstraintsManager* UConstraintsScriptingLibrary::GetManager(UWorld* InWorld) {
    return NULL;
}

TArray<UTickableConstraint*> UConstraintsScriptingLibrary::GetConstraintsArray(UWorld* InWorld) {
    return TArray<UTickableConstraint*>();
}

UTransformableHandle* UConstraintsScriptingLibrary::CreateTransformableHandle(UWorld* InWorld, UObject* InObject, const FName& InAttachmentName) {
    return NULL;
}

UTransformableComponentHandle* UConstraintsScriptingLibrary::CreateTransformableComponentHandle(UWorld* InWorld, USceneComponent* InSceneComponent, const FName& InSocketName) {
    return NULL;
}

UTickableTransformConstraint* UConstraintsScriptingLibrary::CreateFromType(UWorld* InWorld, const ETransformConstraintType InType) {
    return NULL;
}

bool UConstraintsScriptingLibrary::AddConstraint(UWorld* InWorld, UTransformableHandle* InParentHandle, UTransformableHandle* InChildHandle, UTickableTransformConstraint* InConstraint, const bool bMaintainOffset) {
    return false;
}


