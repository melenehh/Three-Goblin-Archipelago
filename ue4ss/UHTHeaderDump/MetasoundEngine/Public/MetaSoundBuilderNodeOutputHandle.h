#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MetasoundFrontend -ObjectName=MetasoundFrontendVertexHandle -FallbackName=MetasoundFrontendVertexHandle
#include "MetaSoundBuilderNodeOutputHandle.generated.h"

USTRUCT(BlueprintType)
struct METASOUNDENGINE_API FMetaSoundBuilderNodeOutputHandle : public FMetasoundFrontendVertexHandle {
    GENERATED_BODY()
public:
    FMetaSoundBuilderNodeOutputHandle();
};

