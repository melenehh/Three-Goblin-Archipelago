#pragma once
#include "CoreMinimal.h"
#include "BlackboardKeyType.h"
#include "BlackboardKeyType_Object.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UBlackboardKeyType_Object : public UBlackboardKeyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    UClass* BaseClass;
    
    UBlackboardKeyType_Object();

};

