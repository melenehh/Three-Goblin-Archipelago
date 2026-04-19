#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGLEActorReference.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct INGAMELEVELEDITOR_API FIGLEActorReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorRef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ActorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    FIGLEActorReference();
};

