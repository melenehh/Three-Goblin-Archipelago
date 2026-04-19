#pragma once
#include "CoreMinimal.h"
#include "ImageSequenceProtocol.h"
#include "CompressedImageSequenceProtocol.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Config=Engine)
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompressionQuality;
    
    UCompressedImageSequenceProtocol();

};

