#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAudioCaptureProtocolBase.h"
#include "MasterAudioSubmixCaptureProtocol.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=Engine)
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
public:
    UMasterAudioSubmixCaptureProtocol();

};

