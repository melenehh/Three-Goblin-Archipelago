#pragma once
#include "CoreMinimal.h"
#include "BlackboardKeyType.h"
#include "BlackboardKeyType_NativeEnum.generated.h"

class UEnum;

UCLASS(Blueprintable, CollapseCategories, HideDropdown, MinimalAPI, NotEditInlineNew)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EnumName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* EnumType;
    
    UBlackboardKeyType_NativeEnum();

};

