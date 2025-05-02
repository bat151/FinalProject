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
MYPROJECT_API UClass* Z_Construct_UClass_ABananaPickup();
MYPROJECT_API UClass* Z_Construct_UClass_ABananaPickup_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References

// Begin Class ABananaPickup
void ABananaPickup::StaticRegisterNativesABananaPickup()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABananaPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ABananaPickup, ABananaPickup::StaticClass, TEXT("ABananaPickup"), &Z_Registration_Info_UClass_ABananaPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABananaPickup), 643971057U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_bat15_Documents_GitHub_FinalProject_MyProject_Source_MyProject_BananaPickup_h_1116248671(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_bat15_Documents_GitHub_FinalProject_MyProject_Source_MyProject_BananaPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_bat15_Documents_GitHub_FinalProject_MyProject_Source_MyProject_BananaPickup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
