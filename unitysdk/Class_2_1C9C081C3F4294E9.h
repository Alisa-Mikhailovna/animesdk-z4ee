#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1C9C081C3F4294E9_MapRotationChargerState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_425;
class Class_2_36C95D73718D07B1;
class Class_2_5AC0D8B32AD9BFBE;
namespace EffectPlugin { class Effect_CustomFollowPlugin; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginPerformEventListener; }
namespace RPG::GameCore { class ButtonListTrigger; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1C9C081C3F4294E9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDEAF8F0)
#define CLASS_2_1C9C081C3F4294E9_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xDEB1C00)
#define CLASS_2_1C9C081C3F4294E9_GET_HASINTERACTHANDLER_OFFSET UNITYSDK_OFFSET(0xDEB1C40)
#define CLASS_2_1C9C081C3F4294E9_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xDEB1C20)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_2237E87C818A2F03_OFFSET UNITYSDK_OFFSET(0xDEB19B0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_23F0BB339AE0DA73_OFFSET UNITYSDK_OFFSET(0xDEAFAA0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_29B59CE7CCC63C04_OFFSET UNITYSDK_OFFSET(0xDEB0630)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_31B86CF031D1C6B2_OFFSET UNITYSDK_OFFSET(0xDEB0A60)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_3B306F16BF78C1C7_OFFSET UNITYSDK_OFFSET(0xDEB0390)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_40E03D354D1ACC85_OFFSET UNITYSDK_OFFSET(0xDEB0C90)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0xDEB01F0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_678E34F4DDA7F1E1_OFFSET UNITYSDK_OFFSET(0xDEB1BA0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_78C62398E94F0FB1_OFFSET UNITYSDK_OFFSET(0xDEB0EF0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_8211A24C45A16D43_OFFSET UNITYSDK_OFFSET(0xDEB1880)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_8E89BE9866A768ED_OFFSET UNITYSDK_OFFSET(0xDEAFD10)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0xDEB03F0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0xDEB12B0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_983BE009C423EFE5_OFFSET UNITYSDK_OFFSET(0xDEAF7A0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_9F413F19872C3432_OFFSET UNITYSDK_OFFSET(0xDEAFC60)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_A76A07E68FFF9CDC_OFFSET UNITYSDK_OFFSET(0xDEAF6F0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xDEB0E70)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_C5325FA2E0D39092_OFFSET UNITYSDK_OFFSET(0xDEB00B0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0xDEAF330)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_E24C0FFD2F80EEBC_OFFSET UNITYSDK_OFFSET(0xDEAFBB0)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_EA53757A85D2A947_OFFSET UNITYSDK_OFFSET(0xDEB0A10)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_EAEB1D4D15F25F77_OFFSET UNITYSDK_OFFSET(0xDEB1460)
#define CLASS_2_1C9C081C3F4294E9_METHOD_2_F9992ED74E58A98D_OFFSET UNITYSDK_OFFSET(0xDEB1050)
#define CLASS_2_1C9C081C3F4294E9_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xDEB1C10)
#define CLASS_2_1C9C081C3F4294E9_SET_HASINTERACTHANDLER_OFFSET UNITYSDK_OFFSET(0xDEB1C50)
#define CLASS_2_1C9C081C3F4294E9_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xDEB1C30)
#define CLASS_2_1C9C081C3F4294E9__CTOR_OFFSET UNITYSDK_OFFSET(0xDEB1C60)

inline static constexpr unsigned int Class_2_1C9C081C3F4294E9_TypeDefinitionIndex = 54745;

