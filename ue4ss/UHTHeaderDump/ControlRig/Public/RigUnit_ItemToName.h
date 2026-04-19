#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_ItemBase.h"
#include "RigUnit_ItemToName.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ItemToName : public FRigUnit_ItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Result;
    
    FRigUnit_ItemToName();
};

