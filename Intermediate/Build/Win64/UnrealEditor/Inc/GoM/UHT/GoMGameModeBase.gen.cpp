// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoM/GoMGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoMGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GOM_API UClass* Z_Construct_UClass_AGoMGameModeBase();
	GOM_API UClass* Z_Construct_UClass_AGoMGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GoM();
// End Cross Module References
	void AGoMGameModeBase::StaticRegisterNativesAGoMGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGoMGameModeBase);
	UClass* Z_Construct_UClass_AGoMGameModeBase_NoRegister()
	{
		return AGoMGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGoMGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoMGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GoM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoMGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GoMGameModeBase.h" },
		{ "ModuleRelativePath", "GoMGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoMGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoMGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoMGameModeBase_Statics::ClassParams = {
		&AGoMGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGoMGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGoMGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGoMGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AGoMGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoMGameModeBase.OuterSingleton, Z_Construct_UClass_AGoMGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGoMGameModeBase.OuterSingleton;
	}
	template<> GOM_API UClass* StaticClass<AGoMGameModeBase>()
	{
		return AGoMGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoMGameModeBase);
	AGoMGameModeBase::~AGoMGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_OneDrive_Documents_Unreal_Projects_GoM_Source_GoM_GoMGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneDrive_Documents_Unreal_Projects_GoM_Source_GoM_GoMGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGoMGameModeBase, AGoMGameModeBase::StaticClass, TEXT("AGoMGameModeBase"), &Z_Registration_Info_UClass_AGoMGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoMGameModeBase), 1115101698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneDrive_Documents_Unreal_Projects_GoM_Source_GoM_GoMGameModeBase_h_186147866(TEXT("/Script/GoM"),
		Z_CompiledInDeferFile_FID_OneDrive_Documents_Unreal_Projects_GoM_Source_GoM_GoMGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneDrive_Documents_Unreal_Projects_GoM_Source_GoM_GoMGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
