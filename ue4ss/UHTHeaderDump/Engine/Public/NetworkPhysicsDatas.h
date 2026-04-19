#pragma once
#include "CoreMinimal.h"
#include "NetworkPhysicsDatas.generated.h"

USTRUCT(BlueprintType)
struct FNetworkPhysicsDatas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ServerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputFrame;
    
    ENGINE_API FNetworkPhysicsDatas();
};

