// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/Public/CleanupInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCleanupInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_UCleanupInterface();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_UCleanupInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
// End Cross Module References
	DEFINE_FUNCTION(ICleanupInterface::execDeleteActor)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToDelete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteActor(Z_Param_ActorToDelete);
		P_NATIVE_END;
	}
	void UCleanupInterface::StaticRegisterNativesUCleanupInterface()
	{
		UClass* Class = UCleanupInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteActor", &ICleanupInterface::execDeleteActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCleanupInterface_DeleteActor_Statics
	{
		struct CleanupInterface_eventDeleteActor_Parms
		{
			AActor* ActorToDelete;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToDelete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCleanupInterface_DeleteActor_Statics::NewProp_ActorToDelete = { "ActorToDelete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CleanupInterface_eventDeleteActor_Parms, ActorToDelete), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCleanupInterface_DeleteActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCleanupInterface_DeleteActor_Statics::NewProp_ActorToDelete,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCleanupInterface_DeleteActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CleanupInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCleanupInterface_DeleteActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCleanupInterface, nullptr, "DeleteActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCleanupInterface_DeleteActor_Statics::CleanupInterface_eventDeleteActor_Parms), Z_Construct_UFunction_UCleanupInterface_DeleteActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCleanupInterface_DeleteActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCleanupInterface_DeleteActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCleanupInterface_DeleteActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCleanupInterface_DeleteActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCleanupInterface_DeleteActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCleanupInterface);
	UClass* Z_Construct_UClass_UCleanupInterface_NoRegister()
	{
		return UCleanupInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCleanupInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCleanupInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCleanupInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCleanupInterface_DeleteActor, "DeleteActor" }, // 3530997255
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCleanupInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CleanupInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCleanupInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICleanupInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCleanupInterface_Statics::ClassParams = {
		&UCleanupInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCleanupInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCleanupInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCleanupInterface()
	{
		if (!Z_Registration_Info_UClass_UCleanupInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCleanupInterface.OuterSingleton, Z_Construct_UClass_UCleanupInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCleanupInterface.OuterSingleton;
	}
	template<> ENDLESSRUNNER_API UClass* StaticClass<UCleanupInterface>()
	{
		return UCleanupInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCleanupInterface);
	UCleanupInterface::~UCleanupInterface() {}
	struct Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_CleanupInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_CleanupInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCleanupInterface, UCleanupInterface::StaticClass, TEXT("UCleanupInterface"), &Z_Registration_Info_UClass_UCleanupInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCleanupInterface), 3634383242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_CleanupInterface_h_3132710677(TEXT("/Script/EndlessRunner"),
		Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_CleanupInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_CleanupInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
