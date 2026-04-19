#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ESetParamResult.h"
#include "MetasoundParameterPack.generated.h"

class UMetasoundParameterPack;

UCLASS(Blueprintable)
class METASOUNDFRONTEND_API UMetasoundParameterPack : public UObject {
    GENERATED_BODY()
public:
    UMetasoundParameterPack();

    UFUNCTION(BlueprintCallable)
    ESetParamResult SetTrigger(FName ParameterName, bool OnlyIfExists);
    
    UFUNCTION(BlueprintCallable)
    ESetParamResult SetString(FName ParameterName, const FString& InValue, bool OnlyIfExists);
    
    UFUNCTION(BlueprintCallable)
    ESetParamResult SetInt(FName ParameterName, int32 InValue, bool OnlyIfExists);
    
    UFUNCTION(BlueprintCallable)
    ESetParamResult SetFloat(FName ParameterName, float InValue, bool OnlyIfExists);
    
    UFUNCTION(BlueprintCallable)
    ESetParamResult SetBool(FName ParameterName, bool InValue, bool OnlyIfExists);
    
    UFUNCTION(BlueprintCallable)
    static UMetasoundParameterPack* MakeMetasoundParameterPack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTrigger(FName ParameterName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasString(FName ParameterName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInt(FName ParameterName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFloat(FName ParameterName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBool(FName ParameterName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTrigger(FName ParameterName, ESetParamResult& Result) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetString(FName ParameterName, ESetParamResult& Result) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInt(FName ParameterName, ESetParamResult& Result) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloat(FName ParameterName, ESetParamResult& Result) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBool(FName ParameterName, ESetParamResult& Result) const;
    
};

