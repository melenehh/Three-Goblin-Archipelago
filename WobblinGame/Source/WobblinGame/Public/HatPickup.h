// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProfessionType.h"
#include "HatPickup.generated.h"

UCLASS(Blueprintable)
class WOBBLINGAME_API AHatPickup : public AActor
{
	GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    EProfessionType _hatType;


    UFUNCTION(BlueprintCallable, BlueprintPure)
    EProfessionType GetHatType() { return EProfessionType::None; };


};
