#include "WorldPartitionBlueprintLibrary.h"

UWorldPartitionBlueprintLibrary::UWorldPartitionBlueprintLibrary() {
}

void UWorldPartitionBlueprintLibrary::UnpinActors(const TArray<FGuid>& InActorsToUnpin) {
}

void UWorldPartitionBlueprintLibrary::UnloadActors(const TArray<FGuid>& InActorsToUnload) {
}

void UWorldPartitionBlueprintLibrary::PinActors(const TArray<FGuid>& InActorsToPin) {
}

void UWorldPartitionBlueprintLibrary::LoadActors(const TArray<FGuid>& InActorsToLoad) {
}

FBox UWorldPartitionBlueprintLibrary::GetRuntimeWorldBounds() {
    return FBox{};
}

bool UWorldPartitionBlueprintLibrary::GetIntersectingActorDescs(const FBox& InBox, TArray<FActorDesc>& OutActorDescs) {
    return false;
}

FBox UWorldPartitionBlueprintLibrary::GetEditorWorldBounds() {
    return FBox{};
}

UDataLayerManager* UWorldPartitionBlueprintLibrary::GetDataLayerManager(UObject* WorldContextObject) {
    return NULL;
}

bool UWorldPartitionBlueprintLibrary::GetActorDescs(TArray<FActorDesc>& OutActorDescs) {
    return false;
}


