#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeTranslatorBase -FallbackName=InterchangeTranslatorBase
#include "InterchangeAnimationPayloadInterface.h"
#include "InterchangeMeshPayloadInterface.h"
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangeFbxTranslator.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEIMPORT_API UInterchangeFbxTranslator : public UInterchangeTranslatorBase, public IInterchangeTexturePayloadInterface, public IInterchangeMeshPayloadInterface, public IInterchangeAnimationPayloadInterface {
    GENERATED_BODY()
public:
    UInterchangeFbxTranslator();


    // Fix for true pure virtual functions not being implemented
};

