#pragma once

class KFNEsp
{
public:
	void RenderESP();

private:
	void ActorsLoop();
	void EspPolice(SDK::AActor* currActor);
	void EspCameras(SDK::AActor* currActor);
	void EspPlayers(SDK::AActor* currActor);

	// Base
	float GetPlayerHeight(ImVec2 head, ImVec2 feet);
	void RenderNameplate(SDK::FVector2D pos, std::string name);
	void RenderBox(SDK::FVector2D headPos, SDK::FVector2D footPos);
};
