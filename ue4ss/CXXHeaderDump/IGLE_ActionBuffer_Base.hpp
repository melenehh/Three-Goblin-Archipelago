#ifndef UE4SS_SDK_IGLE_ActionBuffer_Base_HPP
#define UE4SS_SDK_IGLE_ActionBuffer_Base_HPP

class UIGLE_ActionBuffer_Base_C : public UIGLE_ActionBufferObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0030 (size: 0x8)

    void UndoAction();
    void ExecuteUbergraph_IGLE_ActionBuffer_Base(int32 EntryPoint);
}; // Size: 0x38

#endif
