#pragma once
#include "CoreMinimal.h"
#include "ESpecularProfileFormat.h"
#include "RuntimeCurveLinearColor.h"
#include "SpecularProfileStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSpecularProfileStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecularProfileFormat Format;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor ViewColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    ENGINE_API FSpecularProfileStruct();
};

