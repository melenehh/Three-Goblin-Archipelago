#pragma once
#include "CoreMinimal.h"
#include "FieldNodeInt.h"
#include "UniformInteger.generated.h"

class UUniformInteger;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UUniformInteger : public UFieldNodeInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Magnitude;
    
    UUniformInteger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUniformInteger* SetUniformInteger(int32 NewMagnitude);
    
};

