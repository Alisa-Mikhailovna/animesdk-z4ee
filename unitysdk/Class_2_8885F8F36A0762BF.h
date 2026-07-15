#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"

class Class_0_16E4307DCC419505_87;
class Class_1_1DFA6DC6E14150AA;
class Class_1_945ACFB1FEBC7A2C_25;
class Class_1_CA1A060EE17E98B7;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_8885F8F36A0762BF_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xB3AED70)
#define CLASS_2_8885F8F36A0762BF_GET_BASEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xB3AEDF0)
#define CLASS_2_8885F8F36A0762BF_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xB3AEEE0)
#define CLASS_2_8885F8F36A0762BF_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xB3AEED0)
#define CLASS_2_8885F8F36A0762BF_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xB3AEEC0)
#define CLASS_2_8885F8F36A0762BF_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xB3AEEB0)
#define CLASS_2_8885F8F36A0762BF_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xB3AEDC0)
#define CLASS_2_8885F8F36A0762BF_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xB3AEEF0)
#define CLASS_2_8885F8F36A0762BF_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xB3AEE80)
#define CLASS_2_8885F8F36A0762BF_METHOD_2_03DB9286A30DEC00_OFFSET UNITYSDK_OFFSET(0xB3AEF60)
#define CLASS_2_8885F8F36A0762BF_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0xB3AF1B0)
#define CLASS_2_8885F8F36A0762BF_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xB3AF240)
#define CLASS_2_8885F8F36A0762BF_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xB3AF120)
#define CLASS_2_8885F8F36A0762BF_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xB3AEF00)
#define CLASS_2_8885F8F36A0762BF__CTOR_OFFSET UNITYSDK_OFFSET(0xB3AF290)
#define CLASS_2_8885F8F36A0762BF__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xB3AEF10)

inline static constexpr unsigned int Class_2_8885F8F36A0762BF_TypeDefinitionIndex = 56830;

class Class_2_8885F8F36A0762BF : public ::RPG::Client::AbsDownloadData_1<::Class_1_CA1A060EE17E98B7*>
{
public:
	::System::Boolean _IsEnable_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_1DFA6DC6E14150AA* get_DefaultAbsolutePath()
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_1DFA6DC6E14150AA* get_BaseAbsolutePath()
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GET_BASEABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_945ACFB1FEBC7A2C_25* get_RelativePath()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_SET_ISENABLE_OFFSET))(this, a1);
	}

	::Class_1_CA1A060EE17E98B7* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_CA1A060EE17E98B7*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_03DB9286A30DEC00()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_METHOD_2_03DB9286A30DEC00_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF_ONALLSUCCEED_OFFSET))(this);
	}
};
