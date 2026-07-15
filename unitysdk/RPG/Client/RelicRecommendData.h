#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ERelicRecommendDataType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_886;
class Class_1_D17272E82AE804C2_887;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class BigDataAvatarRelicRecommend; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendPropertyData; }
namespace RPG::Client { class RelicRecommendSubPropertyData; }
namespace RPG::Client { class RelicRecommendSuitData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICRECOMMENDDATA_CLONEWITHEXCELLENTMAINPROPERTIES_OFFSET UNITYSDK_OFFSET(0xD2F8AC0)
#define RPG_CLIENT_RELICRECOMMENDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xD2F88F0)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATECONFIGDATA_OFFSET UNITYSDK_OFFSET(0xD2F7DD0)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATEPROPERTYDATAARRAY_1_OFFSET UNITYSDK_OFFSET(0xD2F85D0)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATEPROPERTYDATAARRAY_OFFSET UNITYSDK_OFFSET(0xD2F8000)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATESUITDATAARRAY_1_OFFSET UNITYSDK_OFFSET(0xD2F8350)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATESUITDATAARRAY_OFFSET UNITYSDK_OFFSET(0xD2F7EA0)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xD2D43D0)
#define RPG_CLIENT_RELICRECOMMENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD2D3A00)
#define RPG_CLIENT_RELICRECOMMENDDATA_GETMAINPROPERTYDATALIST_OFFSET UNITYSDK_OFFSET(0xD2F8ED0)
#define RPG_CLIENT_RELICRECOMMENDDATA_GETMAINPROPERTYPERCENT_OFFSET UNITYSDK_OFFSET(0xD2F9AC0)
#define RPG_CLIENT_RELICRECOMMENDDATA_GETMATCHSUBPROPERTYCOUNT_OFFSET UNITYSDK_OFFSET(0xD2F92C0)
#define RPG_CLIENT_RELICRECOMMENDDATA_GETSETIDPERCENT_OFFSET UNITYSDK_OFFSET(0xD2F9890)
#define RPG_CLIENT_RELICRECOMMENDDATA_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0xD2F74C0)
#define RPG_CLIENT_RELICRECOMMENDDATA_GET_EXCELLENTMAINPROPERTYCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0xD2F7940)
#define RPG_CLIENT_RELICRECOMMENDDATA_GET_EXCELLENTMAINPROPERTYPERCENTLOWERLIMIT_OFFSET UNITYSDK_OFFSET(0xD2F77A0)
#define RPG_CLIENT_RELICRECOMMENDDATA_GET_ISBIGDATA_OFFSET UNITYSDK_OFFSET(0xD2F7420)
#define RPG_CLIENT_RELICRECOMMENDDATA_GET_ISCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xD2F7470)
#define RPG_CLIENT_RELICRECOMMENDDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xD2F74E0)
#define RPG_CLIENT_RELICRECOMMENDDATA_GET_RECOMMENDPERCENTLOWERLIMIT_OFFSET UNITYSDK_OFFSET(0xD2F7600)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHEXCELLENTMAINPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xD2F9030)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHEXCELLENTMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0xD2F8FB0)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHFIRSTMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0xD2F96E0)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHFIRSTSETID_OFFSET UNITYSDK_OFFSET(0xD2F95B0)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHMAINPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xD2F9180)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0xD2F10D0)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHSETID_OFFSET UNITYSDK_OFFSET(0xD2F93C0)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHSUBPROPERTY_OFFSET UNITYSDK_OFFSET(0xD2D07B0)
#define RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHTOPNMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0xD2F9740)
#define RPG_CLIENT_RELICRECOMMENDDATA_SET_DATATYPE_OFFSET UNITYSDK_OFFSET(0xD2F74D0)
#define RPG_CLIENT_RELICRECOMMENDDATA_SYNC_1_OFFSET UNITYSDK_OFFSET(0xD2D3FD0)
#define RPG_CLIENT_RELICRECOMMENDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xD2F7A10)
#define RPG_CLIENT_RELICRECOMMENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD2F9C00)
#define RPG_CLIENT_RELICRECOMMENDDATA__FILTEREXCELLENTMAINPROPERTIES_OFFSET UNITYSDK_OFFSET(0xD2F8B20)
#define RPG_CLIENT_RELICRECOMMENDDATA__INITSUBPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xD2F81C0)
#define RPG_CLIENT_RELICRECOMMENDDATA__REFRESHMAINPROPERTYEXCELLENTSTATE_OFFSET UNITYSDK_OFFSET(0xD2F8820)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicRecommendData_TypeDefinitionIndex = 63822;

