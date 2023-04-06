// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/Public/Runner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunner() {}
// Cross Module References
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_ARunner();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_ARunner_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
// End Cross Module References
	void ARunner::StaticRegisterNativesARunner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARunner);
	UClass* Z_Construct_UClass_ARunner_NoRegister()
	{
		return ARunner::StaticClass();
	}
	struct Z_Construct_UClass_ARunner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunner_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Runner.h" },
		{ "ModuleRelativePath", "Public/Runner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARunner_Statics::ClassParams = {
		&ARunner::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARunner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARunner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARunner()
	{
		if (!Z_Registration_Info_UClass_ARunner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARunner.OuterSingleton, Z_Construct_UClass_ARunner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARunner.OuterSingleton;
	}
	template<> ENDLESSRUNNER_API UClass* StaticClass<ARunner>()
	{
		return ARunner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunner);
	ARunner::~ARunner() {}
	struct Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_Runner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_Runner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARunner, ARunner::StaticClass, TEXT("ARunner"), &Z_Registration_Info_UClass_ARunner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARunner), 3995898767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_Runner_h_4017218112(TEXT("/Script/EndlessRunner"),
		Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_Runner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_Runner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
