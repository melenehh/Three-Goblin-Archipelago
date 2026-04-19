#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MetaSoundOutput.h"
#include "MetasoundOutputBlueprintAccess.generated.h"

UCLASS(Blueprintable)
class UMetasoundOutputBlueprintAccess : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMetasoundOutputBlueprintAccess();

private:
    UFUNCTION(BlueprintCallable)
    static bool IsTime(const FMetaSoundOutput& Output);
    
    UFUNCTION(BlueprintCallable)
    static bool IsString(const FMetaSoundOutput& Output);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInt32(const FMetaSoundOutput& Output);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFloat(const FMetaSoundOutput& Output);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBool(const FMetaSoundOutput& Output);
    
    UFUNCTION(BlueprintCallable)
    static float GetTimeSeconds(const FMetaSoundOutput& Output, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static FString GetString(const FMetaSoundOutput& Output, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetInt32(const FMetaSoundOutput& Output, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static float GetFloat(const FMetaSoundOutput& Output, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBool(const FMetaSoundOutput& Output, bool& Success);
    
};

