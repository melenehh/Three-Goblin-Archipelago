#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "IGLEPlacableActorInfo.h"
#include "OnPlacableUpdatedDelegate.h"
#include "IGLE_RuntimeSubsystem.generated.h"

class AActor;
class UDataTable;

UCLASS(Blueprintable)
class INGAMELEVELEDITOR_API UIGLE_RuntimeSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FIGLEPlacableActorInfo> PlacableActorInfoSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInLevelEditorMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlacableUpdated OnPlacablePlacedInEditor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlacableUpdated OnPlacableDeletedInEditor;
    
    UIGLE_RuntimeSubsystem();

    UFUNCTION(BlueprintCallable)
    void RegisterPlacableActorInfoFromDataTable(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPlacableActorInfoFromClasses(const TArray<FString>& ContentPaths, TArray<AActor*>& TransientActors, bool DeferDestruction);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPlacableActorInfo(const FIGLEPlacableActorInfo& Info);
    
};

