#include "LocalizableMessageLibrary.h"

ULocalizableMessageLibrary::ULocalizableMessageLibrary() {
}

void ULocalizableMessageLibrary::Reset_LocalizableMessage(FLocalizableMessage& Message) {
}

bool ULocalizableMessageLibrary::IsEmpty_LocalizableMessage(const FLocalizableMessage& Message) {
    return false;
}

FText ULocalizableMessageLibrary::Conv_LocalizableMessageToText(UObject* WorldContextObject, const FLocalizableMessage& Message) {
    return FText::GetEmpty();
}


