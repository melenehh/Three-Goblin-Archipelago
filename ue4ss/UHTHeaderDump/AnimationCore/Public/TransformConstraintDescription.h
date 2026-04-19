#pragma once
#include "CoreMinimal.h"
#include "ConstraintDescriptionEx.h"
#include "ETransformConstraintType.h"
#include "TransformConstraintDescription.generated.h"

USTRUCT(BlueprintType)
struct FTransformConstraintDescription : public FConstraintDescriptionEx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransformConstraintType TransformType;
    
    ANIMATIONCORE_API FTransformConstraintDescription();
};

