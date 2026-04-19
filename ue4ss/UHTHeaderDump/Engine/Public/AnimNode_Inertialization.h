#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "InertializationRequest.h"
#include "PoseLink.h"
#include "AnimNode_Inertialization.generated.h"

class UBlendProfile;
class UObject;

USTRUCT(BlueprintType)
struct FAnimNode_Inertialization : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink Source;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendProfile* DefaultBlendProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FilteredCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreallocateMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInertializationRequest> RequestQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* InertializationRequestAnimInstance;
    
public:
    ENGINE_API FAnimNode_Inertialization();
};

