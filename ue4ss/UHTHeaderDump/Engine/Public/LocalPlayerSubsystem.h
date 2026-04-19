#pragma once
#include "CoreMinimal.h"
#include "Subsystem.h"
#include "LocalPlayerSubsystem.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Within=LocalPlayer)
class ULocalPlayerSubsystem : public USubsystem {
    GENERATED_BODY()
public:
    ULocalPlayerSubsystem();

};

