#pragma once
#include "CoreMinimal.h"
#include "IGLEPropertyData.generated.h"

USTRUCT(BlueprintType)
struct INGAMELEVELEDITOR_API FIGLEPropertyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> PropertyBuffer;
    
    FIGLEPropertyData();
};

