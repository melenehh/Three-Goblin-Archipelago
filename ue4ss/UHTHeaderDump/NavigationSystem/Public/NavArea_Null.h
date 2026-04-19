#pragma once
#include "CoreMinimal.h"
#include "NavArea.h"
#include "NavArea_Null.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNavArea_Null : public UNavArea {
    GENERATED_BODY()
public:
    UNavArea_Null();

};

