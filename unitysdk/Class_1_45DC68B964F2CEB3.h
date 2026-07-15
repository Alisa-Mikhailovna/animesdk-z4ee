#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
class Class_0_16E4307DCC419505_615;
class Class_0_16E4307DCC419505_616;
class Class_1_630CB84C93B59414;
class Class_1_C6B3B57B6E91674E;
class Class_2_54CCD44980580DB7;
class Class_2_BF47C01E9CFEA39C;
class Class_3_3B91E9B720B814BB;
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_45DC68B964F2CEB3_DOFAILED_OFFSET UNITYSDK_OFFSET(0xB57A250)
#define CLASS_1_45DC68B964F2CEB3_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0xB579F40)
#define CLASS_1_45DC68B964F2CEB3_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB5795E0)
#define CLASS_1_45DC68B964F2CEB3_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xB579060)
#define CLASS_1_45DC68B964F2CEB3_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0xB579160)
#define CLASS_1_45DC68B964F2CEB3_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0xB579100)
#define CLASS_1_45DC68B964F2CEB3_GET_CONTENTHASH_OFFSET UNITYSDK_OFFSET(0xB579120)
#define CLASS_1_45DC68B964F2CEB3_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xB5791B0)
#define CLASS_1_45DC68B964F2CEB3_GET_FILESIZE_OFFSET UNITYSDK_OFFSET(0xB579140)
#define CLASS_1_45DC68B964F2CEB3_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xB5791D0)
#define CLASS_1_45DC68B964F2CEB3_GET_ID_OFFSET UNITYSDK_OFFSET(0xB5790D0)
#define CLASS_1_45DC68B964F2CEB3_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xB579230)
#define CLASS_1_45DC68B964F2CEB3_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xB579250)
#define CLASS_1_45DC68B964F2CEB3_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xB5792B0)
#define CLASS_1_45DC68B964F2CEB3_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xB579270)
#define CLASS_1_45DC68B964F2CEB3_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xB579290)
#define CLASS_1_45DC68B964F2CEB3_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xB5791F0)
#define CLASS_1_45DC68B964F2CEB3_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xB579210)
#define CLASS_1_45DC68B964F2CEB3_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0xB5790F0)
#define CLASS_1_45DC68B964F2CEB3_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xB579190)
#define CLASS_1_45DC68B964F2CEB3_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xB579170)
#define CLASS_1_45DC68B964F2CEB3_METHOD_1_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0xB57A3D0)
#define CLASS_1_45DC68B964F2CEB3_SET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0xB579110)
#define CLASS_1_45DC68B964F2CEB3_SET_CONTENTHASH_OFFSET UNITYSDK_OFFSET(0xB579130)
#define CLASS_1_45DC68B964F2CEB3_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xB5791C0)
#define CLASS_1_45DC68B964F2CEB3_SET_FILESIZE_OFFSET UNITYSDK_OFFSET(0xB579150)
#define CLASS_1_45DC68B964F2CEB3_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xB5791E0)
#define CLASS_1_45DC68B964F2CEB3_SET_ID_OFFSET UNITYSDK_OFFSET(0xB5790E0)
#define CLASS_1_45DC68B964F2CEB3_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xB579240)
#define CLASS_1_45DC68B964F2CEB3_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xB579260)
#define CLASS_1_45DC68B964F2CEB3_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xB5792C0)
#define CLASS_1_45DC68B964F2CEB3_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xB579280)
#define CLASS_1_45DC68B964F2CEB3_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xB5792A0)
#define CLASS_1_45DC68B964F2CEB3_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xB579200)
#define CLASS_1_45DC68B964F2CEB3_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xB579220)
#define CLASS_1_45DC68B964F2CEB3_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xB5791A0)
#define CLASS_1_45DC68B964F2CEB3_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xB579180)
#define CLASS_1_45DC68B964F2CEB3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB57A480)
#define CLASS_1_45DC68B964F2CEB3_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xB57A440)
#define CLASS_1_45DC68B964F2CEB3__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB579460)
#define CLASS_1_45DC68B964F2CEB3__CTOR_OFFSET UNITYSDK_OFFSET(0xB5792D0)

inline static constexpr unsigned int Class_1_45DC68B964F2CEB3_TypeDefinitionIndex = 56917;

