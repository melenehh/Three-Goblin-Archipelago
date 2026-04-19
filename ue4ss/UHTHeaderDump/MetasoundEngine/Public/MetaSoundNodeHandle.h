#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MetaSoundNodeHandle.generated.h"

USTRUCT(BlueprintType)
struct METASOUNDENGINE_API FMetaSoundNodeHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid NodeId;
    
    FMetaSoundNodeHandle();
};

