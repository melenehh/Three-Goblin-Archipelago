#pragma once
#include "CoreMinimal.h"
#include "FrameGrabberProtocol.h"
#include "VideoCaptureProtocol.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=Engine)
class UVideoCaptureProtocol : public UFrameGrabberProtocol {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCompression;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompressionQuality;
    
    UVideoCaptureProtocol();

};

