#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_26B93FFBE9FAEBB7_GET_CENTERSTYLE_OFFSET UNITYSDK_OFFSET(0x15254660)
#define CLASS_1_26B93FFBE9FAEBB7_GET_CURCOUNT_OFFSET UNITYSDK_OFFSET(0x15254720)
#define CLASS_1_26B93FFBE9FAEBB7_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x15254640)
#define CLASS_1_26B93FFBE9FAEBB7_GET_CUSTOMCHANGEEFFCOLORSTR_OFFSET UNITYSDK_OFFSET(0x152547C0)
#define CLASS_1_26B93FFBE9FAEBB7_GET_CUSTOMFILLCOLORSTR_OFFSET UNITYSDK_OFFSET(0x152547A0)
#define CLASS_1_26B93FFBE9FAEBB7_GET_CUSTOMPREFABPATH_OFFSET UNITYSDK_OFFSET(0x152546C0)
#define CLASS_1_26B93FFBE9FAEBB7_GET_CUSTOMPROGRESSCOLORSTR_OFFSET UNITYSDK_OFFSET(0x15254780)
#define CLASS_1_26B93FFBE9FAEBB7_GET_ENERGYBARTYPE_OFFSET UNITYSDK_OFFSET(0x152545E0)
#define CLASS_1_26B93FFBE9FAEBB7_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x15254680)
#define CLASS_1_26B93FFBE9FAEBB7_GET_ID_OFFSET UNITYSDK_OFFSET(0x152545C0)
#define CLASS_1_26B93FFBE9FAEBB7_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x15254600)
#define CLASS_1_26B93FFBE9FAEBB7_GET_ISENABLESELECTEDSTATE_OFFSET UNITYSDK_OFFSET(0x15254620)
#define CLASS_1_26B93FFBE9FAEBB7_GET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x15254700)
#define CLASS_1_26B93FFBE9FAEBB7_GET_NUMCOLORSTR_OFFSET UNITYSDK_OFFSET(0x15254760)
#define CLASS_1_26B93FFBE9FAEBB7_GET_SHOWCOUNT_OFFSET UNITYSDK_OFFSET(0x15254740)
#define CLASS_1_26B93FFBE9FAEBB7_GET_SPECIALEFFPATH_OFFSET UNITYSDK_OFFSET(0x152546E0)
#define CLASS_1_26B93FFBE9FAEBB7_GET_TRIGGERNAME_OFFSET UNITYSDK_OFFSET(0x152546A0)
#define CLASS_1_26B93FFBE9FAEBB7_SET_CENTERSTYLE_OFFSET UNITYSDK_OFFSET(0x15254670)
#define CLASS_1_26B93FFBE9FAEBB7_SET_CURCOUNT_OFFSET UNITYSDK_OFFSET(0x15254730)
#define CLASS_1_26B93FFBE9FAEBB7_SET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x15254650)
#define CLASS_1_26B93FFBE9FAEBB7_SET_CUSTOMCHANGEEFFCOLORSTR_OFFSET UNITYSDK_OFFSET(0x152547D0)
#define CLASS_1_26B93FFBE9FAEBB7_SET_CUSTOMFILLCOLORSTR_OFFSET UNITYSDK_OFFSET(0x152547B0)
#define CLASS_1_26B93FFBE9FAEBB7_SET_CUSTOMPREFABPATH_OFFSET UNITYSDK_OFFSET(0x152546D0)
#define CLASS_1_26B93FFBE9FAEBB7_SET_CUSTOMPROGRESSCOLORSTR_OFFSET UNITYSDK_OFFSET(0x15254790)
#define CLASS_1_26B93FFBE9FAEBB7_SET_ENERGYBARTYPE_OFFSET UNITYSDK_OFFSET(0x152545F0)
#define CLASS_1_26B93FFBE9FAEBB7_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x15254690)
#define CLASS_1_26B93FFBE9FAEBB7_SET_ID_OFFSET UNITYSDK_OFFSET(0x152545D0)
#define CLASS_1_26B93FFBE9FAEBB7_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x15254610)
#define CLASS_1_26B93FFBE9FAEBB7_SET_ISENABLESELECTEDSTATE_OFFSET UNITYSDK_OFFSET(0x15254630)
#define CLASS_1_26B93FFBE9FAEBB7_SET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x15254710)
#define CLASS_1_26B93FFBE9FAEBB7_SET_NUMCOLORSTR_OFFSET UNITYSDK_OFFSET(0x15254770)
#define CLASS_1_26B93FFBE9FAEBB7_SET_SHOWCOUNT_OFFSET UNITYSDK_OFFSET(0x15254750)
#define CLASS_1_26B93FFBE9FAEBB7_SET_SPECIALEFFPATH_OFFSET UNITYSDK_OFFSET(0x152546F0)
#define CLASS_1_26B93FFBE9FAEBB7_SET_TRIGGERNAME_OFFSET UNITYSDK_OFFSET(0x152546B0)
#define CLASS_1_26B93FFBE9FAEBB7__CTOR_OFFSET UNITYSDK_OFFSET(0x152547E0)