class Class_2_1C9C081C3F4294E9 : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_2_36C95D73718D07B1* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::RPG::GameCore::ColliderTriggerComponent* Field_2_3; // 0x28
	::System::String* Field_2_4; // 0x30
	::RPG::GameCore::PropComponent* Field_2_5; // 0x38
	::RPG::Client::MapPropDef* Field_2_6; // 0x40
	::System::String* Field_2_7; // 0x48
	::System::String* Field_2_8; // 0x50
	::RPG::GameCore::ButtonListTrigger* Field_2_9; // 0x58
	::System::Action_1<::Class_2_1C9C081C3F4294E9_MapRotationChargerState>* Field_2_10; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* Field_2_11; // 0x68
	::System::String* Field_2_12; // 0x70
	::System::String* Field_2_13; // 0x78
	::RPG::Client::MapRotationInfo* Field_2_14; // 0x80
	::System::String* Field_2_15; // 0x88
	::Class_2_5AC0D8B32AD9BFBE* Field_2_16; // 0x90
	::System::String* Field_2_17; // 0x98
	::System::String* Field_2_18; // 0xA0
	::RPG::Client::MapDef* Field_2_19; // 0xA8
	::System::Boolean _HasInteractHandler_k__BackingField; // 0xB0
	::System::UInt32 _InstanceID_k__BackingField; // 0xB4
	::RPG::Client::TextID Field_2_22; // 0xB8
	::RPG::Client::TextID Field_2_23; // 0xC8
	::System::UInt32 _GroupID_k__BackingField; // 0xD8
	::System::UInt32 Field_2_25; // 0xDC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_23F0BB339AE0DA73(::Class_2_1C9C081C3F4294E9_MapRotationChargerState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1C9C081C3F4294E9_MapRotationChargerState))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_23F0BB339AE0DA73_OFFSET))(this, a1);
	}

	::System::Void Method_2_C5325FA2E0D39092(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_C5325FA2E0D39092_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_3B306F16BF78C1C7(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_3B306F16BF78C1C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29B59CE7CCC63C04(::System::String* a1, ::RPG::Client::TextID a2, ::RPG::Client::TextID a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_29B59CE7CCC63C04_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EA53757A85D2A947(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_EA53757A85D2A947_OFFSET))(this, a1);
	}

	::System::Void Method_2_31B86CF031D1C6B2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_31B86CF031D1C6B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_40E03D354D1ACC85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_40E03D354D1ACC85_OFFSET))(this);
	}

	::System::Void Method_2_F9992ED74E58A98D(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_F9992ED74E58A98D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_97889423B3D78768_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_EAEB1D4D15F25F77(::RPG::Client::MonoEffect* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_EAEB1D4D15F25F77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8211A24C45A16D43(::EffectPlugin::Effect_CustomFollowPlugin* a1, ::RPG::Client::MonoEffectPluginPerformEventListener* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::EffectPlugin::Effect_CustomFollowPlugin*, ::RPG::Client::MonoEffectPluginPerformEventListener*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_8211A24C45A16D43_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_A76A07E68FFF9CDC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_A76A07E68FFF9CDC_OFFSET))(this);
	}

	::System::Void Method_2_2237E87C818A2F03(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_2237E87C818A2F03_OFFSET))(this, a1);
	}

	::System::Void Method_2_983BE009C423EFE5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_983BE009C423EFE5_OFFSET))(this);
	}

	::System::Void Method_2_678E34F4DDA7F1E1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_678E34F4DDA7F1E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_57F015DFC718ABA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_57F015DFC718ABA3_OFFSET))(this);
	}

	::System::Void Method_2_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_9765352E01408D38_OFFSET))(this);
	}

	::System::Void Method_2_78C62398E94F0FB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_78C62398E94F0FB1_OFFSET))(this);
	}

	::System::Void Method_2_8E89BE9866A768ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_8E89BE9866A768ED_OFFSET))(this);
	}

	::Class_2_1C9C081C3F4294E9_MapRotationChargerState Method_2_E24C0FFD2F80EEBC()
	{
		return ((::Class_2_1C9C081C3F4294E9_MapRotationChargerState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_E24C0FFD2F80EEBC_OFFSET))(this);
	}

	::System::Void Method_2_9F413F19872C3432(::Class_2_1C9C081C3F4294E9_MapRotationChargerState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1C9C081C3F4294E9_MapRotationChargerState))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_METHOD_2_9F413F19872C3432_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_SET_GROUPID_OFFSET))(this, a1);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_SET_INSTANCEID_OFFSET))(this, a1);
	}

	::System::Boolean get_HasInteractHandler()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_GET_HASINTERACTHANDLER_OFFSET))(this);
	}

	::System::Void set_HasInteractHandler(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1C9C081C3F4294E9_SET_HASINTERACTHANDLER_OFFSET))(this, a1);
	}
};
