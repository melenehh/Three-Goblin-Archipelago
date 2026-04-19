#include "RigVMHost.h"
#include "Templates/SubclassOf.h"

URigVMHost::URigVMHost() {
    this->VM = NULL;
}

bool URigVMHost::SupportsEvent(const FName& InEventName) const {
    return false;
}

bool URigVMHost::SetVariableFromString(const FName& InVariableName, const FString& InValue) {
    return false;
}

void URigVMHost::SetFramesPerSecond(float InFramesPerSecond) {
}

void URigVMHost::SetDeltaTime(float InDeltaTime) {
}

void URigVMHost::SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero) {
}

void URigVMHost::SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime) {
}

void URigVMHost::RequestRunOnceEvent(const FName& InEventName, int32 InEventIndex) {
}

void URigVMHost::RequestInit() {
}

bool URigVMHost::RemoveRunOnceEvent(const FName& InEventName) {
    return false;
}

URigVM* URigVMHost::GetVM() {
    return NULL;
}

FName URigVMHost::GetVariableType(const FName& InVariableName) const {
    return NAME_None;
}

FString URigVMHost::GetVariableAsString(const FName& InVariableName) const {
    return TEXT("");
}

TArray<FName> URigVMHost::GetSupportedEvents() const {
    return TArray<FName>();
}

TArray<FName> URigVMHost::GetScriptAccessibleVariables() const {
    return TArray<FName>();
}

FRigVMExtendedExecuteContext URigVMHost::GetExtendedExecuteContext() {
    return FRigVMExtendedExecuteContext{};
}

float URigVMHost::GetDeltaTime() const {
    return 0.0f;
}

float URigVMHost::GetCurrentFramesPerSecond() const {
    return 0.0f;
}

float URigVMHost::GetAbsoluteTime() const {
    return 0.0f;
}

TArray<URigVMHost*> URigVMHost::FindRigVMHosts(UObject* Outer, TSubclassOf<URigVMHost> OptionalClass) {
    return TArray<URigVMHost*>();
}

bool URigVMHost::ExecuteEvent(const FName& InEventName) {
    return false;
}

bool URigVMHost::Execute(const FName& InEventName) {
    return false;
}

bool URigVMHost::CanExecute() const {
    return false;
}


