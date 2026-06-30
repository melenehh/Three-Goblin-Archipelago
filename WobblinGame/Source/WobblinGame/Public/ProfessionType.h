// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProfessionType.generated.h"


UENUM(BlueprintType)
enum class EProfessionType : uint8 {
    None = 0,
    Peasant = 1,
    Mage = 2,
    Barbarian = 3,
    Guard = 4,
    Monarch = 5,
    Count = 6,
    EProfessionType_MAX = 7,
};