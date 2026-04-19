#pragma once
#include "CoreMinimal.h"
#include "SequentialPartialNetBlobHandler.h"
#include "PartialNetObjectAttachmentHandler.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPartialNetObjectAttachmentHandler : public USequentialPartialNetBlobHandler {
    GENERATED_BODY()
public:
    UPartialNetObjectAttachmentHandler();

};

