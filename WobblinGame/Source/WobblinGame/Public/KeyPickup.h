// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELockType.h"
#include "KeyPickup.generated.h"

UCLASS(Blueprintable)
class WOBBLINGAME_API AKeyPickup : public AActor
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BP_KeyPickup")
    ELockType _keyType;

    UFUNCTION(BlueprintPure, Category = "BP_KeyPickup")
    ELockType GetKeyType() { return ELockType::NONE; }
};