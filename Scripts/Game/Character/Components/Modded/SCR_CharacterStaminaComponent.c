modded class SCR_CharacterStaminaComponent
{
	override void OnPostInit(IEntity owner)
	{
		super.OnPostInit(owner);
		SetStaminaEnabled(false);
	}
}
