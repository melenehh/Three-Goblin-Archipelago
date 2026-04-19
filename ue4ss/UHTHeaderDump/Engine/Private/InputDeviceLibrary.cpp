#include "InputDeviceLibrary.h"

UInputDeviceLibrary::UInputDeviceLibrary() {
}

FPlatformUserId UInputDeviceLibrary::PlatformUserId_None() {
    return FPlatformUserId{};
}

bool UInputDeviceLibrary::NotEqual_PlatformUserId(FPlatformUserId A, FPlatformUserId B) {
    return false;
}

bool UInputDeviceLibrary::NotEqual_InputDeviceId(FInputDeviceId A, FInputDeviceId B) {
    return false;
}

bool UInputDeviceLibrary::IsValidPlatformId(FPlatformUserId UserId) {
    return false;
}

bool UInputDeviceLibrary::IsValidInputDevice(FInputDeviceId DeviceID) {
    return false;
}

bool UInputDeviceLibrary::IsUnpairedUserId(const FPlatformUserId PlatformId) {
    return false;
}

bool UInputDeviceLibrary::IsInputDeviceMappedToUnpairedUser(const FInputDeviceId InputDevice) {
    return false;
}

bool UInputDeviceLibrary::IsDevicePropertyHandleValid(const FInputDevicePropertyHandle& InHandle) {
    return false;
}

FInputDeviceId UInputDeviceLibrary::InputDeviceId_None() {
    return FInputDeviceId{};
}

FPlatformUserId UInputDeviceLibrary::GetUserForUnpairedInputDevices() {
    return FPlatformUserId{};
}

FPlatformUserId UInputDeviceLibrary::GetUserForInputDevice(FInputDeviceId DeviceID) {
    return FPlatformUserId{};
}

FPlatformUserId UInputDeviceLibrary::GetPrimaryPlatformUser() {
    return FPlatformUserId{};
}

FInputDeviceId UInputDeviceLibrary::GetPrimaryInputDeviceForUser(FPlatformUserId UserId) {
    return FInputDeviceId{};
}

APlayerController* UInputDeviceLibrary::GetPlayerControllerFromPlatformUser(const FPlatformUserId UserId) {
    return NULL;
}

APlayerController* UInputDeviceLibrary::GetPlayerControllerFromInputDevice(const FInputDeviceId DeviceID) {
    return NULL;
}

EInputDeviceConnectionState UInputDeviceLibrary::GetInputDeviceConnectionState(const FInputDeviceId DeviceID) {
    return EInputDeviceConnectionState::Invalid;
}

FInputDeviceId UInputDeviceLibrary::GetDefaultInputDevice() {
    return FInputDeviceId{};
}

int32 UInputDeviceLibrary::GetAllInputDevicesForUser(const FPlatformUserId UserId, TArray<FInputDeviceId>& OutInputDevices) {
    return 0;
}

int32 UInputDeviceLibrary::GetAllInputDevices(TArray<FInputDeviceId>& OutInputDevices) {
    return 0;
}

int32 UInputDeviceLibrary::GetAllConnectedInputDevices(TArray<FInputDeviceId>& OutInputDevices) {
    return 0;
}

int32 UInputDeviceLibrary::GetAllActiveUsers(TArray<FPlatformUserId>& OutUsers) {
    return 0;
}

bool UInputDeviceLibrary::EqualEqual_PlatformUserId(FPlatformUserId A, FPlatformUserId B) {
    return false;
}

bool UInputDeviceLibrary::EqualEqual_InputDeviceId(FInputDeviceId A, FInputDeviceId B) {
    return false;
}


