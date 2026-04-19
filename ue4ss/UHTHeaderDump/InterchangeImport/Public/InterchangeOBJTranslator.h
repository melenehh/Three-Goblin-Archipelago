#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeTranslatorBase -FallbackName=InterchangeTranslatorBase
#include "InterchangeMeshPayloadInterface.h"
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangeOBJTranslator.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEIMPORT_API UInterchangeOBJTranslator : public UInterchangeTranslatorBase, public IInterchangeMeshPayloadInterface, public IInterchangeTexturePayloadInterface {
    GENERATED_BODY()
public:
    UInterchangeOBJTranslator();


    // Fix for true pure virtual functions not being implemented
};

