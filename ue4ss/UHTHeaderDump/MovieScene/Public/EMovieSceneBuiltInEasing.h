#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneBuiltInEasing.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneBuiltInEasing : uint8 {
    Linear,
    SinIn,
    SinOut,
    SinInOut,
    QuadIn,
    QuadOut,
    QuadInOut,
    Cubic,
    CubicIn,
    CubicOut,
    CubicInOut,
    HermiteCubicInOut,
    QuartIn,
    QuartOut,
    QuartInOut,
    QuintIn,
    QuintOut,
    QuintInOut,
    ExpoIn,
    ExpoOut,
    ExpoInOut,
    CircIn,
    CircOut,
    CircInOut,
    Custom,
};

