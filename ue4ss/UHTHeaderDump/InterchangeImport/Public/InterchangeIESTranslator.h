#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeTranslatorBase -FallbackName=InterchangeTranslatorBase
#include "InterchangeTextureLightProfilePayloadInterface.h"
#include "InterchangeIESTranslator.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEIMPORT_API UInterchangeIESTranslator : public UInterchangeTranslatorBase, public IInterchangeTextureLightProfilePayloadInterface {
    GENERATED_BODY()
public:
    UInterchangeIESTranslator();


    // Fix for true pure virtual functions not being implemented
};

