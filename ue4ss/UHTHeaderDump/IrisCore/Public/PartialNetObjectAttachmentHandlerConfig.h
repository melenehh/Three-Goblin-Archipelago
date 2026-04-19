#pragma once
#include "CoreMinimal.h"
#include "SequentialPartialNetBlobHandlerConfig.h"
#include "PartialNetObjectAttachmentHandlerConfig.generated.h"

UCLASS(Blueprintable, Config=Engine)
class UPartialNetObjectAttachmentHandlerConfig : public USequentialPartialNetBlobHandlerConfig {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BitCountSplitThreshold;
    
public:
    UPartialNetObjectAttachmentHandlerConfig();

};

