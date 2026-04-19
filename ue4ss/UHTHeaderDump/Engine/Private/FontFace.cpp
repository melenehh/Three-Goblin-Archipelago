#include "FontFace.h"

UFontFace::UFontFace() {
    this->Hinting = EFontHinting::Default;
    this->LoadingPolicy = EFontLoadingPolicy::LazyLoad;
    this->LayoutMethod = EFontLayoutMethod::Metrics;
    this->AscendOverriddenValue = 0;
    this->bIsAscendOverridden = false;
    this->DescendOverriddenValue = 0;
    this->bIsDescendOverridden = false;
}


