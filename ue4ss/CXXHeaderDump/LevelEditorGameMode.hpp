#ifndef UE4SS_SDK_LevelEditorGameMode_HPP
#define UE4SS_SDK_LevelEditorGameMode_HPP

class ALevelEditorGameMode_C : public AIGLE_GM_ExampleEditor_C
{

    void Get Time of Day(int32& CurrentHour, int32& Current Minute);
    void Set Time of Day(int32 Hour, int32 Minute);
    void ValidateLevel(bool& Valid, FText& Output);
}; // Size: 0x340

#endif
