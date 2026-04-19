#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeTranslatorBase -FallbackName=InterchangeTranslatorBase
#include "InterchangeSlicedTexturePayloadInterface.h"
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangeDDSTranslator.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEIMPORT_API UInterchangeDDSTranslator : public UInterchangeTranslatorBase, public IInterchangeTexturePayloadInterface, public IInterchangeSlicedTexturePayloadInterface {
    GENERATED_BODY()
public:
    UInterchangeDDSTranslator();


    // Fix for true pure virtual functions not being implemented
};

