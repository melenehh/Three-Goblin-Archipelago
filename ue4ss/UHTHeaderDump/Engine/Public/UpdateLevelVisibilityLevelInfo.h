#pragma once
#include "CoreMinimal.h"
#include "NetLevelVisibilityTransactionId.h"
#include "UpdateLevelVisibilityLevelInfo.generated.h"

USTRUCT(BlueprintType)
struct FUpdateLevelVisibilityLevelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetLevelVisibilityTransactionId VisibilityRequestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsVisible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTryMakeVisible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    uint8 bSkipCloseOnError: 1;
    
    ENGINE_API FUpdateLevelVisibilityLevelInfo();
};

