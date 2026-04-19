#include "BehaviorTreeComponent.h"

UBehaviorTreeComponent::UBehaviorTreeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->DefaultBehaviorTreeAsset = NULL;
}

void UBehaviorTreeComponent::SetDynamicSubtree(FGameplayTag InjectTag, UBehaviorTree* BehaviorAsset) {
}

double UBehaviorTreeComponent::GetTagCooldownEndTime(FGameplayTag CooldownTag) const {
    return 0.0;
}

void UBehaviorTreeComponent::AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration) {
}


