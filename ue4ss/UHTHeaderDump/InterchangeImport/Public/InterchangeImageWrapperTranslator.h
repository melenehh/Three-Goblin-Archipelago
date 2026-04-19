#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeTranslatorBase -FallbackName=InterchangeTranslatorBase
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangeImageWrapperTranslator.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEIMPORT_API UInterchangeImageWrapperTranslator : public UInterchangeTranslatorBase, public IInterchangeTexturePayloadInterface {
    GENERATED_BODY()
public:
    UInterchangeImageWrapperTranslator();


    // Fix for true pure virtual functions not being implemented
};

