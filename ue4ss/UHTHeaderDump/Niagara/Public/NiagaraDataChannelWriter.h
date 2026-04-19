#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "NiagaraDataChannelSearchParameters.h"
#include "NiagaraSpawnInfo.h"
#include "NiagaraDataChannelWriter.generated.h"

class UNiagaraDataChannelHandler;

UCLASS(Blueprintable, MinimalAPI)
class UNiagaraDataChannelWriter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraDataChannelHandler* Owner;
    
    UNiagaraDataChannelWriter();

    UFUNCTION(BlueprintCallable)
    void WriteVector4(FName VarName, int32 Index, FVector4 InData);
    
    UFUNCTION(BlueprintCallable)
    void WriteVector2D(FName VarName, int32 Index, FVector2D InData);
    
    UFUNCTION(BlueprintCallable)
    void WriteVector(FName VarName, int32 Index, FVector InData);
    
    UFUNCTION(BlueprintCallable)
    void WriteSpawnInfo(FName VarName, int32 Index, FNiagaraSpawnInfo InData);
    
    UFUNCTION(BlueprintCallable)
    void WriteQuat(FName VarName, int32 Index, FQuat InData);
    
    UFUNCTION(BlueprintCallable)
    void WritePosition(FName VarName, int32 Index, FVector InData);
    
    UFUNCTION(BlueprintCallable)
    void WriteLinearColor(FName VarName, int32 Index, FLinearColor InData);
    
    UFUNCTION(BlueprintCallable)
    void WriteInt(FName VarName, int32 Index, int32 InData);
    
    UFUNCTION(BlueprintCallable)
    void WriteFloat(FName VarName, int32 Index, double InData);
    
    UFUNCTION(BlueprintCallable)
    void WriteBool(FName VarName, int32 Index, bool InData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Num() const;
    
    UFUNCTION(BlueprintCallable)
    bool InitWrite(FNiagaraDataChannelSearchParameters SearchParams, int32 Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU);
    
};

