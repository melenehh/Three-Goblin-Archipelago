#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=LocalizableMessage -ObjectName=LocalizableMessage -FallbackName=LocalizableMessage
#include "LocalizableMessageLibrary.generated.h"

class UObject;

UCLASS(Blueprintable, MinimalAPI)
class ULocalizableMessageLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULocalizableMessageLibrary();

    UFUNCTION(BlueprintCallable)
    static void Reset_LocalizableMessage(UPARAM(Ref) FLocalizableMessage& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEmpty_LocalizableMessage(const FLocalizableMessage& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText Conv_LocalizableMessageToText(UObject* WorldContextObject, const FLocalizableMessage& Message);
    
};

