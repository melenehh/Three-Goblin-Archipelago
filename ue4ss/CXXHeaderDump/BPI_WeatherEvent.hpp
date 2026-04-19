#ifndef UE4SS_SDK_BPI_WeatherEvent_HPP
#define UE4SS_SDK_BPI_WeatherEvent_HPP

class IBPI_WeatherEvent_C : public IInterface
{

    void WeatherEvent(TEnumAsByte<Enum_Weaher::Type> Weather);
}; // Size: 0x28

#endif
