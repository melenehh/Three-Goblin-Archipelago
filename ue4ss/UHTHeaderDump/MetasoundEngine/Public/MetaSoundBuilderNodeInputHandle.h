#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MetasoundFrontend -ObjectName=MetasoundFrontendVertexHandle -FallbackName=MetasoundFrontendVertexHandle
#include "MetaSoundBuilderNodeInputHandle.generated.h"

USTRUCT(BlueprintType)
struct METASOUNDENGINE_API FMetaSoundBuilderNodeInputHandle : public FMetasoundFrontendVertexHandle {
    GENERATED_BODY()
public:
    FMetaSoundBuilderNodeInputHandle();
};

