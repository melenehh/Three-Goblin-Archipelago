// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ETPType.generated.h"


UENUM(BlueprintType)
enum class ETPType : uint8 {
    NONE = 0,
    BRONZE = 1,
    SILVER = 2,
    GOLD = 3,
    MAGIC = 4,
};
