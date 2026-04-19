#include "BlendSpaceLibrary.h"

UBlendSpaceLibrary::UBlendSpaceLibrary() {
}

void UBlendSpaceLibrary::SnapToPosition(const FBlendSpaceReference& BlendSpace, FVector NewPosition) {
}

FVector UBlendSpaceLibrary::GetPosition(const FBlendSpaceReference& BlendSpace) {
    return FVector{};
}

FVector UBlendSpaceLibrary::GetFilteredPosition(const FBlendSpaceReference& BlendSpace) {
    return FVector{};
}

void UBlendSpaceLibrary::ConvertToBlendSpacePure(const FAnimNodeReference& Node, FBlendSpaceReference& BlendSpace, bool& Result) {
}

FBlendSpaceReference UBlendSpaceLibrary::ConvertToBlendSpace(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result) {
    return FBlendSpaceReference{};
}


