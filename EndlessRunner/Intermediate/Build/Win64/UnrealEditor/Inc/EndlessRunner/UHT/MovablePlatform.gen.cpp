// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/Public/MovablePlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovablePlatform() {}
// Cross Module References
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AMovablePlatform();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AMovablePlatform_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
// End Cross Module References
	void AMovablePlatform::StaticRegisterNativesAMovablePlatform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovablePlatform);
	UClass* Z_Construct_UClass_AMovablePlatform_NoRegister()
	{
		return AMovablePlatform::StaticClass();
	}
	struct Z_Construct_UClass_AMovablePlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovablePlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovablePlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovablePlatform.h" },
		{ "ModuleRelativePath", "Public/MovablePlatform.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovablePlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovablePlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovablePlatform_Statics::ClassParams = {
		&AMovablePlatform::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovablePlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovablePlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovablePlatform()
	{
		if (!Z_Registration_Info_UClass_AMovablePlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovablePlatform.OuterSingleton, Z_Construct_UClass_AMovablePlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovablePlatform.OuterSingleton;
	}
	template<> ENDLESSRUNNER_API UClass* StaticClass<AMovablePlatform>()
	{
		return AMovablePlatform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovablePlatform);
	AMovablePlatform::~AMovablePlatform() {}
	struct Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_MovablePlatform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_MovablePlatform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovablePlatform, AMovablePlatform::StaticClass, TEXT("AMovablePlatform"), &Z_Registration_Info_UClass_AMovablePlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovablePlatform), 4265529759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_MovablePlatform_h_2511481270(TEXT("/Script/EndlessRunner"),
		Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_MovablePlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_MovablePlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
