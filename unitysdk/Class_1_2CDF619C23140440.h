#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewDirection.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelAnimalType.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelGameModeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0C0D3AB5675C3420;
class Class_1_7F2D8932FAEE066D;
class Class_1_86D6A61A4F68A5B8;
class Class_2_566E5C710244EEC1;
class Class_2_56DCA1B58073717B;
namespace Entitas { class IContext; }
namespace RPG::GameCore { class FiveDimAvatarConfig; }
namespace RPG::GameCore { class FourRotateVoxelAnimalConfig; }
namespace RPG::GameCore { class FourRotateVoxelGameConfig; }
namespace RPG::GameCore { class FourRotateVoxelGameModeConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelSettings; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define CLASS_1_2CDF619C23140440_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A74D350)
#define CLASS_1_2CDF619C23140440_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1A74D8A0)
#define CLASS_1_2CDF619C23140440_GET_FOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0x1A74D880)
#define CLASS_1_2CDF619C23140440_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1A74D860)
#define CLASS_1_2CDF619C23140440_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1A74DA80)
#define CLASS_1_2CDF619C23140440_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1A74D760)
#define CLASS_1_2CDF619C23140440_METHOD_1_1A425C083DDF2BB1_OFFSET UNITYSDK_OFFSET(0x1A74DB00)
#define CLASS_1_2CDF619C23140440_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1A74D9A0)
#define CLASS_1_2CDF619C23140440_METHOD_1_35DC9B290E018EE0_OFFSET UNITYSDK_OFFSET(0x1A74DBF0)
#define CLASS_1_2CDF619C23140440_METHOD_1_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x1A74D840)
#define CLASS_1_2CDF619C23140440_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1A74DA20)
#define CLASS_1_2CDF619C23140440_METHOD_1_60617AB51AF08115_OFFSET UNITYSDK_OFFSET(0x1A74E0E0)
#define CLASS_1_2CDF619C23140440_METHOD_1_7564F72947381311_OFFSET UNITYSDK_OFFSET(0x1A74DF30)
#define CLASS_1_2CDF619C23140440_METHOD_1_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x1A74D300)
#define CLASS_1_2CDF619C23140440_METHOD_1_B7BFE5D35A542E8B_OFFSET UNITYSDK_OFFSET(0x1A74E390)
#define CLASS_1_2CDF619C23140440_METHOD_1_B9EC3F44C1BFC5EF_OFFSET UNITYSDK_OFFSET(0x1A74D700)
#define CLASS_1_2CDF619C23140440_METHOD_1_BBDDAAF43A9AD89B_1_OFFSET UNITYSDK_OFFSET(0x1A74D820)
#define CLASS_1_2CDF619C23140440_METHOD_1_BBDDAAF43A9AD89B_OFFSET UNITYSDK_OFFSET(0x1A74D800)
#define CLASS_1_2CDF619C23140440_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A74DA10)
#define CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_1_OFFSET UNITYSDK_OFFSET(0x1A74E000)
#define CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_2_OFFSET UNITYSDK_OFFSET(0x1A74E190)
#define CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_3_OFFSET UNITYSDK_OFFSET(0x1A74E270)
#define CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_OFFSET UNITYSDK_OFFSET(0x1A74DE50)
#define CLASS_1_2CDF619C23140440_METHOD_1_C91E5170F9E36EED_1_OFFSET UNITYSDK_OFFSET(0x1A74D7E0)
#define CLASS_1_2CDF619C23140440_METHOD_1_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x1A74D7C0)
#define CLASS_1_2CDF619C23140440_METHOD_1_CE662E09FB9A3F60_OFFSET UNITYSDK_OFFSET(0x1A74DD90)
#define CLASS_1_2CDF619C23140440_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x1A74E370)
#define CLASS_1_2CDF619C23140440_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1A74E350)
#define CLASS_1_2CDF619C23140440_METHOD_1_DAA252606584AD2D_OFFSET UNITYSDK_OFFSET(0x1A74DCE0)
#define CLASS_1_2CDF619C23140440_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1A74DA30)
#define CLASS_1_2CDF619C23140440_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A74DA00)
#define CLASS_1_2CDF619C23140440_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x1A74DA60)
#define CLASS_1_2CDF619C23140440_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1A74DA40)
#define CLASS_1_2CDF619C23140440_METHOD_1_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0x1A74DBB0)
#define CLASS_1_2CDF619C23140440_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1A74DAE0)
#define CLASS_1_2CDF619C23140440_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x1A74DBD0)
#define CLASS_1_2CDF619C23140440_METHOD_1_FD97D7184557CB1A_OFFSET UNITYSDK_OFFSET(0x1A74D8C0)
#define CLASS_1_2CDF619C23140440_SET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1A74D8B0)
#define CLASS_1_2CDF619C23140440_SET_FOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0x1A74D890)
#define CLASS_1_2CDF619C23140440_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1A74D870)
#define CLASS_1_2CDF619C23140440__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A74E420)
#define CLASS_1_2CDF619C23140440__CTOR_OFFSET UNITYSDK_OFFSET(0x1A74D070)

