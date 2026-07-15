#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_74D97E08BFF70A55.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_285;
class Class_1_A335CFE48265E251;
class Class_1_AD85912B20ABF9D7;
class Class_1_BE2C11D41E955545;
class Class_1_D0766C2D98736D1C;
class Class_1_DE4C6B309308A230;
class Class_2_7F4574E2AA5F0809;
class Class_2_FC978391A642283C_1;
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class Volume; }
namespace RPG::Client::OpenWorld { template <typename T> class VolumeComponentTransition_1; }
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_340C6DF7E45D1BAB_GET_BLOCKCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xB5DF310)
#define CLASS_1_340C6DF7E45D1BAB_GET_GLOBALCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xB5DF2F0)
#define CLASS_1_340C6DF7E45D1BAB_GET__ALLSOURCEPROXY_OFFSET UNITYSDK_OFFSET(0xB5DF350)
#define CLASS_1_340C6DF7E45D1BAB_GET__ALLSOURCESTACK_OFFSET UNITYSDK_OFFSET(0xB5DF330)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_14BFEE99BA593FDD_OFFSET UNITYSDK_OFFSET(0xB5DB4F0)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_1A0D3B20C2CC55DC_OFFSET UNITYSDK_OFFSET(0xB5DDA00)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_1AADDEA5F6FD601A_OFFSET UNITYSDK_OFFSET(0xB5E12D0)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_1ABE634E489C2299_OFFSET UNITYSDK_OFFSET(0xB5E0960)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xB5DD290)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB5DD230)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_306669E8B26524E2_OFFSET UNITYSDK_OFFSET(0xB5E3B80)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_323F8D08182C6A68_OFFSET UNITYSDK_OFFSET(0xB5E4430)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0xB5E0630)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_3AF1FD0911B649AF_OFFSET UNITYSDK_OFFSET(0xB5E4270)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_3D3A3FC6437445E5_OFFSET UNITYSDK_OFFSET(0xB5DE510)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_3E691C90F81C68D2_OFFSET UNITYSDK_OFFSET(0xB5E1040)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_4E9ED3C8B72341BE_OFFSET UNITYSDK_OFFSET(0xB5E0EB0)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_4F287A3C06D170F4_OFFSET UNITYSDK_OFFSET(0xB5DEAD0)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_62FEFB991479ACCB_OFFSET UNITYSDK_OFFSET(0xB5DD110)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_6C1AC7377B2E2AE4_OFFSET UNITYSDK_OFFSET(0xB5E1130)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0xB5DEE90)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_75E10C86775D877F_OFFSET UNITYSDK_OFFSET(0xB5DC510)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_780147B637D00196_OFFSET UNITYSDK_OFFSET(0xB5DCAA0)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_7E9AC3FFDA4606D5_1_OFFSET UNITYSDK_OFFSET(0xB5E0E40)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0xB5E05C0)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0xB5DF370)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xB5E4180)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xB5DE4B0)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0xB5DE110)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0xB5DD8F0)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xB5DF870)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0xB5E3050)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_C561FF611C07A44C_1_OFFSET UNITYSDK_OFFSET(0xB5DD070)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xB5DCFD0)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_C65867E022A1F7C0_OFFSET UNITYSDK_OFFSET(0xB5E1B70)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_C9D6F9890A05C022_OFFSET UNITYSDK_OFFSET(0xB5DD480)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_CB741CCB6B42AFF1_OFFSET UNITYSDK_OFFSET(0xB5E19F0)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_CEF2F84573427F6B_OFFSET UNITYSDK_OFFSET(0xB5E1AE0)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_D40D151FFB9AE5DB_OFFSET UNITYSDK_OFFSET(0xB5E2A40)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_D460587695D41831_OFFSET UNITYSDK_OFFSET(0xB5E09C0)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xB5DDE30)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_EC5AF9232853FA6E_OFFSET UNITYSDK_OFFSET(0xB5DD2F0)
#define CLASS_1_340C6DF7E45D1BAB_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xB5DF620)
#define CLASS_1_340C6DF7E45D1BAB_SET_BLOCKCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xB5DF320)
#define CLASS_1_340C6DF7E45D1BAB_SET_GLOBALCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xB5DF300)
#define CLASS_1_340C6DF7E45D1BAB_SET__ALLSOURCEPROXY_OFFSET UNITYSDK_OFFSET(0xB5DF360)
#define CLASS_1_340C6DF7E45D1BAB_SET__ALLSOURCESTACK_OFFSET UNITYSDK_OFFSET(0xB5DF340)
#define CLASS_1_340C6DF7E45D1BAB__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5E45C0)
#define CLASS_1_340C6DF7E45D1BAB__CTOR_OFFSET UNITYSDK_OFFSET(0xB5DEB70)

