#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AsyncLoadingScreenLibrary.generated.h"

UCLASS(Blueprintable)
class ASYNCLOADINGSCREEN_API UAsyncLoadingScreenLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAsyncLoadingScreenLibrary();

    UFUNCTION(BlueprintCallable)
    static void StopLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableLoadingScreen(bool bIsEnableLoadingScreen);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisplayTipTextIndex(int32 TipTextIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisplayMovieIndex(int32 MovieIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisplayBackgroundIndex(int32 BackgroundIndex);
    
    UFUNCTION(BlueprintCallable)
    static void RemovePreloadedBackgroundImages();
    
    UFUNCTION(BlueprintCallable)
    static void PreloadBackgroundImages();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsEnableLoadingScreen();
    
};

