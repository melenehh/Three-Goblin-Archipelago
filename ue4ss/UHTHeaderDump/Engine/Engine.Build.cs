using UnrealBuildTool;

public class Engine : ModuleRules {
    public Engine(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AudioExtensions",
            "AudioLinkCore",
            "AudioMixer",
            "AudioPlatformConfiguration",
            "Chaos",
            "ChaosCloth",
            "ClothingSystemRuntimeInterface",
            "Core",
            "CoreOnline",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "FieldNotification",
            "InputCore",
            "IrisCore",
            "Landscape",
            "MeshDescription",
            "NetCore",
            "PacketHandler",
            "PhysicsCore",
            "Slate",
            "SlateCore",
            "StaticMeshDescription",
            "TypedElementFramework",
            "TypedElementRuntime",
            "UMG",
        });
    }
}
