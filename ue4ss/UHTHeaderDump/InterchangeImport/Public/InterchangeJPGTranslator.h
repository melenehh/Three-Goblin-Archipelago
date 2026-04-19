#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeTranslatorBase -FallbackName=InterchangeTranslatorBase
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangeJPGTranslator.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEIMPORT_API UInterchangeJPGTranslator : public UInterchangeTranslatorBase, public IInterchangeTexturePayloadInterface {
    GENERATED_BODY()
public:
    UInterchangeJPGTranslator();


    // Fix for true pure virtual functions not being implemented
};

