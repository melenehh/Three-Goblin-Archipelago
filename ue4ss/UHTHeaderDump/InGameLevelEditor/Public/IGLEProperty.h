#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGLEProperty.generated.h"

class UIGLE_PropertyValueObject;

USTRUCT(BlueprintType)
struct INGAMELEVELEDITOR_API FIGLEProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PropertyCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> PropertyOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGLE_PropertyValueObject> PropertyValueObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGLE_PropertyValueObject* PropertyValue;
    
    FIGLEProperty();
};

