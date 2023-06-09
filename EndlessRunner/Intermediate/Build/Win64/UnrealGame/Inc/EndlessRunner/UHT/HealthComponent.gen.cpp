// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/Public/HealthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthComponent() {}
// Cross Module References
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_UHealthComponent();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
// End Cross Module References
	DEFINE_FUNCTION(UHealthComponent::execSetDamageBool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamageBool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execTakeDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	void UHealthComponent::StaticRegisterNativesUHealthComponent()
	{
		UClass* Class = UHealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDamageBool", &UHealthComponent::execSetDamageBool },
			{ "TakeDamage", &UHealthComponent::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHealthComponent_SetDamageBool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_SetDamageBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_SetDamageBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "SetDamageBool", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_SetDamageBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetDamageBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_SetDamageBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_SetDamageBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics
	{
		struct HealthComponent_eventTakeDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HealthComponent_eventTakeDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HealthComponent_eventTakeDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HealthComponent_eventTakeDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HealthComponent_eventTakeDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HealthComponent_eventTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamagedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_InstigatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "TakeDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::HealthComponent_eventTakeDamage_Parms), Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthComponent_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthComponent);
	UClass* Z_Construct_UClass_UHealthComponent_NoRegister()
	{
		return UHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeafaultHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeafaultHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanTakeDamage_MetaData[];
#endif
		static void NewProp_bCanTakeDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTakeDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthComponent_SetDamageBool, "SetDamageBool" }, // 781546636
		{ &Z_Construct_UFunction_UHealthComponent_TakeDamage, "TakeDamage" }, // 3196621238
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HealthComponent.h" },
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_DeafaultHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_DeafaultHealth = { "DeafaultHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHealthComponent, DeafaultHealth), METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_DeafaultHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_DeafaultHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHealthComponent, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_bCanTakeDamage_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/HealthComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHealthComponent_Statics::NewProp_bCanTakeDamage_SetBit(void* Obj)
	{
		((UHealthComponent*)Obj)->bCanTakeDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_bCanTakeDamage = { "bCanTakeDamage", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHealthComponent), &Z_Construct_UClass_UHealthComponent_Statics::NewProp_bCanTakeDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::NewProp_bCanTakeDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_bCanTakeDamage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_DeafaultHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_bCanTakeDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthComponent_Statics::ClassParams = {
		&UHealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealthComponent()
	{
		if (!Z_Registration_Info_UClass_UHealthComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthComponent.OuterSingleton, Z_Construct_UClass_UHealthComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHealthComponent.OuterSingleton;
	}
	template<> ENDLESSRUNNER_API UClass* StaticClass<UHealthComponent>()
	{
		return UHealthComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthComponent);
	UHealthComponent::~UHealthComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_HealthComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_HealthComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHealthComponent, UHealthComponent::StaticClass, TEXT("UHealthComponent"), &Z_Registration_Info_UClass_UHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthComponent), 3725390471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_HealthComponent_h_94333820(TEXT("/Script/EndlessRunner"),
		Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_HealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_william_isacsson_Unreal_Projects_EndlessRunner_EndlessRunner_Source_EndlessRunner_Public_HealthComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
