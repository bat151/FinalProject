// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/BananaPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBananaPickup() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_ABananaPickup();
MYPROJECT_API UClass* Z_Construct_UClass_ABananaPickup_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References

// Begin Class ABananaPickup Function OnBananaBeginOverlap
struct Z_Construct_UFunction_ABananaPickup_OnBananaBeginOverlap_Statics
{
	struct BananaPickup_eventOnBananaBeginOverlap_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BananaPickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABananaPickup_OnBananaBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BananaPickup_eventOnBananaBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABananaPickup_OnBananaBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BananaPickup_eventOnBananaBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABananaPickup_OnBananaBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABananaPickup_OnBananaBeginOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABananaPickup_OnBananaBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABananaPickup_OnBananaBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABananaPickup_OnBananaBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABananaPickup, nullptr, "OnBananaBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ABananaPickup_OnBananaBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABananaPickup_OnBananaBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABananaPickup_OnBananaBeginOverlap_Statics::BananaPickup_eventOnBananaBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABananaPickup_OnBananaBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABananaPickup_OnBananaBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABananaPickup_OnBananaBeginOverlap_Statics::BananaPickup_eventOnBananaBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABananaPickup_OnBananaBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABananaPickup_OnBananaBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABananaPickup::execOnBananaBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBananaBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ABananaPickup Function OnBananaBeginOverlap

// Begin Class ABananaPickup
void ABananaPickup::StaticRegisterNativesABananaPickup()
{
	UClass* Class = ABananaPickup::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBananaBeginOverlap", &ABananaPickup::execOnBananaBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABananaPickup);
UClass* Z_Construct_UClass_ABananaPickup_NoRegister()
{
	return ABananaPickup::StaticClass();
}
struct Z_Construct_UClass_ABananaPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BananaPickup.h" },
		{ "ModuleRelativePath", "BananaPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Banana" },
		{ "ModuleRelativePath", "BananaPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__StaticMesh_MetaData[] = {
		{ "Category", "BananaPickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BananaPickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Score;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__StaticMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABananaPickup_OnBananaBeginOverlap, "OnBananaBeginOverlap" }, // 3260507226
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABananaPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABananaPickup_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABananaPickup, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABananaPickup_Statics::NewProp__StaticMesh = { "_StaticMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABananaPickup, _StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__StaticMesh_MetaData), NewProp__StaticMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABananaPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABananaPickup_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABananaPickup_Statics::NewProp__StaticMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABananaPickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABananaPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABananaPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABananaPickup_Statics::ClassParams = {
	&ABananaPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABananaPickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABananaPickup_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABananaPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_ABananaPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABananaPickup()
{
	if (!Z_Registration_Info_UClass_ABananaPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABananaPickup.OuterSingleton, Z_Construct_UClass_ABananaPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABananaPickup.OuterSingleton;
}
template<> MYPROJECT_API UClass* StaticClass<ABananaPickup>()
{
	return ABananaPickup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABananaPickup);
ABananaPickup::~ABananaPickup() {}
// End Class ABananaPickup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_bat15_Documents_GitHub_FinalProject_MyProject_Source_MyProject_BananaPickup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABananaPickup, ABananaPickup::StaticClass, TEXT("ABananaPickup"), &Z_Registration_Info_UClass_ABananaPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABananaPickup), 2199389900U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_bat15_Documents_GitHub_FinalProject_MyProject_Source_MyProject_BananaPickup_h_127467355(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_bat15_Documents_GitHub_FinalProject_MyProject_Source_MyProject_BananaPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_bat15_Documents_GitHub_FinalProject_MyProject_Source_MyProject_BananaPickup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
