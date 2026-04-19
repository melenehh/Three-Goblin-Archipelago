#include "GameViewportSubsystem.h"

UGameViewportSubsystem::UGameViewportSubsystem() {
}

FGameViewportWidgetSlot UGameViewportSubsystem::SetWidgetSlotPosition(FGameViewportWidgetSlot Slot, const UWidget* Widget, FVector2D position, bool bRemoveDPIScale) {
    return FGameViewportWidgetSlot{};
}

FGameViewportWidgetSlot UGameViewportSubsystem::SetWidgetSlotDesiredSize(FGameViewportWidgetSlot Slot, FVector2D Size) {
    return FGameViewportWidgetSlot{};
}

void UGameViewportSubsystem::SetWidgetSlot(UWidget* Widget, FGameViewportWidgetSlot Slot) {
}

void UGameViewportSubsystem::RemoveWidget(UWidget* Widget) {
}

bool UGameViewportSubsystem::IsWidgetAdded(const UWidget* Widget) const {
    return false;
}

FGameViewportWidgetSlot UGameViewportSubsystem::GetWidgetSlot(const UWidget* Widget) const {
    return FGameViewportWidgetSlot{};
}

bool UGameViewportSubsystem::AddWidgetForPlayer(UWidget* Widget, ULocalPlayer* Player, FGameViewportWidgetSlot Slot) {
    return false;
}

bool UGameViewportSubsystem::AddWidget(UWidget* Widget, FGameViewportWidgetSlot Slot) {
    return false;
}


