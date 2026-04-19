#pragma once
#include "CoreMinimal.h"
#include "GizmoElementLineBase.h"
#include "GizmoElementGroup.generated.h"

class UGizmoElementBase;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UGizmoElementGroup : public UGizmoElementLineBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConstantScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHitOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGizmoElementBase*> Elements;
    
public:
    UGizmoElementGroup();

};

