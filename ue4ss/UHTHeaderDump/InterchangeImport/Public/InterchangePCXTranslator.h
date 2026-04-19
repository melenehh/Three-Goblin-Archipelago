#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeTranslatorBase -FallbackName=InterchangeTranslatorBase
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangePCXTranslator.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEIMPORT_API UInterchangePCXTranslator : public UInterchangeTranslatorBase, public IInterchangeTexturePayloadInterface {
    GENERATED_BODY()
public:
    UInterchangePCXTranslator();


    // Fix for true pure virtual functions not being implemented
};

