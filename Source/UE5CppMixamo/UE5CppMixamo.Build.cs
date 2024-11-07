// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5CppMixamo : ModuleRules
{
	public UE5CppMixamo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
