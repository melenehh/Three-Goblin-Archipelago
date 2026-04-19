#pragma once
#include "CoreMinimal.h"
#include "PropertyPathTestStruct.h"
#include "PropertyPathTestBed.generated.h"

class UPropertyPathTestObject;

USTRUCT(BlueprintType)
struct FPropertyPathTestBed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPropertyPathTestObject* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPropertyPathTestObject* ModifiedObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyPathTestStruct ModifiedStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyPathTestStruct DefaultStruct;
    
    PROPERTYPATH_API FPropertyPathTestBed();
};