inline static constexpr unsigned int Class_1_340C6DF7E45D1BAB_TypeDefinitionIndex = 70594;

class Class_1_340C6DF7E45D1BAB : public ::System::Object
{
public:
	static ::Class_1_340C6DF7E45D1BAB** StaticGet_Field_1_0()
	{
		return (::Class_1_340C6DF7E45D1BAB**)Il2CppClass::FromTypeDefinitionIndex(Class_1_340C6DF7E45D1BAB_TypeDefinitionIndex)->GetStaticField(0x6BDD0);
	}
	static ::System::Collections::Generic::List_1<::Class_1_BE2C11D41E955545*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Class_1_BE2C11D41E955545*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_340C6DF7E45D1BAB_TypeDefinitionIndex)->GetStaticField(0x6BDD8);
	}
	::Class_1_DE4C6B309308A230* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_AD85912B20ABF9D7*>* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::Class_1_A335CFE48265E251*>* Field_1_4; // 0x20
	::Class_1_BE2C11D41E955545* __AllSourceStack_k__BackingField; // 0x28
	::Class_1_AD85912B20ABF9D7* Field_1_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_7; // 0x38
	::System::Collections::Generic::List_1<::Class_1_BE2C11D41E955545*>* Field_1_8; // 0x40
	::System::Collections::Generic::List_1<::Class_1_A335CFE48265E251*>* Field_1_9; // 0x48
	::Class_2_FC978391A642283C_1* Field_1_10; // 0x50
	::Class_2_7F4574E2AA5F0809* Field_1_11; // 0x58
	::System::Collections::Generic::IEnumerable_1<::System::Type*>* _GlobalComponentTypes_k__BackingField; // 0x60
	::System::Collections::Generic::List_1<::Class_1_A335CFE48265E251*>* Field_1_13; // 0x68
	::System::Collections::Generic::IEnumerable_1<::System::Type*>* _BlockComponentTypes_k__BackingField; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_AD85912B20ABF9D7*>* Field_1_15; // 0x78
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_16; // 0x80
	::System::Collections::Generic::List_1<::System::String*>* Field_1_17; // 0x88
	::Class_1_BE2C11D41E955545* __AllSourceProxy_k__BackingField; // 0x90
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_19; // 0x98
	::System::Collections::Generic::List_1<::Class_1_D0766C2D98736D1C*>* Field_1_20; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_D0766C2D98736D1C*>* Field_1_21; // 0xA8
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_22; // 0xB0
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::Volume*>* Field_1_23; // 0xB8
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_A335CFE48265E251*>*>* Field_1_24; // 0xC0
	::System::Boolean Field_1_25; // 0xC8
	::System::Boolean Field_1_26; // 0xC9
	::System::Boolean Field_1_27; // 0xCA
	::System::Boolean Field_1_28; // 0xCB

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB__CCTOR_OFFSET))();
	}

	::System::Void Method_1_14BFEE99BA593FDD(::RPG::Client::OpenWorld::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_14BFEE99BA593FDD_OFFSET))(this, a1);
	}

	::System::Void Method_1_75E10C86775D877F(::System::String* a1, ::RPG::Client::Stage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_75E10C86775D877F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_780147B637D00196(::System::String* a1, ::RPG::Client::Stage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_780147B637D00196_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_1_C561FF611C07A44C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_C561FF611C07A44C_1_OFFSET))(this);
	}

	::System::Void Method_1_62FEFB991479ACCB(::System::Int32 a1, ::Struct_2_74D97E08BFF70A55& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_74D97E08BFF70A55&))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_62FEFB991479ACCB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_EC5AF9232853FA6E(::Class_0_16E4307DCC419505_285* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_285*))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_EC5AF9232853FA6E_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9D6F9890A05C022(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_C9D6F9890A05C022_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_1_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_AB88190D695EBEA9_OFFSET))(this);
	}

	::System::Void Method_1_3D3A3FC6437445E5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_3D3A3FC6437445E5_OFFSET))(this, a1);
	}

	::System::Void Method_1_4F287A3C06D170F4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_4F287A3C06D170F4_OFFSET))(this, a1);
	}

	static ::Class_1_340C6DF7E45D1BAB* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_340C6DF7E45D1BAB*(*)())((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_AECF8BEC293ED42A_OFFSET))();
	}

	::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_GlobalComponentTypes()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_GET_GLOBALCOMPONENTTYPES_OFFSET))(this);
	}

	::System::Void set_GlobalComponentTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_SET_GLOBALCOMPONENTTYPES_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_BlockComponentTypes()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_GET_BLOCKCOMPONENTTYPES_OFFSET))(this);
	}

	::System::Void set_BlockComponentTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_SET_BLOCKCOMPONENTTYPES_OFFSET))(this, a1);
	}

	::Class_1_BE2C11D41E955545* get__AllSourceStack()
	{
		return ((::Class_1_BE2C11D41E955545*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_GET__ALLSOURCESTACK_OFFSET))(this);
	}

	::System::Void set__AllSourceStack(::Class_1_BE2C11D41E955545* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE2C11D41E955545*))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_SET__ALLSOURCESTACK_OFFSET))(this, a1);
	}

	::Class_1_BE2C11D41E955545* get__AllSourceProxy()
	{
		return ((::Class_1_BE2C11D41E955545*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_GET__ALLSOURCEPROXY_OFFSET))(this);
	}

	::System::Void set__AllSourceProxy(::Class_1_BE2C11D41E955545* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE2C11D41E955545*))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_SET__ALLSOURCEPROXY_OFFSET))(this, a1);
	}

	::Class_1_BE2C11D41E955545* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_BE2C11D41E955545*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Void Method_1_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_D460587695D41831_OFFSET))(this);
	}

	::Class_1_BE2C11D41E955545* Method_1_7E9AC3FFDA4606D5()
	{
		return ((::Class_1_BE2C11D41E955545*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_7E9AC3FFDA4606D5_OFFSET))(this);
	}

	::Class_1_BE2C11D41E955545* Method_1_7E9AC3FFDA4606D5_1()
	{
		return ((::Class_1_BE2C11D41E955545*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_7E9AC3FFDA4606D5_1_OFFSET))(this);
	}

	::Class_1_A335CFE48265E251* Method_1_4E9ED3C8B72341BE(::System::Type* a1, ::RPG::GameCore::StageVolumeComponentData* a2)
	{
		return ((::Class_1_A335CFE48265E251*(*)(::PVOID, ::System::Type*, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_4E9ED3C8B72341BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1ABE634E489C2299(::Class_1_BE2C11D41E955545* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE2C11D41E955545*))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_1ABE634E489C2299_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_1_3E691C90F81C68D2(::RPG::Client::OpenWorld::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_3E691C90F81C68D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C1AC7377B2E2AE4(::RPG::Client::OpenWorld::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_6C1AC7377B2E2AE4_OFFSET))(this, a1);
	}

	::System::Void Method_1_1AADDEA5F6FD601A(::RPG::Client::OpenWorld::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_1AADDEA5F6FD601A_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB741CCB6B42AFF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_CB741CCB6B42AFF1_OFFSET))(this);
	}

	::System::Int32 Method_1_CEF2F84573427F6B(::RPG::Client::OpenWorld::Volume* a1, ::RPG::Client::OpenWorld::Volume* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_CEF2F84573427F6B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1A0D3B20C2CC55DC(::Class_1_BE2C11D41E955545* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE2C11D41E955545*))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_1A0D3B20C2CC55DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_C65867E022A1F7C0(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_C65867E022A1F7C0_OFFSET))(this, a1, a2);
	}

	::Class_1_BE2C11D41E955545* Method_1_D40D151FFB9AE5DB(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::Class_1_BE2C11D41E955545*(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_D40D151FFB9AE5DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_306669E8B26524E2(::Class_1_DE4C6B309308A230* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_306669E8B26524E2_OFFSET))(this, a1, a2);
	}

	::RPG::Client::OpenWorld::Volume* Method_1_3AF1FD0911B649AF(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::RPG::Client::OpenWorld::Volume*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_3AF1FD0911B649AF_OFFSET))(this, a1, a2);
	}

	::RPG::Client::OpenWorld::Volume* Method_1_323F8D08182C6A68(::UnityEngine::Vector3 a1)
	{
		return ((::RPG::Client::OpenWorld::Volume*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_340C6DF7E45D1BAB_METHOD_1_323F8D08182C6A68_OFFSET))(this, a1);
	}
};
