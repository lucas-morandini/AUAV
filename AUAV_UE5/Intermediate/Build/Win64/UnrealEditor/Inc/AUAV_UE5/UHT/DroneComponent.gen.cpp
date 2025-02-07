// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AUAV_UE5/Public/DroneComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDroneComponent() {}

// Begin Cross Module References
AUAV_UE5_API UClass* Z_Construct_UClass_UDroneComponent();
AUAV_UE5_API UClass* Z_Construct_UClass_UDroneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AUAV_UE5();
// End Cross Module References

// Begin Class UDroneComponent
void UDroneComponent::StaticRegisterNativesUDroneComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDroneComponent);
UClass* Z_Construct_UClass_UDroneComponent_NoRegister()
{
	return UDroneComponent::StaticClass();
}
struct Z_Construct_UClass_UDroneComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DroneComponent.h" },
		{ "ModuleRelativePath", "Public/DroneComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDroneComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDroneComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AUAV_UE5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDroneComponent_Statics::ClassParams = {
	&UDroneComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDroneComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDroneComponent()
{
	if (!Z_Registration_Info_UClass_UDroneComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDroneComponent.OuterSingleton, Z_Construct_UClass_UDroneComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDroneComponent.OuterSingleton;
}
template<> AUAV_UE5_API UClass* StaticClass<UDroneComponent>()
{
	return UDroneComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDroneComponent);
UDroneComponent::~UDroneComponent() {}
// End Class UDroneComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lucas_AUAV_AUAV_UE5_Source_AUAV_UE5_Public_DroneComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDroneComponent, UDroneComponent::StaticClass, TEXT("UDroneComponent"), &Z_Registration_Info_UClass_UDroneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDroneComponent), 705680722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lucas_AUAV_AUAV_UE5_Source_AUAV_UE5_Public_DroneComponent_h_935944808(TEXT("/Script/AUAV_UE5"),
	Z_CompiledInDeferFile_FID_Users_Lucas_AUAV_AUAV_UE5_Source_AUAV_UE5_Public_DroneComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lucas_AUAV_AUAV_UE5_Source_AUAV_UE5_Public_DroneComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
