#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "IrisFastArraySerializer.generated.h"

USTRUCT(BlueprintType)
struct FIrisFastArraySerializer : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    uint32 ChangeMaskStorage[4];
    
public:
    IRISCORE_API FIrisFastArraySerializer();
};

