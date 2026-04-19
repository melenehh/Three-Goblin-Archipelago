#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeWriterBase -FallbackName=InterchangeWriterBase
#include "InterchangeTextureWriter.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEEXPORT_API UInterchangeTextureWriter : public UInterchangeWriterBase {
    GENERATED_BODY()
public:
    UInterchangeTextureWriter();

};

