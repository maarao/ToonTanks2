// Copyright maarao 2023

using UnrealBuildTool;
using System.Collections.Generic;

public class ToonTanks2EditorTarget : TargetRules
{
	public ToonTanks2EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_2;

		ExtraModuleNames.AddRange( new string[] { "ToonTanks2" } );
	}
}
