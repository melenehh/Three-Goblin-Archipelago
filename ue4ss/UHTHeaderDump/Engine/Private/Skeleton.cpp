#include "Skeleton.h"

USkeleton::USkeleton() {
}

UBlendProfile* USkeleton::GetBlendProfile(const FName& InProfileName) {
    return NULL;
}

void USkeleton::AddCompatibleSkeletonSoft(const TSoftObjectPtr<USkeleton>& SourceSkeleton) {
}

void USkeleton::AddCompatibleSkeleton(const USkeleton* SourceSkeleton) {
}


