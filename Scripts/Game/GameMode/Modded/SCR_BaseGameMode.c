modded class SCR_BaseGameMode
{
	override void OnPlayerSpawned(int playerId, IEntity player)
	{
		super.OnPlayerSpawned(playerId, player);
		DisableStaminaForPlayer(player);
	}

	protected void DisableStaminaForPlayer(IEntity player)
	{
		if (!player)
			return;

		SCR_CharacterStaminaComponent stamina = SCR_CharacterStaminaComponent.Cast(
			player.FindComponent(SCR_CharacterStaminaComponent)
		);

		if (!stamina)
			return;

		stamina.SetStaminaEnabled(false);
	}
}
