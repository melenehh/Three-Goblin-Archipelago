#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "StaticMeshBudgetInfo.h"
#include "MeshBudgetProjectSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=Engine)
class UMeshBudgetProjectSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStaticMeshBudget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticMeshBudgetInfo> StaticMeshBudgetInfos;
    
    UMeshBudgetProjectSettings();

};

