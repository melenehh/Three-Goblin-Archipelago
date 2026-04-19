#ifndef UE4SS_SDK_IGLE_Pawn_EditorBase_HPP
#define UE4SS_SDK_IGLE_Pawn_EditorBase_HPP

class AIGLE_Pawn_EditorBase_C : public APawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class USceneCaptureComponent2D* ViewCapture;                                      // 0x0328 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0330 (size: 0x8)
    class UCameraComponent* ProxyCamera;                                              // 0x0338 (size: 0x8)
    double MaxMovementSpeed;                                                          // 0x0340 (size: 0x8)
    double MovementAcceleration;                                                      // 0x0348 (size: 0x8)
    double MovementDrag;                                                              // 0x0350 (size: 0x8)
    FVector MovementVelocity;                                                         // 0x0358 (size: 0x18)
    double LinearMovementMultiplier;                                                  // 0x0370 (size: 0x8)
    double LookSensitivity;                                                           // 0x0378 (size: 0x8)
    bool ShowGrid;                                                                    // 0x0380 (size: 0x1)
    class AIGLE_A_FollowingGrid_C* GridActor;                                         // 0x0388 (size: 0x8)
    double GridSize;                                                                  // 0x0390 (size: 0x8)
    bool FocusedForMovement;                                                          // 0x0398 (size: 0x1)
    FVector2D PreFocusedCursorPos;                                                    // 0x03A0 (size: 0x10)
    class AActor* CurrentlyDraggingPlacableActor;                                     // 0x03B0 (size: 0x8)
    TEnumAsByte<ETraceTypeQuery> PlacingPlacablesTraceChannel;                        // 0x03B8 (size: 0x1)
    double PlacingPlacablesMaxDistance;                                               // 0x03C0 (size: 0x8)
    TSubclassOf<class AActor> CurrentlyPlacingPlacableActorClass;                     // 0x03C8 (size: 0x8)
    TSet<AActor*> SelectedPlacableActors;                                             // 0x03D0 (size: 0x50)
    FIGLE_Pawn_EditorBase_COnActorSelected OnActorSelected;                           // 0x0420 (size: 0x10)
    void OnActorSelected(class AActor* Actor, bool CreateUndoAction);
    bool HighlightSelectedActors;                                                     // 0x0430 (size: 0x1)
    int32 SelectedActorsHighlightStencil;                                             // 0x0434 (size: 0x4)
    FIGLE_Pawn_EditorBase_COnActorDeselected OnActorDeselected;                       // 0x0438 (size: 0x10)
    void OnActorDeselected(class AActor* Actor, bool CreateUndoAction);
    class UMaterialInterface* SelectionHighlightPostProcessMat;                       // 0x0448 (size: 0x8)
    class AIGLE_A_Gizmo_C* GizmoActor;                                                // 0x0450 (size: 0x8)
    class UTextureRenderTarget2D* BaseViewRT;                                         // 0x0458 (size: 0x8)
    FVector2D LastViewportSize;                                                       // 0x0460 (size: 0x10)
    class UTextureRenderTarget2D* SecondaryViewRT;                                    // 0x0470 (size: 0x8)
    FWeightedBlendables DefaultViewportPostProcessMaterials;                          // 0x0478 (size: 0x10)
    int32 GizmoStencilValue;                                                          // 0x0488 (size: 0x4)
    double FOV;                                                                       // 0x0490 (size: 0x8)
    FBox2D CurrentViewport;                                                           // 0x0498 (size: 0x28)
    FMatrix LastProjectionMatrix;                                                     // 0x04C0 (size: 0x80)
    bool PreBasePassGizmoHidden?;                                                     // 0x0540 (size: 0x1)
    FVector2D BoxSelectStartingMousePos;                                              // 0x0548 (size: 0x10)
    bool IsBoxSelecting;                                                              // 0x0558 (size: 0x1)
    FVector2D BoxSelectEndingMousePos;                                                // 0x0560 (size: 0x10)
    class UIGLE_W_BoxSelect_C* BoxSelectionWidget;                                    // 0x0570 (size: 0x8)
    FIGLE_Pawn_EditorBase_COnViewportResize OnViewportResize;                         // 0x0578 (size: 0x10)
    void OnViewportResize();
    TEnumAsByte<ETraceTypeQuery> SelectionActorChannel;                               // 0x0588 (size: 0x1)
    bool UseActorOriginForBoxSelection;                                               // 0x0589 (size: 0x1)
    double BoxSelectMaxDistance;                                                      // 0x0590 (size: 0x8)
    TArray<class UIGLE_ActionBuffer_Base_C*> UndoBuffer;                              // 0x0598 (size: 0x10)
    int32 MaxActionBufferSize;                                                        // 0x05A8 (size: 0x4)
    TArray<class UIGLE_ActionBuffer_Base_C*> RedoBuffer;                              // 0x05B0 (size: 0x10)
    TSet<AActor*> LastFrameSelectedPlacables;                                         // 0x05C0 (size: 0x50)
    double RenderScale;                                                               // 0x0610 (size: 0x8)

    void RefreshGizmoPosition();
    void DuplicateCurrentSelection(TMap<class AActor*, class FIGLEPlacableSave>& Spawned);
    void ClampPointToBox(FBox2D Box, FVector2D Point (+X +Y), FVector2D& OutPoint);
    void GetWidgetGeometryViewportBounds(FGeometry WidgetGeometry, FBox2D& ViewportBounds);
    bool Is Transforming in World Space();
    void DeleteCurrentSelection();
    void ApplyGizmoWorldSpaceFrameDeltaTransform(FTransform InTransform, FTransform& OutTransform);
    void ClearPlacableActorSelection(bool CreateUndoAction);
    void IGLEView Pos to World Loc Dir(FVector2D IGLE View Pos (+X +Y), FVector& World Location, FVector& World Direction);
    void BoxSelect_FrustumTrace();
    void BoxSelect_ActorOrigin();
    void GetIGLECursorWorldLocDir(FVector& WorldLocation, FVector& WorldDirection);
    void IGLEViewPointToGlobalViewPoint(FVector2D IGLE View Point (+X +Y), FBox2D Viewport, FVector2D& GlobalViewPoint (+X +Y));
    void GlobalViewPointToIGLEViewPoint(FVector2D Global View Point (+X +Y), const FBox2D& Viewport, FVector2D& IGLE View Point (+X +Y));
    void IsCursorInViewport(bool& Value);
    bool IsScreenPointInViewport(FVector2D Point (+X -Y), const FBox2D ViewportOverride);
    void WorldPosToIGLEViewPoint(FVector WorldPos, FVector2D& IGLE View Point (+X -Y));
    void OnSelectionChanged(bool CreateUndoAction);
    void IGLEViewPointToWorldLocDir(FVector2D IGLE Point (+X +Y), FVector& WorldLocation, FVector& WorldDirection);
    void SetIGLECursorPosition(double IGLE View Point X (+X), double IGLE View Point Y (+Y));
    void GetIGLECursorPosition(double& LocationX (+X), double& LocationY (-Y));
    void MyPlayerController(class APlayerController*& AsPlayer Controller);
    void UserConstructionScript();
    void AddActionToUndoBuffer(class UIGLE_ActionBuffer_Base_C* New Action);
    void UndoLastAction();
    void RedoLastAction();
    void SelectPlacableActor(class AActor* Actor, bool CreateUndoAction);
    void BeginPlay_BindPlacableActorSelectionStuff();
    void Event_OnActorSelected(class AActor* Actor, bool CreateUndoAction);
    void DeselectPlacableActor(class AActor* Actor, bool CreateUndoAction);
    void Event_OnActorDeselected(class AActor* Actor, bool CreateUndoAction);
    void BeginBoxSelect();
    void Tick_BoxSelection();
    void EndBoxSelect();
    void Tick_SelectingPlacables();
    void Tick_PlacingPlacables();
    void StartPlacingPlacable(TSubclassOf<class AActor> PlacableClass);
    void StopPlacingPlacable();
    void MoveForward(double Scale);
    void MoveRight(double Scale);
    void Tick_DoMovement();
    void MoveUp(double Scale);
    void LookUp(double Scale);
    void LookRight(double Scale);
    void SetFocusedForMovement(bool FocusedForMovement);
    void ReceiveTick(float DeltaSeconds);
    void Tick_UpdateGrid();
    void ReceiveBeginPlay();
    void BeginPlay_SpawnGizmo();
    void Tick_GizmoStuff();
    void Tick_RenderFrame();
    void SetNewViewportSize(FVector2D Size);
    void ReceiveDestroyed();
    void ExecuteUbergraph_IGLE_Pawn_EditorBase(int32 EntryPoint);
    void OnViewportResize__DelegateSignature();
    void OnActorDeselected__DelegateSignature(class AActor* Actor, bool CreateUndoAction);
    void OnActorSelected__DelegateSignature(class AActor* Actor, bool CreateUndoAction);
}; // Size: 0x618

#endif
