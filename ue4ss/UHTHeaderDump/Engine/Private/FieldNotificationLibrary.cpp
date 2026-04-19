#include "FieldNotificationLibrary.h"

UFieldNotificationLibrary::UFieldNotificationLibrary() {
}

bool UFieldNotificationLibrary::SetPropertyValueAndBroadcastFields(bool NewValueByRef, const int32& OldValue, const int32& NewValue, UObject* Object, UObject* NetOwner, bool bHasLocalRepNotify, bool bShouldFlushDormancyOnSet, bool bIsNetProperty, TArray<FFieldNotificationId> ExtraFieldIds) {
    return false;
}

bool UFieldNotificationLibrary::SetPropertyValueAndBroadcast(bool NewValueByRef, const int32& OldValue, const int32& NewValue, UObject* Object, UObject* NetOwner, bool bHasLocalRepNotify, bool bShouldFlushDormancyOnSet, bool bIsNetProperty) {
    return false;
}

void UFieldNotificationLibrary::BroadcastFieldValueChanged(UObject* Object, FFieldNotificationId FieldId) {
}

void UFieldNotificationLibrary::BroadcastFieldsValueChanged(UObject* Object, TArray<FFieldNotificationId> FieldIds) {
}


