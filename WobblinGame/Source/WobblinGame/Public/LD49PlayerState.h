// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"

#include "ELockType.h"
#include "ProfessionType.h"
#include "LD49PlayerState.generated.h"


UCLASS()
class WOBBLINGAME_API ALD49PlayerState : public APlayerState
{
	GENERATED_BODY()
	
	public: 

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TMap<ELockType, bool> _keys;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<EProfessionType> _disguises;

	UFUNCTION(BlueprintCallable)
	void GiveKey(ELockType Type) {};

    UFUNCTION(BlueprintCallable)
    void ResetKeys() {};

    UFUNCTION(BlueprintCallable)
    void ResetDisguise() {};

    UFUNCTION(BlueprintCallable)
    bool HasKey(ELockType Type) { return false; };

    UFUNCTION(BlueprintCallable)
    TArray<EProfessionType> GetDisguises() { return {}; };

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDisguiseLevel(EProfessionType Type) const { return 0; };

    UFUNCTION(BlueprintCallable)
    void AddDisguise(EProfessionType Type) {};
};
