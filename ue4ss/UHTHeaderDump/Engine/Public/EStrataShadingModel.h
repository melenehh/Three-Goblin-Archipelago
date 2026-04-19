#pragma once
#include "CoreMinimal.h"
#include "EStrataShadingModel.generated.h"

UENUM(BlueprintType)
enum EStrataShadingModel {
    SSM_Unlit,
    SSM_DefaultLit,
    SSM_SubsurfaceLit,
    SSM_VolumetricFogCloud,
    SSM_Hair,
    SSM_Eye,
    SSM_Cloth,
    SSM_ClearCoat,
    SSM_SingleLayerWater,
    SSM_LightFunction,
    SSM_PostProcess,
    SSM_Decal,
    SSM_UI,
    SSM_NUM,
};

