#pragma once
#include "CoreMinimal.h"
#include "AnimSubsystem.h"
#include "PropertyAccessLibrary.h"
#include "AnimSubsystem_PropertyAccess.generated.h"

USTRUCT(BlueprintType)
struct FAnimSubsystem_PropertyAccess : public FAnimSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyAccessLibrary Library;
    
public:
    ENGINE_API FAnimSubsystem_PropertyAccess();
};

