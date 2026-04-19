#pragma once
#include "CoreMinimal.h"
#include "EnvQueryItemType_VectorBase.h"
#include "EnvQueryItemType_Point.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase {
    GENERATED_BODY()
public:
    UEnvQueryItemType_Point();

};

