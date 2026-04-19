#include "BuiltInDynamicBindingResolverLibrary.h"

UBuiltInDynamicBindingResolverLibrary::UBuiltInDynamicBindingResolverLibrary() {
}

FMovieSceneDynamicBindingResolveResult UBuiltInDynamicBindingResolverLibrary::ResolveToPlayerPawn(UObject* WorldContextObject, int32 PlayerControllerIndex) {
    return FMovieSceneDynamicBindingResolveResult{};
}