	class RelicRecommendData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _EXPIRED_TIME = 0x258; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::RelicRecommendSubPropertyData*>* SubPropertyList; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>*>* PropertyDataDict; // 0x18
		::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>* InnerSet; // 0x20
		::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>* OuterSet; // 0x28
		::System::UInt32 AvatarID; // 0x30
		::System::UInt32 _TimeStamp; // 0x34
		::RPG::Client::ERelicRecommendDataType _DataType_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsBigData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GET_ISBIGDATA_OFFSET))(this);
		}

		::System::Boolean get_IsConfigData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GET_ISCONFIGDATA_OFFSET))(this);
		}

		::RPG::Client::ERelicRecommendDataType get_DataType()
		{
			return ((::RPG::Client::ERelicRecommendDataType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GET_DATATYPE_OFFSET))(this);
		}

		::System::Void set_DataType(::RPG::Client::ERelicRecommendDataType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ERelicRecommendDataType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_SET_DATATYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GET_ISEXPIRED_OFFSET))(this);
		}

		static ::System::UInt32 get_RecommendPercentLowerLimit()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GET_RECOMMENDPERCENTLOWERLIMIT_OFFSET))();
		}

		static ::System::UInt32 get_ExcellentMainPropertyPercentLowerLimit()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GET_EXCELLENTMAINPROPERTYPERCENTLOWERLIMIT_OFFSET))();
		}

		static ::System::UInt32 get_ExcellentMainPropertyCountLimit()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GET_EXCELLENTMAINPROPERTYCOUNTLIMIT_OFFSET))();
		}

		static ::RPG::Client::RelicRecommendData* Create(::RPG::GameCore::AvatarRelicRecommendRow* a1)
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::RPG::GameCore::AvatarRelicRecommendRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::RelicRecommendData* CreateConfigData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATECONFIGDATA_OFFSET))(a1);
		}

		::System::Void Sync(::RPG::GameCore::AvatarRelicRecommendRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRelicRecommendRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::Proto::BigDataAvatarRelicRecommend* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::BigDataAvatarRelicRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void _InitSubPropertyList(::RPG::GameCore::AvatarRelicRecommendRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRelicRecommendRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA__INITSUBPROPERTYLIST_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicRecommendData* Create_1(::Proto::BigDataAvatarRelicRecommend* a1)
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::Proto::BigDataAvatarRelicRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATE_1_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>* CreateSuitDataArray(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATESUITDATAARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>* CreateSuitDataArray_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_886*>* a1)
		{
			return ((::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_886*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATESUITDATAARRAY_1_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>* CreatePropertyDataArray(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* a1)
		{
			return ((::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>*(*)(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATEPROPERTYDATAARRAY_OFFSET))(a1);
		}

		static ::System::Void _RefreshMainPropertyExcellentState(::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA__REFRESHMAINPROPERTYEXCELLENTSTATE_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>* CreatePropertyDataArray_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_887*>* a1)
		{
			return ((::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_887*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CREATEPROPERTYDATAARRAY_1_OFFSET))(a1);
		}

		::RPG::Client::RelicRecommendData* Clone()
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CLONE_OFFSET))(this);
		}

		::RPG::Client::RelicRecommendData* CloneWithExcellentMainProperties()
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_CLONEWITHEXCELLENTMAINPROPERTIES_OFFSET))(this);
		}

		::System::Void _FilterExcellentMainProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA__FILTEREXCELLENTMAINPROPERTIES_OFFSET))(this);
		}

		::System::Boolean IsMatchSubProperty(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHSUBPROPERTY_OFFSET))(this, a1);
		}

		::System::Boolean IsMatchMainProperty(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHMAINPROPERTY_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>* GetMainPropertyDataList(::RPG::GameCore::RelicType a1)
		{
			return ((::Il2CppArray<::RPG::Client::RelicRecommendPropertyData*>*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GETMAINPROPERTYDATALIST_OFFSET))(this, a1);
		}

		::System::Boolean IsMatchExcellentMainProperty(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHEXCELLENTMAINPROPERTY_OFFSET))(this, a1);
		}

		::System::Boolean IsMatchMainProperty_1(::RPG::GameCore::RelicType a1, ::RPG::GameCore::AvatarPropertyType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHMAINPROPERTY_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsMatchExcellentMainProperty_1(::RPG::GameCore::RelicType a1, ::RPG::GameCore::AvatarPropertyType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHEXCELLENTMAINPROPERTY_1_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetMatchSubPropertyCount(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GETMATCHSUBPROPERTYCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean IsMatchSetID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHSETID_OFFSET))(this, a1);
		}

		::System::Boolean IsMatchFirstSetID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHFIRSTSETID_OFFSET))(this, a1);
		}

		::System::Boolean IsMatchFirstMainProperty(::RPG::GameCore::RelicType a1, ::RPG::GameCore::AvatarPropertyType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHFIRSTMAINPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsMatchTopNMainProperty(::RPG::GameCore::RelicType a1, ::RPG::GameCore::AvatarPropertyType a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::AvatarPropertyType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_ISMATCHTOPNMAINPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSetIDPercent(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GETSETIDPERCENT_OFFSET))(this, a1);
		}

		::System::UInt32 GetMainPropertyPercent(::RPG::GameCore::RelicType a1, ::RPG::GameCore::AvatarPropertyType a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDDATA_GETMAINPROPERTYPERCENT_OFFSET))(this, a1, a2);
		}
	};
}
