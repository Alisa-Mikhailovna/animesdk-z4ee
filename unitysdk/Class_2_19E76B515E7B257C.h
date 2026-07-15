#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/WaypathUsageType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9795F001685B3C12;
class Class_1_A0E178FC9445316D;
namespace RPG::Client { class Map; }
namespace RPG::GameCore { class AIPathwayInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_19E76B515E7B257C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6247F0)
#define CLASS_2_19E76B515E7B257C_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0xB6263B0)
#define CLASS_2_19E76B515E7B257C_METHOD_2_035FB158DFFE82E3_OFFSET UNITYSDK_OFFSET(0xB625520)
#define CLASS_2_19E76B515E7B257C_METHOD_2_075CE3821DA07ADF_OFFSET UNITYSDK_OFFSET(0xB625320)
#define CLASS_2_19E76B515E7B257C_METHOD_2_302CA4E328D1DD69_OFFSET UNITYSDK_OFFSET(0xB624970)
#define CLASS_2_19E76B515E7B257C_METHOD_2_336120EF642DC4EA_OFFSET UNITYSDK_OFFSET(0xB624D70)
#define CLASS_2_19E76B515E7B257C_METHOD_2_4E1EEF4BC68D03C0_OFFSET UNITYSDK_OFFSET(0xB624C60)
#define CLASS_2_19E76B515E7B257C_METHOD_2_53FBD05DF054F77A_OFFSET UNITYSDK_OFFSET(0xB6251F0)
#define CLASS_2_19E76B515E7B257C_METHOD_2_557C45505559DFED_1_OFFSET UNITYSDK_OFFSET(0xB624F40)
#define CLASS_2_19E76B515E7B257C_METHOD_2_557C45505559DFED_OFFSET UNITYSDK_OFFSET(0xB625E40)
#define CLASS_2_19E76B515E7B257C_METHOD_2_68248FB1DCF2D94D_OFFSET UNITYSDK_OFFSET(0xB6256C0)
#define CLASS_2_19E76B515E7B257C_METHOD_2_A8E9E4E48612ABFD_OFFSET UNITYSDK_OFFSET(0xB6250B0)
#define CLASS_2_19E76B515E7B257C_METHOD_2_AE76F9FE978AD9ED_OFFSET UNITYSDK_OFFSET(0xB624890)
#define CLASS_2_19E76B515E7B257C_METHOD_2_BBCFE9CEEE727C9B_OFFSET UNITYSDK_OFFSET(0xB624FF0)
#define CLASS_2_19E76B515E7B257C_METHOD_2_BDD17ADDEF3F1F3E_OFFSET UNITYSDK_OFFSET(0xB624D00)
#define CLASS_2_19E76B515E7B257C_METHOD_2_C22B805882144C0C_OFFSET UNITYSDK_OFFSET(0xB625EF0)
#define CLASS_2_19E76B515E7B257C_METHOD_2_E4F997D0AA9ED0DC_OFFSET UNITYSDK_OFFSET(0xB625F30)
#define CLASS_2_19E76B515E7B257C_METHOD_2_E5212F5B9CBB6229_OFFSET UNITYSDK_OFFSET(0xB624B60)
#define CLASS_2_19E76B515E7B257C_METHOD_2_F04A5FDAB04749EB_OFFSET UNITYSDK_OFFSET(0xB625C30)
#define CLASS_2_19E76B515E7B257C__CTOR_OFFSET UNITYSDK_OFFSET(0xB624710)

inline static constexpr unsigned int Class_2_19E76B515E7B257C_TypeDefinitionIndex = 54990;

class Class_2_19E76B515E7B257C : public ::RPG::GameCore::GameComponentBase
{
public:
	::Il2CppArray<::RPG::GameCore::AIPathwayInfo*>* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::Class_1_9795F001685B3C12*>* Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::System::Boolean>* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_AE76F9FE978AD9ED(::Il2CppArray<::RPG::GameCore::AIPathwayInfo*>* a1, ::System::UInt32 a2, ::RPG::Client::Map* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AIPathwayInfo*>*, ::System::UInt32, ::RPG::Client::Map*))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_AE76F9FE978AD9ED_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_302CA4E328D1DD69(::RPG::GameCore::WaypathUsageType a1, ::RPG::GameCore::AIPathwayInfo* a2, ::RPG::Client::Map* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaypathUsageType, ::RPG::GameCore::AIPathwayInfo*, ::RPG::Client::Map*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_302CA4E328D1DD69_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E5212F5B9CBB6229(::RPG::GameCore::WaypathUsageType a1, ::Class_1_9795F001685B3C12* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaypathUsageType, ::Class_1_9795F001685B3C12*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_E5212F5B9CBB6229_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4E1EEF4BC68D03C0(::RPG::GameCore::WaypathUsageType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaypathUsageType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_4E1EEF4BC68D03C0_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AIPathwayInfo* Method_2_BDD17ADDEF3F1F3E(::System::Int32 a1)
	{
		return ((::RPG::GameCore::AIPathwayInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_BDD17ADDEF3F1F3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_336120EF642DC4EA(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_336120EF642DC4EA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BBCFE9CEEE727C9B(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_BBCFE9CEEE727C9B_OFFSET))(this, a1);
	}

	::Class_1_A0E178FC9445316D* Method_2_A8E9E4E48612ABFD(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::Class_1_A0E178FC9445316D*(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_A8E9E4E48612ABFD_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_53FBD05DF054F77A(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_53FBD05DF054F77A_OFFSET))(this, a1);
	}

	::System::Void Method_2_075CE3821DA07ADF(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_075CE3821DA07ADF_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_68248FB1DCF2D94D(::RPG::GameCore::WaypathUsageType a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::WaypathUsageType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_68248FB1DCF2D94D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_035FB158DFFE82E3(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_035FB158DFFE82E3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F04A5FDAB04749EB(::RPG::GameCore::WaypathUsageType a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::WaypathUsageType, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_F04A5FDAB04749EB_OFFSET))(this, a1, a2);
	}

	::Class_1_9795F001685B3C12* Method_2_557C45505559DFED(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::Class_1_9795F001685B3C12*(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_557C45505559DFED_OFFSET))(this, a1);
	}

	::Class_1_9795F001685B3C12* Method_2_557C45505559DFED_1(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::Class_1_9795F001685B3C12*(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_557C45505559DFED_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::Class_1_9795F001685B3C12*>* Method_2_C22B805882144C0C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::Class_1_9795F001685B3C12*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_C22B805882144C0C_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_E4F997D0AA9ED0DC(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_E4F997D0AA9ED0DC_OFFSET))(this, a1);
	}

	::System::Void Method_2_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_022B0D58A3077BF2_OFFSET))(this, a1);
	}
};
