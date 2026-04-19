#pragma once
#include "CoreMinimal.h"
#include "IGLEPlacableSave.h"
#include "IGLELevelSave.generated.h"

USTRUCT(BlueprintType)
struct INGAMELEVELEDITOR_API FIGLELevelSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGLEPlacableSave> SavedPlacables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> CustomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString levelName;
    
    FIGLELevelSave();
};

