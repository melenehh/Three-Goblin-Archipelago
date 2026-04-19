#ifndef UE4SS_SDK_IGLE_W_EditorHUD_HPP
#define UE4SS_SDK_IGLE_W_EditorHUD_HPP

class UIGLE_W_EditorHUD_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UScrollBox* CategoriesScrollBox;                                            // 0x02C8 (size: 0x8)
    class UIGLE_W_ActionLog_C* IGLE_W_ActionLog;                                      // 0x02D0 (size: 0x8)
    class UIGLE_W_PlacableCategoryEntry_C* IGLE_W_PlacableCategoryEntry_All;          // 0x02D8 (size: 0x8)
    class UIGLE_W_PropertiesPannel_C* IGLE_W_PropertiesPannel;                        // 0x02E0 (size: 0x8)
    class UIGLE_W_SceneOutliner_C* IGLE_W_SceneOutliner;                              // 0x02E8 (size: 0x8)
    class UIGLE_W_Viewport_C* IGLE_W_Viewport;                                        // 0x02F0 (size: 0x8)
    class UIGLE_W_ViewportSettings_C* IGLE_W_ViewportSettings;                        // 0x02F8 (size: 0x8)
    class UIGLE_W_ResizerHandle_C* OutlinerPropertiesResizer;                         // 0x0300 (size: 0x8)
    class USizeBox* OutlinerPropertiesSizeBox;                                        // 0x0308 (size: 0x8)
    class UBorder* PlacablesBorder;                                                   // 0x0310 (size: 0x8)
    class UIGLE_W_ResizerHandle_C* PlacablesResizer;                                  // 0x0318 (size: 0x8)
    class USizeBox* PlacablesSizeBox;                                                 // 0x0320 (size: 0x8)
    class UUniformGridPanel* PlacablesUniformGrid;                                    // 0x0328 (size: 0x8)
    class USizeBox* ProperiesPannelSizeBox;                                           // 0x0330 (size: 0x8)
    class UIGLE_W_ResizerHandle_C* PropertiesPannelResizer;                           // 0x0338 (size: 0x8)
    TMap<class TSubclassOf<AActor>, class UTexture*> GeneratedPlacableIcons;          // 0x0340 (size: 0x50)
    FString SelectedPlacableCategory;                                                 // 0x0390 (size: 0x10)
    double HorizontalPlacableWidgetSize;                                              // 0x03A0 (size: 0x8)

    void PopulateCategories();
    void PopulatePlacablesGrid(FString CategoryFilter);
    void OnMouseResized_OutlinerPropertiesResizer(FVector2D DeltaVector);
    void OnMouseResized_PlacablesResizer(FVector2D DeltaVector);
    void Construct();
    void OnMouseResized_PropertiesPannelResizer(FVector2D DeltaVector);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SwitchPlacableCategories(FString CategoryName);
    void ExecuteUbergraph_IGLE_W_EditorHUD(int32 EntryPoint);
}; // Size: 0x3A8

#endif
