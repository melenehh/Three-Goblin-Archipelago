#include "InterchangeUserDefinedAttributesAPI.h"

UInterchangeUserDefinedAttributesAPI::UInterchangeUserDefinedAttributesAPI() {
}

bool UInterchangeUserDefinedAttributesAPI::RemoveUserDefinedAttribute(UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName) {
    return false;
}

void UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttributeInfos(const UInterchangeBaseNode* InterchangeNode, TArray<FInterchangeUserDefinedAttributeInfo>& UserDefinedAttributeInfos) {
}

bool UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Int32(const UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, int32& OutValue, FString& OutPayloadKey) {
    return false;
}

bool UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_FString(const UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, FString& OutValue, FString& OutPayloadKey) {
    return false;
}

bool UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Float(const UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, float& OutValue, FString& OutPayloadKey) {
    return false;
}

bool UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Double(const UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, double& OutValue, FString& OutPayloadKey) {
    return false;
}

bool UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Boolean(const UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, bool& OutValue, FString& OutPayloadKey) {
    return false;
}

void UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute(const UInterchangeBaseNode* InterchangeSourceNode, UInterchangeBaseNode* InterchangeDestinationNode, bool bAddSourceNodeName) {
}

bool UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Int32(UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, const int32& Value, const FString& PayloadKey) {
    return false;
}

bool UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_FString(UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, const FString& Value, const FString& PayloadKey) {
    return false;
}

bool UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Float(UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, const float& Value, const FString& PayloadKey) {
    return false;
}

bool UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Double(UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, const double& Value, const FString& PayloadKey) {
    return false;
}

bool UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Boolean(UInterchangeBaseNode* InterchangeNode, const FString& UserDefinedAttributeName, const bool& Value, const FString& PayloadKey) {
    return false;
}


