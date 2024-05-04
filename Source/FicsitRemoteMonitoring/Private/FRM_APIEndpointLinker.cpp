#pragma once

#include "FRM_APIEndpointLinker.h"

TArray<TSharedPtr<FJsonValue>> UAPI_Endpoints::API_Endpoint_String(UObject* WorldContext, FString APICall)
{
	TArray<TSharedPtr<FJsonValue>> Json;


	return Json;
}

TArray<TSharedPtr<FJsonValue>> UAPI_Endpoints::API_Endpoint(UObject* WorldContext, const EAPIEndpoints APICall)
{
	TArray<TSharedPtr<FJsonValue>> Json;

	switch (APICall)
	{
		case EAPIEndpoints::getAssembler: return UFRM_Factory::getFactory(WorldContext, LoadObject<UClass>(nullptr, TEXT("/Game/FactoryGame/Buildable/Factory/AssemblerMk1/Build_AssemblerMk1.Build_AssemblerMk1")));
		case EAPIEndpoints::getBelts: return Json;
		case EAPIEndpoints::getBiomassGenerator: return UFRM_Power::getGenerators(WorldContext, LoadObject<UClass>(nullptr, TEXT("/Game/FactoryGame/Buildable/Factory/GeneratorBiomass/Build_GeneratorBiomass.Build_GeneratorBiomass")));
		case EAPIEndpoints::getBlender: return UFRM_Factory::getFactory(WorldContext, LoadObject<UClass>(nullptr, TEXT("/Game/FactoryGame/Buildable/Factory/Blender/Build_Blender.Build_Blender")));
		case EAPIEndpoints::getCoalGenerator: return UFRM_Power::getGenerators(WorldContext, LoadObject<UClass>(nullptr, TEXT("/Game/FactoryGame/Buildable/Factory/GeneratorCoal/Build_GeneratorCoal.Build_GeneratorCoal")));
		case EAPIEndpoints::getConstructor: return UFRM_Factory::getFactory(WorldContext, LoadObject<UClass>(nullptr, TEXT("/Game/FactoryGame/Buildable/Factory/ConstructorMk1/Build_ConstructorMk1.Build_ConstructorMk1")));
		case EAPIEndpoints::getDoggo: return Json;
		case EAPIEndpoints::getDrone: return UFRM_Drones::getDrone(WorldContext);
		case EAPIEndpoints::getDroneStation: return UFRM_Drones::getDroneStation(WorldContext);
		case EAPIEndpoints::getDropPod: return UFRM_Factory::getDropPod(WorldContext);
		case EAPIEndpoints::getExplorationSink: return UFRM_Production::getResourceSink(WorldContext, EResourceSinkTrack::RST_Exploration);
		case EAPIEndpoints::getExplorer: return UFRM_Vehicles::getVehicles(WorldContext, LoadObject<UClass>(nullptr, TEXT("/Game/FactoryGame/Buildable/Vehicle/Explorer/BP_Explorer.BP_Explorer")));
		case EAPIEndpoints::getExtractor: return UFRM_Factory::getResourceExtractor(WorldContext);
		case EAPIEndpoints::getFactoryCart: return UFRM_Vehicles::getVehicles(WorldContext, LoadObject<UClass>(nullptr, TEXT("/Game/FactoryGame/Buildable/Vehicle/Golfcart/BP_Golfcart.BP_Golfcart")));
		case EAPIEndpoints::getFoundry: return UFRM_Factory::getFactory(WorldContext, LoadObject<UClass>(nullptr, TEXT("/Game/FactoryGame/Buildable/Factory/FoundryMk1/Build_FoundryMk1.Build_FoundryMk1")));
		case EAPIEndpoints::getFuelGenerator: return UFRM_Power::getGenerators(WorldContext, LoadObject<UClass>(nullptr, TEXT("/Game/FactoryGame/Buildable/Factory/GeneratorFuel/Build_GeneratorFuel.Build_GeneratorFuel")));
		case EAPIEndpoints::getGeothermalGenerator: return UFRM_Power::getGenerators(WorldContext, LoadObject<UClass>(nullptr, TEXT("/Game/FactoryGame/Buildable/Factory/GeneratorGeoThermal/Build_GeneratorGeoThermal.Build_GeneratorGeoThermal")));
		case EAPIEndpoints::getHUBTerminal: return UFRM_Factory::getHubTerminal(WorldContext);
		case EAPIEndpoints::getManufacturer: return UFRM_Factory::getFactory(WorldContext, LoadObject<UClass>(nullptr, TEXT("/Game/FactoryGame/Buildable/Factory/ManufacturerMk1/Build_ManufacturerMk1.Build_ManufacturerMk1")));
		case EAPIEndpoints::getModList: return UFRM_Factory::getModList();
		case EAPIEndpoints::getNuclearGenerator: return UFRM_Power::getGenerators(WorldContext, LoadObject<UClass>(nullptr, TEXT("/Game/FactoryGame/Buildable/Factory/GeneratorNuclear/Build_GeneratorNuclear.Build_GeneratorNuclear")));
		case EAPIEndpoints::getParticle: return UFRM_Factory::getFactory(WorldContext, AFGBuildableManufacturerVariablePower::StaticClass());
		case EAPIEndpoints::getPaths: return Json;
		case EAPIEndpoints::getPipes: return Json;
		case EAPIEndpoints::getPlayer: return UFRM_Player::getPlayer(WorldContext);
		case EAPIEndpoints::getPower: return UFRM_Power::getCircuit(WorldContext);
		case EAPIEndpoints::getPowerSlug: return UFRM_Factory::getPowerSlug(WorldContext);
		case EAPIEndpoints::getProdStats: return UFRM_Production::getProdStats(WorldContext);
		case EAPIEndpoints::getRadarTower: return UFRM_Factory::getRadarTower(WorldContext);
		case EAPIEndpoints::getRecipes: return Json;
		case EAPIEndpoints::getRefinery: return UFRM_Factory::getFactory(WorldContext, LoadObject<UClass>(nullptr, TEXT("/Game/FactoryGame/Buildable/Factory/OilRefinery/Build_OilRefinery.Build_OilRefinery")));
		case EAPIEndpoints::getResourceGeyser: return UFRM_Factory::getResourceNode(WorldContext, AFGResourceNodeFrackingCore::StaticClass());
		case EAPIEndpoints::getResourceNode: return UFRM_Factory::getResourceNode(WorldContext, AFGResourceNodeFrackingSatellite::StaticClass());
		case EAPIEndpoints::getResourceSink: return UFRM_Production::getResourceSink(WorldContext, EResourceSinkTrack::RST_Default);
		case EAPIEndpoints::getResourceWell: return UFRM_Factory::getResourceNode(WorldContext, AFGResourceNode::StaticClass());
		case EAPIEndpoints::getSchematics: return Json;
		case EAPIEndpoints::getSinkList: return UFRM_Production::getSinkList(WorldContext);
		case EAPIEndpoints::getSmelter: return UFRM_Factory::getFactory(WorldContext, LoadObject<UClass>(nullptr, TEXT("/Game/FactoryGame/Buildable/Factory/SmelterMk1/Build_SmelterMk1.Build_SmelterMk1")));
		case EAPIEndpoints::getSpaceElevator: return Json;
		case EAPIEndpoints::getStorageInv: return UFRM_Factory::getStorageInv(WorldContext);
		case EAPIEndpoints::getSwitches: return Json;
		case EAPIEndpoints::getTractor: return UFRM_Vehicles::getVehicles(WorldContext, LoadObject<UClass>(nullptr, TEXT("/Game/FactoryGame/Buildable/Vehicle/Tractor/BP_Tractor.BP_Tractor")));
		case EAPIEndpoints::getTrains: return UFRM_Trains::getTrains(WorldContext);
		case EAPIEndpoints::getTrainStation: return UFRM_Trains::getTrainStation(WorldContext);
		case EAPIEndpoints::getTruck: return UFRM_Vehicles::getVehicles(WorldContext, LoadObject<UClass>(nullptr, TEXT("/Game/FactoryGame/Buildable/Vehicle/Truck/BP_Truck.BP_Truck")));
		case EAPIEndpoints::getTruckStation: return UFRM_Vehicles::getTruckStation(WorldContext);
		case EAPIEndpoints::getWorldInv: return UFRM_Factory::getWorldInv(WorldContext);

			// Read API Group Endpoints
		case EAPIEndpoints::getAll: return Json;
		case EAPIEndpoints::getFactory: return UFRM_Factory::getFactory(WorldContext, AFGBuildableManufacturer::StaticClass());
		case EAPIEndpoints::getGenerators: return UFRM_Power::getGenerators(WorldContext, AFGBuildableGenerator::StaticClass());
		case EAPIEndpoints::getVehicles: return UFRM_Vehicles::getVehicles(WorldContext, AFGWheeledVehicle::StaticClass());
	}


	return Json;
}
