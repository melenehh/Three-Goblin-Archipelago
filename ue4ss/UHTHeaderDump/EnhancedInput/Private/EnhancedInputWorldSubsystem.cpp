#include "EnhancedInputWorldSubsystem.h"

UEnhancedInputWorldSubsystem::UEnhancedInputWorldSubsystem() {
    this->PlayerInput = NULL;
}

bool UEnhancedInputWorldSubsystem::RemoveActorInputComponent(AActor* Actor) {
    return false;
}

void UEnhancedInputWorldSubsystem::AddActorInputComponent(AActor* Actor) {
}


