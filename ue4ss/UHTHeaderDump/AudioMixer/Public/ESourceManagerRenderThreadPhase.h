#pragma once
#include "CoreMinimal.h"
#include "ESourceManagerRenderThreadPhase.generated.h"

UENUM(BlueprintType)
enum ESourceManagerRenderThreadPhase {
    Begin,
    PumpMpscCmds,
    PumpCmds,
    ProcessModulators,
    UpdatePendingReleaseData,
    GenerateSrcAudio_WithBusses,
    ComputeBusses,
    GenerateSrcAudio_WithoutBusses,
    UpdateBusses,
    SpatialInterface_OnAllSourcesProcessed,
    SourceDataOverride_OnAllSourcesProcessed,
    UpdateGameThreadCopies,
    Finished,
};

