#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "MediaTimeStampInfo.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMediaTimeStampInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan Time;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SequenceIndex;
    
    UMediaTimeStampInfo();

};

