#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnPlacablesRegisteredDelegate.h"
#include "IGLE_AsyncRegisterPlacables.generated.h"

class UIGLE_AsyncRegisterPlacables;
class UObject;

UCLASS(Blueprintable)
class INGAMELEVELEDITOR_API UIGLE_AsyncRegisterPlacables : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlacablesRegistered OnPlacablesRegistered;
    
    UIGLE_AsyncRegisterPlacables();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIGLE_AsyncRegisterPlacables* AsyncRegisterPlacables(const UObject* WorldContextObject, const TArray<FString>& ContentPaths, bool DeferDestruction);
    
};

