#include "TypedElementCommonActions.h"

UTypedElementCommonActions::UTypedElementCommonActions() {
}

TArray<FScriptTypedElementHandle> UTypedElementCommonActions::PasteNormalizedElementsFromString(const FScriptTypedElementListProxy& ElementList, UWorld* World, const FTypedElementPasteOptions& PasteOption, const FString& InputString) {
    return TArray<FScriptTypedElementHandle>();
}

TArray<FScriptTypedElementHandle> UTypedElementCommonActions::PasteElementsFromString(UTypedElementSelectionSet* SelectionSet, UWorld* World, const FTypedElementPasteOptions& PasteOption, const FString& InputString) {
    return TArray<FScriptTypedElementHandle>();
}

TArray<FScriptTypedElementHandle> UTypedElementCommonActions::K2_PasteNormalizedElements(const FScriptTypedElementListProxy& ElementList, UWorld* World, const FTypedElementPasteOptions& PasteOption) {
    return TArray<FScriptTypedElementHandle>();
}

TArray<FScriptTypedElementHandle> UTypedElementCommonActions::K2_PasteElements(UTypedElementSelectionSet* SelectionSet, UWorld* World, const FTypedElementPasteOptions& PasteOption) {
    return TArray<FScriptTypedElementHandle>();
}

TArray<FScriptTypedElementHandle> UTypedElementCommonActions::K2_DuplicateSelectedElements(const UTypedElementSelectionSet* SelectionSet, UWorld* World, const FVector& LocationOffset) {
    return TArray<FScriptTypedElementHandle>();
}

TArray<FScriptTypedElementHandle> UTypedElementCommonActions::DuplicateNormalizedElements(const FScriptTypedElementListProxy ElementList, UWorld* World, const FVector& LocationOffset) {
    return TArray<FScriptTypedElementHandle>();
}

bool UTypedElementCommonActions::DeleteSelectedElements(UTypedElementSelectionSet* SelectionSet, UWorld* World, const FTypedElementDeletionOptions& DeletionOptions) {
    return false;
}

bool UTypedElementCommonActions::DeleteNormalizedElements(const FScriptTypedElementListProxy ElementList, UWorld* World, UTypedElementSelectionSet* InSelectionSet, const FTypedElementDeletionOptions& DeletionOptions) {
    return false;
}

bool UTypedElementCommonActions::CopySelectedElementsToString(UTypedElementSelectionSet* SelectionSet, FString& OutputString) {
    return false;
}

bool UTypedElementCommonActions::CopySelectedElements(UTypedElementSelectionSet* SelectionSet) {
    return false;
}

bool UTypedElementCommonActions::CopyNormalizedElementsToString(const FScriptTypedElementListProxy& ElementList, FString& OutputString) {
    return false;
}

bool UTypedElementCommonActions::CopyNormalizedElements(const FScriptTypedElementListProxy& ElementList) {
    return false;
}


