#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetBinaryStateRegistration -FallbackName=WidgetBinaryStateRegistration
#include "WidgetLockedStateRegistration.generated.h"

UCLASS(Blueprintable, NonTransient)
class COMMONUI_API UWidgetLockedStateRegistration : public UWidgetBinaryStateRegistration {
    GENERATED_BODY()
public:
    UWidgetLockedStateRegistration();

};

