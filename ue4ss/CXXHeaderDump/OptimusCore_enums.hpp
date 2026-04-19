enum class EOptimusBufferWriteType {
    Write = 0,
    WriteAtomicAdd = 1,
    WriteAtomicMin = 2,
    WriteAtomicMax = 3,
    Count = 4,
    EOptimusBufferWriteType_MAX = 5,
};

enum class EOptimusDataDomainType {
    Dimensional = 0,
    Expression = 1,
    EOptimusDataDomainType_MAX = 2,
};

enum class EOptimusDataTypeFlags {
    None = 0,
    IsStructType = 1,
    ShowElements = 2,
    EOptimusDataTypeFlags_MAX = 3,
};

enum class EOptimusDataTypeUsageFlags {
    None = 0,
    Resource = 1,
    Variable = 2,
    AnimAttributes = 4,
    EOptimusDataTypeUsageFlags_MAX = 5,
};

enum class EOptimusDeformerStatus {
    Compiled = 0,
    CompiledWithWarnings = 1,
    Modified = 2,
    HasErrors = 3,
    EOptimusDeformerStatus_MAX = 4,
};

enum class EOptimusDiagnosticLevel {
    None = 0,
    Info = 1,
    Warning = 2,
    Error = 3,
    EOptimusDiagnosticLevel_MAX = 4,
};

enum class EOptimusNodeGraphType {
    Setup = 0,
    Update = 1,
    ExternalTrigger = 2,
    Function = 3,
    SubGraph = 4,
    Transient = 5,
    EOptimusNodeGraphType_MAX = 6,
};

enum class EOptimusNodePinDirection {
    Unknown = 0,
    Input = 1,
    Output = 2,
    EOptimusNodePinDirection_MAX = 3,
};

enum class EOptimusNodePinStorageType {
    Value = 0,
    Resource = 1,
    EOptimusNodePinStorageType_MAX = 2,
};

enum class EOptimusSkinnedMeshExecDomain {
    None = 0,
    Vertex = 1,
    Triangle = 2,
    EOptimusSkinnedMeshExecDomain_MAX = 3,
};

enum class EOptimusTerminalType {
    Unknown = 0,
    Entry = 1,
    Return = 2,
    EOptimusTerminalType_MAX = 3,
};

