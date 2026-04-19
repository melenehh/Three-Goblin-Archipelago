#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EditableGameplayTagQueryExpression.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Transient)
class UEditableGameplayTagQueryExpression : public UObject {
    GENERATED_BODY()
public:
    UEditableGameplayTagQueryExpression();

};

