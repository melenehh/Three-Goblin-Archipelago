#pragma once
#include "CoreMinimal.h"
#include "EStatisticsOperationEnum.generated.h"

UENUM(BlueprintType)
enum class EStatisticsOperationEnum : uint8 {
    Dataflow_EStatisticsOperationEnum_Min,
    Dataflow_EStatisticsOperationEnum_Max UMETA(Hidden),
    Dataflow_EStatisticsOperationEnum_Mean,
    Dataflow_EStatisticsOperationEnum_Median,
    Dataflow_EStatisticsOperationEnum_Mode,
    Dataflow_EStatisticsOperationEnum_Sum,
};