inline static constexpr unsigned int Class_1_2CDF619C23140440_TypeDefinitionIndex = 39658;

class Class_1_2CDF619C23140440 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21010);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21018);
	}
	static ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21020);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21028);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_4()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21030);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21038);
	}
	static ::RPG::GameCore::FiveDimAvatarConfig** StaticGet_Field_1_6()
	{
		return (::RPG::GameCore::FiveDimAvatarConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21040);
	}
	static ::System::String** StaticGet_Field_1_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21048);
	}
	static ::System::String** StaticGet_Field_1_8()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21050);
	}
	static ::System::String** StaticGet_Field_1_9()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21058);
	}
	static ::System::String** StaticGet_Field_1_10()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21060);
	}
	static ::System::String** StaticGet_Field_1_11()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21068);
	}
	static ::System::String** StaticGet_Field_1_12()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21070);
	}
	static ::System::String** StaticGet_Field_1_13()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21078);
	}
	static ::System::String** StaticGet_Field_1_14()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21080);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_15()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21088);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_16()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21090);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>** StaticGet_Field_1_17()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x21098);
	}
	static ::System::String** StaticGet_Field_1_18()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x210A0);
	}
	static ::System::String** StaticGet_Field_1_19()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x210A8);
	}
	static ::System::String** StaticGet_Field_1_20()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDF619C23140440_TypeDefinitionIndex)->GetStaticField(0x210B0);
	}
	// static const ::System::String* Field_1_21; // 0x0
	// static const ::System::String* Field_1_22; // 0x0
	// static const ::System::String* Field_1_23; // 0x0
	// static const ::System::String* Field_1_24; // 0x0
	// static const ::System::String* Field_1_25; // 0x0
	::System::String* Field_1_26; // 0x10
	::Class_2_56DCA1B58073717B* Field_1_27; // 0x18
	::System::String* Field_1_28; // 0x20
	::RPG::GameCore::FourRotateVoxelAnimalConfig* Field_1_29; // 0x28
	::RPG::GameCore::FourRotateVoxelGameModeConfig* Field_1_30; // 0x30
	::Class_1_0C0D3AB5675C3420* Field_1_31; // 0x38
	::Class_1_86D6A61A4F68A5B8* Field_1_32; // 0x40
	::Class_2_566E5C710244EEC1* _FourRotateVoxelGame_k__BackingField; // 0x48
	::UnityEngine::GameObject* Field_1_34; // 0x50
	::Class_2_56DCA1B58073717B* Field_1_35; // 0x58
	::System::String* Field_1_36; // 0x60
	::UnityEngine::Mesh* Field_1_37; // 0x68
	::Class_2_56DCA1B58073717B* Field_1_38; // 0x70
	::RPG::GameCore::FourRotateVoxelGameConfig* _GameConfig_k__BackingField; // 0x78
	::System::String* Field_1_40; // 0x80
	::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x88
	::RPG::GameCore::FourRotateVoxelLevelSettings* Field_1_42; // 0x90
	::Class_1_7F2D8932FAEE066D* Field_1_43; // 0x98
	::System::String* Field_1_44; // 0xA0
	::System::Collections::Generic::List_1<::Class_2_56DCA1B58073717B*>* Field_1_45; // 0xA8
	::Class_2_56DCA1B58073717B* Field_1_46; // 0xB0
	::UnityEngine::Vector3 Field_1_47; // 0xB8
	::UnityEngine::Vector3 Field_1_48; // 0xC4
	::UnityEngine::Vector3 Field_1_49; // 0xD0
	::RPG::GameCore::FourRotateVoxelGameModeType Field_1_50; // 0xDC
	::UnityEngine::Vector3 Field_1_51; // 0xE0
	::System::Single Field_1_52; // 0xEC
	::UnityEngine::Vector3 Field_1_53; // 0xF0
	::UnityEngine::Quaternion Field_1_54; // 0xFC
	::System::Single Field_1_55; // 0x10C
	::System::Single Field_1_56; // 0x110
	::UnityEngine::Quaternion Field_1_57; // 0x114
	::System::Int32 Field_1_58; // 0x124
	::System::Single Field_1_59; // 0x128
	::System::Boolean Field_1_60; // 0x12C
	::System::Boolean Field_1_61; // 0x12D
	::System::Boolean Field_1_62; // 0x12E
	::System::Boolean Field_1_63; // 0x12F
	::System::Single Field_1_64; // 0x130
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Field_1_65; // 0x134
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Field_1_66; // 0x14C
	::System::Boolean Field_1_67; // 0x164
	::System::Boolean Field_1_68; // 0x165
	::System::Boolean Field_1_69; // 0x166
	::System::Boolean Field_1_70; // 0x167
	::RPG::GameCore::FourRotateVoxelAnimalType Field_1_71; // 0x168
	::UnityEngine::Vector3 Field_1_72; // 0x16C
	::System::Boolean Field_1_73; // 0x178
	::System::Boolean Field_1_74; // 0x179
	::System::Boolean Field_1_75; // 0x17A
	::System::Boolean Field_1_76; // 0x17B
	::System::Boolean Field_1_77; // 0x17C
	::System::Boolean Field_1_78; // 0x17D
	::System::Boolean Field_1_79; // 0x17E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440__CCTOR_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::RPG::GameCore::FourRotateVoxelGameConfig* get_GameConfig()
	{
		return ((::RPG::GameCore::FourRotateVoxelGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_GET_GAMECONFIG_OFFSET))(this);
	}

	::System::Void set_GameConfig(::RPG::GameCore::FourRotateVoxelGameConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelGameConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_SET_GAMECONFIG_OFFSET))(this, a1);
	}

	::Class_2_566E5C710244EEC1* get_FourRotateVoxelGame()
	{
		return ((::Class_2_566E5C710244EEC1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_GET_FOURROTATEVOXELGAME_OFFSET))(this);
	}

	::System::Void set_FourRotateVoxelGame(::Class_2_566E5C710244EEC1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_566E5C710244EEC1*))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_SET_FOURROTATEVOXELGAME_OFFSET))(this, a1);
	}

	::Il2CppArray<::Entitas::IContext*>* get_allContexts()
	{
		return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_GET_ALLCONTEXTS_OFFSET))(this);
	}

	::System::Void set_allContexts(::Il2CppArray<::Entitas::IContext*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Entitas::IContext*>*))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_SET_ALLCONTEXTS_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_FD97D7184557CB1A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_FD97D7184557CB1A_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_2_56DCA1B58073717B* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_56DCA1B58073717B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_1_B9EC3F44C1BFC5EF(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_B9EC3F44C1BFC5EF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_C91E5170F9E36EED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Void Method_1_C91E5170F9E36EED_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_C91E5170F9E36EED_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_1_BBDDAAF43A9AD89B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_BBDDAAF43A9AD89B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_1A425C083DDF2BB1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_1A425C083DDF2BB1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_F5599B7DA8E7E53C_1_OFFSET))(this);
	}

	::System::Void Method_1_BBDDAAF43A9AD89B_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_BBDDAAF43A9AD89B_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_1_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_3C927B51D2142A24_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_35DC9B290E018EE0(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_35DC9B290E018EE0_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection Method_1_DAA252606584AD2D(::System::Int32 a1)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_DAA252606584AD2D_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_CE662E09FB9A3F60(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_CE662E09FB9A3F60_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_C77C4AFC0D2017E8()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_7564F72947381311()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_7564F72947381311_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C77C4AFC0D2017E8_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_1_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection Method_1_60617AB51AF08115()
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_60617AB51AF08115_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C77C4AFC0D2017E8_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C77C4AFC0D2017E8_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_C77C4AFC0D2017E8_3_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_B7BFE5D35A542E8B()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CDF619C23140440_METHOD_1_B7BFE5D35A542E8B_OFFSET))(this);
	}
};
