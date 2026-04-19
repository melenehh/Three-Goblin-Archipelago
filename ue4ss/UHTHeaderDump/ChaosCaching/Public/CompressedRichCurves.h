#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CompressedRichCurve -FallbackName=CompressedRichCurve
#include "CompressedRichCurves.generated.h"

USTRUCT(BlueprintType)
struct FCompressedRichCurves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompressedRichCurve> CompressedRichCurves;
    
    CHAOSCACHING_API FCompressedRichCurves();
};

