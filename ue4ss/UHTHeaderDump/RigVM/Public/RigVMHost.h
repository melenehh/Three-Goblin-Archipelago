#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AssetUserData -FallbackName=Interface_AssetUserData
#include "RigVMDrawContainer.h"
#include "RigVMExtendedExecuteContext.h"
#include "RigVMRuntimeSettings.h"
#include "Templates/SubclassOf.h"
#include "RigVMHost.generated.h"

class UAssetUserData;
class URigVM;
class URigVMHost;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class RIGVM_API URigVMHost : public UObject, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMRuntimeSettings VMRuntimeSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URigVM* VM;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMExtendedExecuteContext ExtendedExecuteContext;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMDrawContainer DrawContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> EventQueue;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> AssetUserData;
    
public:
    URigVMHost();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsEvent(const FName& InEventName) const;
    
    UFUNCTION(BlueprintCallable)
    bool SetVariableFromString(const FName& InVariableName, const FString& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFramesPerSecond(float InFramesPerSecond);
    
    UFUNCTION(BlueprintCallable)
    void SetDeltaTime(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero);
    
    UFUNCTION(BlueprintCallable)
    void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void RequestRunOnceEvent(const FName& InEventName, int32 InEventIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestInit();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveRunOnceEvent(const FName& InEventName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URigVM* GetVM();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetVariableType(const FName& InVariableName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetVariableAsString(const FName& InVariableName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetSupportedEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetScriptAccessibleVariables() const;
    
    UFUNCTION(BlueprintCallable)
    FRigVMExtendedExecuteContext GetExtendedExecuteContext();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeltaTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentFramesPerSecond() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAbsoluteTime() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<URigVMHost*> FindRigVMHosts(UObject* Outer, TSubclassOf<URigVMHost> OptionalClass);
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteEvent(const FName& InEventName);
    
    UFUNCTION(BlueprintCallable)
    bool Execute(const FName& InEventName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanExecute() const;
    

    // Fix for true pure virtual functions not being implemented
};

