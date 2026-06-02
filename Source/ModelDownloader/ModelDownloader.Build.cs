using UnrealBuildTool;

public class ModelDownloader : ModuleRules
{
	public ModelDownloader(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"HTTP",
			"GLTFCore",
			"MeshDescription",
			"StaticMeshDescription"
		});
	}
}
