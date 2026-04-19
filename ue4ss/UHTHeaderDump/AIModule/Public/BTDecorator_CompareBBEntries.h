#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "BlackboardKeySelector.h"
#include "EBlackBoardEntryComparison.h"
#include "BTDecorator_CompareBBEntries.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTDecorator_CompareBBEntries : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBlackBoardEntryComparison::Type> Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKeyA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKeyB;
    
public:
    UBTDecorator_CompareBBEntries();

};

