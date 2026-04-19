#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimMetaData.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimMetaData : public UObject {
    GENERATED_BODY()
public:
    UAnimMetaData();

};

