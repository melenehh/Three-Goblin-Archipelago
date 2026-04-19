using UnrealBuildTool;

public class RigVM : ModuleRules {
    public RigVM(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimationCore",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
        });
    }
}
