#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseFloatParameterSource.h"
#include "GizmoFloatParameterChange.h"
#include "GizmoLocalFloatParameterSource.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGizmoFloatParameterChange LastChange;
    
    UGizmoLocalFloatParameterSource();

};

