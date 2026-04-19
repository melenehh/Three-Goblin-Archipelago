#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SequentialPartialNetBlobHandlerConfig.generated.h"

UCLASS(Blueprintable, Config=Engine)
class USequentialPartialNetBlobHandlerConfig : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxPartBitCount;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxPartCount;
    
public:
    USequentialPartialNetBlobHandlerConfig();

};

