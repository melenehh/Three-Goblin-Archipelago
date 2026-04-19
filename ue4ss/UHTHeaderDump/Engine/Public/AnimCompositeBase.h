#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "AnimSequenceBase.h"
#include "AnimCompositeBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UAnimCompositeBase : public UAnimSequenceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate CommonTargetFrameRate;
    
public:
    UAnimCompositeBase();

};

