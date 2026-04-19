#pragma once
#include "CoreMinimal.h"
#include "ECustomAttributeTypeEnum.generated.h"

UENUM(BlueprintType)
enum class ECustomAttributeTypeEnum : uint8 {
    Dataflow_CustomAttributeType_UInt8,
    Dataflow_CustomAttributeType_Int32,
    Dataflow_CustomAttributeType_Float,
    Dataflow_CustomAttributeType_Double,
    Dataflow_CustomAttributeType_Bool,
    Dataflow_CustomAttributeType_String,
    Dataflow_CustomAttributeType_Vector2f,
    Dataflow_CustomAttributeType_Vector3f,
    Dataflow_CustomAttributeType_Vector3d,
    Dataflow_CustomAttributeType_Vector4f,
    Dataflow_CustomAttributeType_LinearColor,
    Dataflow_CustomAttributeType_Transform,
    Dataflow_CustomAttributeType_Quat4f,
    Dataflow_CustomAttributeType_Box,
    Dataflow_CustomAttributeType_Guid,
    Dataflow_CustomAttributeType_Int32Set,
    Dataflow_CustomAttributeType_Int32Array,
    Dataflow_CustomAttributeType_IntVector,
    Dataflow_CustomAttributeType_IntVector2,
    Dataflow_CustomAttributeType_IntVector4,
    Dataflow_CustomAttributeType_IntVector2Array,
    Dataflow_CustomAttributeType_FloatArray,
    Dataflow_CustomAttributeType_Vector2fArray,
    Dataflow_CustomAttributeType_FVector3fArray,
};

