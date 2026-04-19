using UnrealBuildTool;

public class OptimusCore : ModuleRules {
    public OptimusCore(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ComputeFramework",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
