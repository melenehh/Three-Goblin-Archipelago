#pragma once
#include "CoreMinimal.h"
#include "FieldNodeInt.h"
#include "ToIntegerField.generated.h"

class UFieldNodeFloat;
class UToIntegerField;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UToIntegerField : public UFieldNodeInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFieldNodeFloat* FloatField;
    
    UToIntegerField(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UToIntegerField* SetToIntegerField(const UFieldNodeFloat* NewFloatField);
    
};

