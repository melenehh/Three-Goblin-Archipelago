#pragma once
#include "CoreMinimal.h"
#include "InterchangeLodSceneNodeContainer.generated.h"

class UInterchangeSceneNode;

USTRUCT(BlueprintType)
struct FInterchangeLodSceneNodeContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInterchangeSceneNode*> SceneNodes;
    
    INTERCHANGEPIPELINES_API FInterchangeLodSceneNodeContainer();
};

