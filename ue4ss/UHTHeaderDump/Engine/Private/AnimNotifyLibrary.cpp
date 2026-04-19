#include "AnimNotifyLibrary.h"

UAnimNotifyLibrary::UAnimNotifyLibrary() {
}

bool UAnimNotifyLibrary::NotifyStateReachedEnd(const FAnimNotifyEventReference& EventReference) {
    return false;
}

float UAnimNotifyLibrary::GetCurrentAnimationTimeRatio(const FAnimNotifyEventReference& EventReference) {
    return 0.0f;
}

float UAnimNotifyLibrary::GetCurrentAnimationTime(const FAnimNotifyEventReference& EventReference) {
    return 0.0f;
}

float UAnimNotifyLibrary::GetCurrentAnimationNotifyStateTimeRatio(const FAnimNotifyEventReference& EventReference) {
    return 0.0f;
}

float UAnimNotifyLibrary::GetCurrentAnimationNotifyStateTime(const FAnimNotifyEventReference& EventReference) {
    return 0.0f;
}


