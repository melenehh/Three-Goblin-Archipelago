#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BrainComponent.h"
#include "BehaviorTreeComponent.generated.h"

class UBTNode;
class UBehaviorTree;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBehaviorTreeComponent : public UBrainComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBTNode*> NodeInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* DefaultBehaviorTreeAsset;
    
public:
    UBehaviorTreeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDynamicSubtree(FGameplayTag InjectTag, UBehaviorTree* BehaviorAsset);
    
    UFUNCTION(BlueprintPure)
    double GetTagCooldownEndTime(FGameplayTag CooldownTag) const;
    
    UFUNCTION(BlueprintCallable)
    void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
    
};

