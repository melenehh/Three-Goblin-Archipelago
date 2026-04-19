#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IGLE_ActionBufferObject.generated.h"

UCLASS(Blueprintable)
class INGAMELEVELEDITOR_API UIGLE_ActionBufferObject : public UObject {
    GENERATED_BODY()
public:
    UIGLE_ActionBufferObject();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UndoAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RedoAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetFriendlyActionName(FString& OutName);
    
};