inline static constexpr unsigned int Class_1_26B93FFBE9FAEBB7_TypeDefinitionIndex = 76051;

class Class_1_26B93FFBE9FAEBB7 : public ::System::Object
{
public:
	::System::String* _CustomPrefabPath_k__BackingField; // 0x10
	::System::String* _CustomChangeEffColorStr_k__BackingField; // 0x18
	::System::String* _IconPath_k__BackingField; // 0x20
	::System::String* _TriggerName_k__BackingField; // 0x28
	::System::String* _CustomProgressColorStr_k__BackingField; // 0x30
	::System::String* _NumColorStr_k__BackingField; // 0x38
	::System::String* _SpecialEffPath_k__BackingField; // 0x40
	::System::String* _CustomFillColorStr_k__BackingField; // 0x48
	::RPG::GameCore::FixPoint _CurCount_k__BackingField; // 0x50
	::System::Boolean _IsActive_k__BackingField; // 0x58
	::System::Boolean _IsEnableSelectedState_k__BackingField; // 0x59
	::RPG::GameCore::EnergyBarState _CurState_k__BackingField; // 0x5C
	::RPG::GameCore::FixPoint _ShowCount_k__BackingField; // 0x60
	::System::Int32 _CenterStyle_k__BackingField; // 0x68
	::System::UInt32 _ID_k__BackingField; // 0x6C
	::RPG::GameCore::FixPoint _MaxCount_k__BackingField; // 0x70
	::RPG::GameCore::MonsterEnergyBarType _EnergyBarType_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_ID_OFFSET))(this, a1);
	}

	::RPG::GameCore::MonsterEnergyBarType get_EnergyBarType()
	{
		return ((::RPG::GameCore::MonsterEnergyBarType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_ENERGYBARTYPE_OFFSET))(this);
	}

	::System::Void set_EnergyBarType(::RPG::GameCore::MonsterEnergyBarType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterEnergyBarType))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_ENERGYBARTYPE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_ISACTIVE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsEnableSelectedState()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_ISENABLESELECTEDSTATE_OFFSET))(this);
	}

	::System::Void set_IsEnableSelectedState(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_ISENABLESELECTEDSTATE_OFFSET))(this, a1);
	}

	::RPG::GameCore::EnergyBarState get_CurState()
	{
		return ((::RPG::GameCore::EnergyBarState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_CURSTATE_OFFSET))(this);
	}

	::System::Void set_CurState(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_CURSTATE_OFFSET))(this, a1);
	}

	::System::Int32 get_CenterStyle()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_CENTERSTYLE_OFFSET))(this);
	}

	::System::Void set_CenterStyle(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_CENTERSTYLE_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_TriggerName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_TRIGGERNAME_OFFSET))(this);
	}

	::System::Void set_TriggerName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_TRIGGERNAME_OFFSET))(this, a1);
	}

	::System::String* get_CustomPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_CUSTOMPREFABPATH_OFFSET))(this);
	}

	::System::Void set_CustomPrefabPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_CUSTOMPREFABPATH_OFFSET))(this, a1);
	}

	::System::String* get_SpecialEffPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_SPECIALEFFPATH_OFFSET))(this);
	}

	::System::Void set_SpecialEffPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_SPECIALEFFPATH_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MaxCount()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_MAXCOUNT_OFFSET))(this);
	}

	::System::Void set_MaxCount(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_MAXCOUNT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_CurCount()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_CURCOUNT_OFFSET))(this);
	}

	::System::Void set_CurCount(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_CURCOUNT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_ShowCount()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_SHOWCOUNT_OFFSET))(this);
	}

	::System::Void set_ShowCount(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_SHOWCOUNT_OFFSET))(this, a1);
	}

	::System::String* get_NumColorStr()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_NUMCOLORSTR_OFFSET))(this);
	}

	::System::Void set_NumColorStr(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_NUMCOLORSTR_OFFSET))(this, a1);
	}

	::System::String* get_CustomProgressColorStr()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_CUSTOMPROGRESSCOLORSTR_OFFSET))(this);
	}

	::System::Void set_CustomProgressColorStr(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_CUSTOMPROGRESSCOLORSTR_OFFSET))(this, a1);
	}

	::System::String* get_CustomFillColorStr()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_CUSTOMFILLCOLORSTR_OFFSET))(this);
	}

	::System::Void set_CustomFillColorStr(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_CUSTOMFILLCOLORSTR_OFFSET))(this, a1);
	}

	::System::String* get_CustomChangeEffColorStr()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_CUSTOMCHANGEEFFCOLORSTR_OFFSET))(this);
	}

	::System::Void set_CustomChangeEffColorStr(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_CUSTOMCHANGEEFFCOLORSTR_OFFSET))(this, a1);
	}
};
