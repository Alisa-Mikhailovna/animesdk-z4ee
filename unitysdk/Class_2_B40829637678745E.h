#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B40829637678745E_TextmapDownloadType.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_87;
class Class_1_1DFA6DC6E14150AA;
class Class_1_52242588807D4112;
class Class_1_945ACFB1FEBC7A2C_25;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_B40829637678745E_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xE4F0CF0)
#define CLASS_2_B40829637678745E_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xE4F0A40)
#define CLASS_2_B40829637678745E_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xE4F0BF0)
#define CLASS_2_B40829637678745E_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xE4F0BE0)
#define CLASS_2_B40829637678745E_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xE4F0BD0)
#define CLASS_2_B40829637678745E_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xE4F0BC0)
#define CLASS_2_B40829637678745E_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xE4F0B60)
#define CLASS_2_B40829637678745E_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xE4F0C00)
#define CLASS_2_B40829637678745E_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xE4F0B90)
#define CLASS_2_B40829637678745E_METHOD_2_0743268FA10C2E1A_OFFSET UNITYSDK_OFFSET(0xE4F13B0)
#define CLASS_2_B40829637678745E_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xE4F0A20)
#define CLASS_2_B40829637678745E_METHOD_2_6928FDA7FD8C4635_OFFSET UNITYSDK_OFFSET(0xE4F10B0)
#define CLASS_2_B40829637678745E_METHOD_2_69EC02E1DE51ED4F_OFFSET UNITYSDK_OFFSET(0xE4F0830)
#define CLASS_2_B40829637678745E_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0xE4F0A30)
#define CLASS_2_B40829637678745E_METHOD_2_A341FDF37ACC0297_OFFSET UNITYSDK_OFFSET(0xE4F1060)
#define CLASS_2_B40829637678745E_METHOD_2_A367EE0F970DCB81_OFFSET UNITYSDK_OFFSET(0xE4F1350)
#define CLASS_2_B40829637678745E_METHOD_2_E1097147727CB840_OFFSET UNITYSDK_OFFSET(0xE4F11D0)
#define CLASS_2_B40829637678745E_METHOD_2_E3551E7D9304A0E0_OFFSET UNITYSDK_OFFSET(0xE4F0820)
#define CLASS_2_B40829637678745E_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0xE4F0F80)
#define CLASS_2_B40829637678745E_METHOD_2_F5BFB4A8F63C3837_OFFSET UNITYSDK_OFFSET(0xE4F12B0)
#define CLASS_2_B40829637678745E_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xE4F1010)
#define CLASS_2_B40829637678745E_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xE4F1850)
#define CLASS_2_B40829637678745E_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xE4F0C10)
#define CLASS_2_B40829637678745E__CTOR_OFFSET UNITYSDK_OFFSET(0xE4F0DF0)
#define CLASS_2_B40829637678745E__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xE4F0C20)
#define CLASS_2_B40829637678745E___N__0_OFFSET UNITYSDK_OFFSET(0xE4F18E0)

inline static constexpr unsigned int Class_2_B40829637678745E_TypeDefinitionIndex = 56820;

class Class_2_B40829637678745E : public ::RPG::Client::AbsDownloadData_1<::Class_1_52242588807D4112*>
{
public:
	::System::String* Field_2_0; // 0x78
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_1; // 0x80
	::Class_2_B40829637678745E_TextmapDownloadType Field_2_2; // 0x88
	::System::Boolean _IsEnable_k__BackingField; // 0x8C
	::System::Boolean Field_2_4; // 0x8D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E__CTOR_OFFSET))(this);
	}

	::Class_2_B40829637678745E_TextmapDownloadType Method_2_E3551E7D9304A0E0()
	{
		return ((::Class_2_B40829637678745E_TextmapDownloadType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_E3551E7D9304A0E0_OFFSET))(this);
	}

	::System::Void Method_2_69EC02E1DE51ED4F(::Class_2_B40829637678745E_TextmapDownloadType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B40829637678745E_TextmapDownloadType))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_69EC02E1DE51ED4F_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_1DFA6DC6E14150AA* get_DefaultAbsolutePath()
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_945ACFB1FEBC7A2C_25* get_RelativePath()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_SET_ISENABLE_OFFSET))(this, a1);
	}

	::Class_1_52242588807D4112* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_52242588807D4112*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_ONALLSUCCEED_OFFSET))(this);
	}

	::System::Boolean Method_2_A341FDF37ACC0297(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_A341FDF37ACC0297_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E1097147727CB840(::Class_0_16E4307DCC419505_87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_87*))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_E1097147727CB840_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A367EE0F970DCB81(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_A367EE0F970DCB81_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6928FDA7FD8C4635(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_6928FDA7FD8C4635_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0743268FA10C2E1A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_0743268FA10C2E1A_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	static ::System::Boolean Method_2_F5BFB4A8F63C3837(::Class_0_16E4307DCC419505_87* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_87*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E_METHOD_2_F5BFB4A8F63C3837_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>* __n__0()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40829637678745E___N__0_OFFSET))(this);
	}
};
