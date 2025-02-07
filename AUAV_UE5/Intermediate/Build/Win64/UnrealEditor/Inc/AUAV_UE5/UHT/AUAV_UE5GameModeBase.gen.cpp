// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AUAV_UE5/AUAV_UE5GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAUAV_UE5GameModeBase() {}

// Begin Cross Module References
AUAV_UE5_API UClass* Z_Construct_UClass_AAUAV_UE5GameModeBase();
AUAV_UE5_API UClass* Z_Construct_UClass_AAUAV_UE5GameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_AUAV_UE5();
// End Cross Module References

// Begin Class AAUAV_UE5GameModeBase
void AAUAV_UE5GameModeBase::StaticRegisterNativesAAUAV_UE5GameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAUAV_UE5GameModeBase);
UClass* Z_Construct_UClass_AAUAV_UE5GameModeBase_NoRegister()
{
	return AAUAV_UE5GameModeBase::StaticClass();
}
struct Z_Construct_UClass_AAUAV_UE5GameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AUAV_UE5GameModeBase.h" },
		{ "ModuleRelativePath", "AUAV_UE5GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAUAV_UE5GameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAUAV_UE5GameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AUAV_UE5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAUAV_UE5GameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAUAV_UE5GameModeBase_Statics::ClassParams = {
	&AAUAV_UE5GameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAUAV_UE5GameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAUAV_UE5GameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAUAV_UE5GameModeBase()
{
	if (!Z_Registration_Info_UClass_AAUAV_UE5GameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAUAV_UE5GameModeBase.OuterSingleton, Z_Construct_UClass_AAUAV_UE5GameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAUAV_UE5GameModeBase.OuterSingleton;
}
template<> AUAV_UE5_API UClass* StaticClass<AAUAV_UE5GameModeBase>()
{
	return AAUAV_UE5GameModeBase::StaticClass();
}
AAUAV_UE5GameModeBase::AAUAV_UE5GameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAUAV_UE5GameModeBase);
AAUAV_UE5GameModeBase::~AAUAV_UE5GameModeBase() {}
// End Class AAUAV_UE5GameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lucas_AUAV_AUAV_UE5_Source_AUAV_UE5_AUAV_UE5GameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAUAV_UE5GameModeBase, AAUAV_UE5GameModeBase::StaticClass, TEXT("AAUAV_UE5GameModeBase"), &Z_Registration_Info_UClass_AAUAV_UE5GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAUAV_UE5GameModeBase), 1755192048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lucas_AUAV_AUAV_UE5_Source_AUAV_UE5_AUAV_UE5GameModeBase_h_4053636928(TEXT("/Script/AUAV_UE5"),
	Z_CompiledInDeferFile_FID_Users_Lucas_AUAV_AUAV_UE5_Source_AUAV_UE5_AUAV_UE5GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lucas_AUAV_AUAV_UE5_Source_AUAV_UE5_AUAV_UE5GameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