class Class_1_45DC68B964F2CEB3 : public ::System::Object
{
public:
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* _OnStarting_k__BackingField; // 0x10
	::Class_3_3B91E9B720B814BB* Field_1_1; // 0x18
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x20
	::Class_1_630CB84C93B59414* Field_1_3; // 0x28
	::System::String* _AssetName_k__BackingField; // 0x30
	::System::Func_2<::Class_1_630CB84C93B59414*, ::RPG::Client::ExeCode>* Field_1_5; // 0x38
	::Class_1_C6B3B57B6E91674E* Field_1_6; // 0x40
	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* _OnSucceed_k__BackingField; // 0x48
	::Class_0_16E4307DCC419505_616* Field_1_8; // 0x50
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnFailed_k__BackingField; // 0x58
	::Class_2_54CCD44980580DB7* Field_1_10; // 0x60
	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x68
	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x70
	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnItemFailed_k__BackingField; // 0x78
	::System::Int64 _FileSize_k__BackingField; // 0x80
	::System::Int32 _FailureCount_k__BackingField; // 0x88
	::System::Int32 _FinishCount_k__BackingField; // 0x8C
	::System::Int32 _SuccessCount_k__BackingField; // 0x90
	::System::Int32 _TotalCount_k__BackingField; // 0x94
	::RPG::Client::ProgressID _ID_k__BackingField; // 0x98
	::RPG::Client::ByteHash16 _ContentHash_k__BackingField; // 0x9C

	::System::Void _ctor(::RPG::Client::ProgressID a1, ::Class_1_C6B3B57B6E91674E* a2, ::Class_0_16E4307DCC419505_616* a3, ::System::String* a4, ::RPG::Client::ByteHash16 a5, ::System::Int64 a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::Class_1_C6B3B57B6E91674E*, ::Class_0_16E4307DCC419505_616*, ::System::String*, ::RPG::Client::ByteHash16, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void _ctor_1(::RPG::Client::ProgressID a1, ::Class_1_C6B3B57B6E91674E* a2, ::Class_0_16E4307DCC419505_616* a3, ::Class_3_3B91E9B720B814BB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::Class_1_C6B3B57B6E91674E*, ::Class_0_16E4307DCC419505_616*, ::Class_3_3B91E9B720B814BB*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GETTYPENAME_OFFSET))(this);
	}

	::RPG::Client::ProgressID get_ID()
	{
		return ((::RPG::Client::ProgressID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::RPG::Client::ProgressID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ID_OFFSET))(this, a1);
	}

	::Class_1_C6B3B57B6E91674E* get_RootQueue()
	{
		return ((::Class_1_C6B3B57B6E91674E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ROOTQUEUE_OFFSET))(this);
	}

	::System::String* get_AssetName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ASSETNAME_OFFSET))(this);
	}

	::System::Void set_AssetName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ASSETNAME_OFFSET))(this, a1);
	}

	::RPG::Client::ByteHash16 get_ContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_CONTENTHASH_OFFSET))(this);
	}

	::System::Void set_ContentHash(::RPG::Client::ByteHash16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_CONTENTHASH_OFFSET))(this, a1);
	}

	::System::Int64 get_FileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_FILESIZE_OFFSET))(this);
	}

	::System::Void set_FileSize(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_FILESIZE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_615* get_ActionSystem()
	{
		return ((::Class_0_16E4307DCC419505_615*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ACTIONSYSTEM_OFFSET))(this);
	}

	::System::Int32 get_TotalCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_TOTALCOUNT_OFFSET))(this);
	}

	::System::Void set_TotalCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_TOTALCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_SuccessCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_SUCCESSCOUNT_OFFSET))(this);
	}

	::System::Void set_SuccessCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_SUCCESSCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_FailureCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_FAILURECOUNT_OFFSET))(this);
	}

	::System::Void set_FailureCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_FAILURECOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_FinishCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_FINISHCOUNT_OFFSET))(this);
	}

	::System::Void set_FinishCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_FINISHCOUNT_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* get_OnStarting()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONSTARTING_OFFSET))(this);
	}

	::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* get_OnSucceed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONSUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONFAILED_OFFSET))(this);
	}

	::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONFAILED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
	{
		return ((::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONFINISH_OFFSET))(this);
	}

	::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONFINISH_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* get_OnItemStarting()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONITEMSTARTING_OFFSET))(this);
	}

	::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONITEMSTARTING_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* get_OnItemSucceed()
	{
		return ((::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONITEMSUCCEED_OFFSET))(this);
	}

	::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONITEMSUCCEED_OFFSET))(this, a1);
	}

	::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* get_OnItemFailed()
	{
		return ((::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_GET_ONITEMFAILED_OFFSET))(this);
	}

	::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_SET_ONITEMFAILED_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_METHOD_1_C9A3013DD208C696_OFFSET))(this);
	}

	::System::Void UpdateProgress()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_UPDATEPROGRESS_OFFSET))(this);
	}

	::System::Void DoFailed(::Class_2_BF47C01E9CFEA39C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_BF47C01E9CFEA39C*))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_DOFAILED_OFFSET))(this, a1);
	}

	::System::Void DoSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_DOSUCCEED_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DC68B964F2CEB3_TOSTRING_OFFSET))(this);
	}
};
