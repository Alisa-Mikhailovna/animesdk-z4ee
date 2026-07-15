#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
namespace CriWare { class CriManaMovieController; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class PlayVideoSequence; }
namespace RPG::GameCore { class VideoSequenceItem; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_18EAC247268E01AB_OFFSET UNITYSDK_OFFSET(0xBD564B0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_23C3681AC9E5D438_OFFSET UNITYSDK_OFFSET(0xBD56B10)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_343AEC10F51D93D4_OFFSET UNITYSDK_OFFSET(0xBD56FB0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_4021FBCAADF57CEB_OFFSET UNITYSDK_OFFSET(0xBD56400)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xBD55770)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0xBD55640)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_4C7C0C356764D132_OFFSET UNITYSDK_OFFSET(0xBD55C00)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xBD55080)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xBD56A90)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_68DE647BC0AFC803_OFFSET UNITYSDK_OFFSET(0xBD56C80)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0xBD56820)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0xBD54C90)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0xBD56570)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_834FC35654ED968C_OFFSET UNITYSDK_OFFSET(0xBD55A00)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_97965634D89B0F68_OFFSET UNITYSDK_OFFSET(0xBD56D20)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0xBD55A50)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_AA169839CB93802A_1_OFFSET UNITYSDK_OFFSET(0xBD56EB0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xBD551F0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0xBD55DF0)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xBD55300)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xBD55870)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xBD55720)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_ED333790C08F48DA_OFFSET UNITYSDK_OFFSET(0xBD55D60)
#define CLASS_1_0A58DDD24CA46B3B_METHOD_1_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0xBD55530)
#define CLASS_1_0A58DDD24CA46B3B__CTOR_OFFSET UNITYSDK_OFFSET(0xBD54BB0)
#define CLASS_1_0A58DDD24CA46B3B__ONVIDEOBEGIN_B__46_0_OFFSET UNITYSDK_OFFSET(0xBD57270)
#define CLASS_1_0A58DDD24CA46B3B__ONVIDEOBEGIN_B__46_1_OFFSET UNITYSDK_OFFSET(0xBD57280)
#define CLASS_1_0A58DDD24CA46B3B__WAITRESTARTPLAYVIDEO_B__37_0_OFFSET UNITYSDK_OFFSET(0xBD57250)

inline static constexpr unsigned int Class_1_0A58DDD24CA46B3B_TypeDefinitionIndex = 69864;

class Class_1_0A58DDD24CA46B3B : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x2; // 0x0
	::RPG::Client::OpenWorld::StreamingItemData* Field_1_1; // 0x10
	::CriWare::CriManaMovieController* Field_1_2; // 0x18
	::CriWare::CriManaMovieController* Field_1_3; // 0x20
	::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*>* Field_1_4; // 0x28
	::UnityEngine::Coroutine* Field_1_5; // 0x30
	::Il2CppArray<::CriWare::CriManaMovieController*>* Field_1_6; // 0x38
	::RPG::GameCore::PlayVideoSequence* Field_1_7; // 0x40
	::UnityEngine::MeshRenderer* Field_1_8; // 0x48
	::UnityEngine::GameObject* Field_1_9; // 0x50
	::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean>* Field_1_10; // 0x58
	::UnityEngine::Coroutine* Field_1_11; // 0x60
	::System::UInt32 Field_1_12; // 0x68
	::System::Int32 Field_1_13; // 0x6C
	::CriWare::CriMana::Player_Status Field_1_14; // 0x70
	::System::UInt32 Field_1_15; // 0x74
	::System::Int32 Field_1_16; // 0x78
	::System::Int32 Field_1_17; // 0x7C
	::System::Boolean Field_1_18; // 0x80
	::System::Boolean Field_1_19; // 0x81
	::System::Boolean Field_1_20; // 0x82
	::System::Int32 Field_1_21; // 0x84
	::System::Int32 Field_1_22; // 0x88

	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::PlayVideoSequence* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_FD7514C64FB1B043_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_1_834FC35654ED968C(::RPG::GameCore::PlayVideoSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_834FC35654ED968C_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C7C0C356764D132(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_4C7C0C356764D132_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_ED333790C08F48DA(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_ED333790C08F48DA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4021FBCAADF57CEB(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_4021FBCAADF57CEB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_18EAC247268E01AB(::UnityEngine::MeshRenderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_18EAC247268E01AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Void Method_1_23C3681AC9E5D438()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_23C3681AC9E5D438_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_68DE647BC0AFC803(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_68DE647BC0AFC803_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_97965634D89B0F68(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_97965634D89B0F68_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_1_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_AB88190D695EBEA9_OFFSET))(this);
	}

	::System::Void Method_1_343AEC10F51D93D4(::RPG::GameCore::VideoSequenceItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VideoSequenceItem*))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_343AEC10F51D93D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA169839CB93802A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B_METHOD_1_AA169839CB93802A_1_OFFSET))(this);
	}

	::System::Boolean _WaitReStartPlayVideo_b__37_0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B__WAITRESTARTPLAYVIDEO_B__37_0_OFFSET))(this);
	}

	::System::Void _OnVideoBegin_b__46_0(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B__ONVIDEOBEGIN_B__46_0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _OnVideoBegin_b__46_1(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0A58DDD24CA46B3B__ONVIDEOBEGIN_B__46_1_OFFSET))(this, a1, a2, a3);
	}
};
