#pragma once
#include "CoreMinimal.h"
#include "ElementID.h"
#include "BoneID.generated.h"

USTRUCT(BlueprintType)
struct FBoneID : public FElementID {
    GENERATED_BODY()
public:
    MESHDESCRIPTION_API FBoneID();
};

