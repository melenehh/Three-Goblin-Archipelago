#pragma once
#include "CoreMinimal.h"
#include "FieldPathNetSerializerSerializationHelper.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct FFieldPathNetSerializerSerializationHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStruct> Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PropertyPath;
    
    IRISCORE_API FFieldPathNetSerializerSerializationHelper();
};

