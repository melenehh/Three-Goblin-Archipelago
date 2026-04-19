#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FieldNotification -ObjectName=FieldNotificationId -FallbackName=FieldNotificationId
#include "BlueprintFunctionLibrary.h"
#include "FieldNotificationLibrary.generated.h"

class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UFieldNotificationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFieldNotificationLibrary();

    UFUNCTION(BlueprintCallable)
    static bool SetPropertyValueAndBroadcastFields(bool NewValueByRef, const int32& OldValue, const int32& NewValue, UObject* Object, UObject* NetOwner, bool bHasLocalRepNotify, bool bShouldFlushDormancyOnSet, bool bIsNetProperty, TArray<FFieldNotificationId> ExtraFieldIds);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPropertyValueAndBroadcast(bool NewValueByRef, const int32& OldValue, const int32& NewValue, UObject* Object, UObject* NetOwner, bool bHasLocalRepNotify, bool bShouldFlushDormancyOnSet, bool bIsNetProperty);
    
    UFUNCTION(BlueprintCallable)
    static void BroadcastFieldValueChanged(UObject* Object, FFieldNotificationId FieldId);
    
    UFUNCTION(BlueprintCallable)
    static void BroadcastFieldsValueChanged(UObject* Object, TArray<FFieldNotificationId> FieldIds);
    
};

