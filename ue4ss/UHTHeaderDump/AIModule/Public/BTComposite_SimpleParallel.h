#pragma once
#include "CoreMinimal.h"
#include "BTCompositeNode.h"
#include "EBTParallelMode.h"
#include "BTComposite_SimpleParallel.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTComposite_SimpleParallel : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBTParallelMode::Type> FinishMode;
    
    UBTComposite_SimpleParallel();

};

