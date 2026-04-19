#pragma once
#include "CoreMinimal.h"
#include "ResponseChannel.h"
#include "CustomProfile.generated.h"

USTRUCT(BlueprintType)
struct FCustomProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResponseChannel> CustomResponses;
    
    ENGINE_API FCustomProfile();
};

