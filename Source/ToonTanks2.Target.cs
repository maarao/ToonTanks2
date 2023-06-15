// Copyright maarao 2023

using UnrealBuildTool;
using System.Collections.Generic;

public class ToonTanks2Target : TargetRules
{
	public ToonTanks2Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "ToonTanks2" } );
	}
}
