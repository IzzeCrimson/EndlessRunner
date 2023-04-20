// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/Public/PlatformSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformSpawner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_APlatformSpawner();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_APlatformSpawner_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
// End Cross Module References
	DEFINE_FUNCTION(APlatformSpawner::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	void APlatformSpawner::StaticRegisterNativesAPlatformSpawner()
	{
		UClass* Class = APlatformSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapEnd", &APlatformSpawner::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics
	{
		struct PlatformSpawner_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformSpawner_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformSpawner_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformSpawner_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformSpawner_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlatformSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformSpawner, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::PlatformSpawner_eventOnOverlapEnd_Parms), Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformSpawner);
	UClass* Z_Construct_UClass_APlatformSpawner_NoRegister()
	{
		return APlatformSpawner::StaticClass();
	}
	struct Z_Construct_UClass_APlatformSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Platforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Platforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlatformSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlatformSpawner_OnOverlapEnd, "OnOverlapEnd" }, // 1930516500
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformSpawner.h" },
		{ "ModuleRelativePath", "Public/PlatformSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformSpawner_Statics::NewProp_BoxCollider_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Platform Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlatformSpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformSpawner_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlatformSpawner, BoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlatformSpawner_Statics::NewProp_BoxCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::NewProp_BoxCollider_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformSpawner_Statics::NewProp_Platforms_Inner = { "Platforms", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformSpawner_Statics::NewProp_Platforms_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Platform Components" },
		{ "ModuleRelativePath", "Public/PlatformSpawner.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlatformSpawner_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlatformSpawner, Platforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlatformSpawner_Statics::NewProp_Platforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::NewProp_Platforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformSpawner_Statics::NewProp_BoxCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformSpawner_Statics::NewProp_Platforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformSpawner_Statics::NewProp_Platforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformSpawner_Statics::ClassParams = {
		&APlatformSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlatformSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlatformSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatformSpawner()
	{
		if (!Z_Registration_Info_UClass_APlatformSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformSpawner.OuterSingleton, Z_Construct_UClass_APlatformSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlatformSpawner.OuterSingleton;
	}
	template<> ENDLESSRUNNER_API UClass* StaticClass<APlatformSpawner>()
	{
		return APlatformSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformSpawner);
	APlatformSpawner::~APlatformSpawner() {}
	struct Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_PlatformSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_PlatformSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlatformSpawner, APlatformSpawner::StaticClass, TEXT("APlatformSpawner"), &Z_Registration_Info_UClass_APlatformSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformSpawner), 139762359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_PlatformSpawner_h_3271113332(TEXT("/Script/EndlessRunner"),
		Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_PlatformSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_PlatformSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
