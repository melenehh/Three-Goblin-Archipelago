#pragma once
#include "CoreMinimal.h"
#include "FieldNodeFloat.h"
#include "ToFloatField.generated.h"

class UFieldNodeInt;
class UToFloatField;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UToFloatField : public UFieldNodeFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFieldNodeInt* IntField;
    
    UToFloatField(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UToFloatField* SetToFloatField(const UFieldNodeInt* IntegerField);
    
};

