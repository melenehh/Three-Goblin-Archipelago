#include "CollisionProfile.h"

UCollisionProfile::UCollisionProfile() {
    this->Profiles.AddDefaulted(22);
    this->EditProfiles.AddDefaulted(2);
    this->ProfileRedirects.AddDefaulted(5);
    this->CollisionChannelRedirects.AddDefaulted(4);
}


