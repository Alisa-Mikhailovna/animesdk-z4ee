#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C8D1FDF5B7DC671F_Struct_2_337F30C7300DA789.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2BC1F0DE405AE0D4;
class Class_1_483ED67B5E0A21FB;
class Class_1_B87B48EBDCE76E87;
namespace RPG::GameCore { class LevelPedestrianV2RoadInfo; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C8D1FDF5B7DC671F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1ADE30)
#define CLASS_1_C8D1FDF5B7DC671F_GET_ENDCONNECTINTERSECTION_OFFSET UNITYSDK_OFFSET(0xB1B0000)
#define CLASS_1_C8D1FDF5B7DC671F_GET_HASINVISIBLESEGMENT_OFFSET UNITYSDK_OFFSET(0xB1B01A0)
#define CLASS_1_C8D1FDF5B7DC671F_GET_PEDESTRIANMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xB1B0030)
#define CLASS_1_C8D1FDF5B7DC671F_GET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0xB1AFEB0)
#define CLASS_1_C8D1FDF5B7DC671F_GET_POINTENDINDEX_OFFSET UNITYSDK_OFFSET(0xB1AFED0)
#define CLASS_1_C8D1FDF5B7DC671F_GET_POINTSTARTINDEX_OFFSET UNITYSDK_OFFSET(0xB1AFEC0)
#define CLASS_1_C8D1FDF5B7DC671F_GET_ROADINDEX_OFFSET UNITYSDK_OFFSET(0xB1AFEA0)
#define CLASS_1_C8D1FDF5B7DC671F_GET_STARTCONNECTINTERSECTION_OFFSET UNITYSDK_OFFSET(0xB1AFFE0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_030D215FD570A70B_OFFSET UNITYSDK_OFFSET(0xB1AE680)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_07E24CC052E5069D_OFFSET UNITYSDK_OFFSET(0xB1AE480)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0xB1B00A0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_14E13B239161F445_OFFSET UNITYSDK_OFFSET(0xB1AEBE0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_1CADA5369C62138A_OFFSET UNITYSDK_OFFSET(0xB1AE760)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xB1B0020)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_36199BBD14A68CEC_OFFSET UNITYSDK_OFFSET(0xB1AECE0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_3976AB8D58C7574A_OFFSET UNITYSDK_OFFSET(0xB1AF1B0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_3DC4E876FC82175B_OFFSET UNITYSDK_OFFSET(0xB1AEDE0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_3FE8E6950D654AAE_OFFSET UNITYSDK_OFFSET(0xB1AE570)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_5F6398776E49CD87_1_OFFSET UNITYSDK_OFFSET(0xB1AEB80)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_5F6398776E49CD87_OFFSET UNITYSDK_OFFSET(0xB1AFDE0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6B47CDE3B34D5A39_1_OFFSET UNITYSDK_OFFSET(0xB1AE3F0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6B47CDE3B34D5A39_OFFSET UNITYSDK_OFFSET(0xB1AE380)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6CE471172CD2B7AA_OFFSET UNITYSDK_OFFSET(0xB1AF2D0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xB1B0050)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_A1C464B05BB7A5C1_1_OFFSET UNITYSDK_OFFSET(0xB1AFF60)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0xB1AFEE0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_BA1A163457250A51_OFFSET UNITYSDK_OFFSET(0xB1AED70)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_C7BDFA01C81821C0_OFFSET UNITYSDK_OFFSET(0xB1AF010)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D38CD9F4ED9A008E_OFFSET UNITYSDK_OFFSET(0xB1AF630)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D40B9084A09E068D_OFFSET UNITYSDK_OFFSET(0xB1AFA20)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D7DDA895983CCCB2_1_OFFSET UNITYSDK_OFFSET(0xB1AF5E0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D7DDA895983CCCB2_OFFSET UNITYSDK_OFFSET(0xB1AE050)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_E4D7C1998AA82588_OFFSET UNITYSDK_OFFSET(0xB1ADEB0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_F67AB1BEEE56448A_1_OFFSET UNITYSDK_OFFSET(0xB1AE140)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_F67AB1BEEE56448A_2_OFFSET UNITYSDK_OFFSET(0xB1AE1D0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_F67AB1BEEE56448A_3_OFFSET UNITYSDK_OFFSET(0xB1AE260)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_F67AB1BEEE56448A_4_OFFSET UNITYSDK_OFFSET(0xB1AE2F0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_F67AB1BEEE56448A_OFFSET UNITYSDK_OFFSET(0xB1AE0B0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_F8ECF45606EE91F8_OFFSET UNITYSDK_OFFSET(0xB1AFE40)
#define CLASS_1_C8D1FDF5B7DC671F_SET_ENDCONNECTINTERSECTION_OFFSET UNITYSDK_OFFSET(0xB1B0010)
#define CLASS_1_C8D1FDF5B7DC671F_SET_PEDESTRIANMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xB1B0040)
#define CLASS_1_C8D1FDF5B7DC671F_SET_STARTCONNECTINTERSECTION_OFFSET UNITYSDK_OFFSET(0xB1AFFF0)
#define CLASS_1_C8D1FDF5B7DC671F__CTOR_OFFSET UNITYSDK_OFFSET(0xB1AD290)

inline static constexpr unsigned int Class_1_C8D1FDF5B7DC671F_TypeDefinitionIndex = 66208;

class Class_1_C8D1FDF5B7DC671F : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::Class_1_483ED67B5E0A21FB* Field_1_2; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_1_B87B48EBDCE76E87*>* Field_1_3; // 0x18
	::RPG::GameCore::LevelPedestrianV2RoadInfo* Field_1_4; // 0x20
	::Class_1_2BC1F0DE405AE0D4* _StartConnectIntersection_k__BackingField; // 0x28
	::Class_1_2BC1F0DE405AE0D4* _EndConnectIntersection_k__BackingField; // 0x30
	::Il2CppArray<::Class_1_C8D1FDF5B7DC671F_Struct_2_337F30C7300DA789>* Field_1_7; // 0x38
	::UnityEngine::GameObject* Field_1_8; // 0x40
	::System::Int32 _PedestrianMaxCount_k__BackingField; // 0x48
	::System::Int32 _RoadIndex_k__BackingField; // 0x4C
	::System::Int32 _PointStartIndex_k__BackingField; // 0x50
	::System::Int32 _PointCount_k__BackingField; // 0x54
	::System::Boolean _HasInvisibleSegment_k__BackingField; // 0x58
	::System::Int32 _PointEndIndex_k__BackingField; // 0x5C

	::System::Void _ctor(::Class_1_483ED67B5E0A21FB* a1, ::RPG::GameCore::LevelPedestrianV2RoadInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_483ED67B5E0A21FB*, ::RPG::GameCore::LevelPedestrianV2RoadInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_1_E4D7C1998AA82588()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_E4D7C1998AA82588_OFFSET))(this);
	}

	::System::Boolean Method_1_D7DDA895983CCCB2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D7DDA895983CCCB2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_F67AB1BEEE56448A(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_F67AB1BEEE56448A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_F67AB1BEEE56448A_1(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_F67AB1BEEE56448A_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_F67AB1BEEE56448A_2(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_F67AB1BEEE56448A_2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_F67AB1BEEE56448A_3(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_F67AB1BEEE56448A_3_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_F67AB1BEEE56448A_4(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_F67AB1BEEE56448A_4_OFFSET))(this, a1);
	}

	::System::Single Method_1_6B47CDE3B34D5A39(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6B47CDE3B34D5A39_OFFSET))(this, a1);
	}

	::System::Single Method_1_6B47CDE3B34D5A39_1(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6B47CDE3B34D5A39_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_07E24CC052E5069D(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_07E24CC052E5069D_OFFSET))(this, a1);
	}

	::System::Single Method_1_3FE8E6950D654AAE(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_3FE8E6950D654AAE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_030D215FD570A70B(::System::Int32 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_030D215FD570A70B_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_1CADA5369C62138A(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_1CADA5369C62138A_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Quaternion Method_1_14E13B239161F445(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_14E13B239161F445_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_36199BBD14A68CEC(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_36199BBD14A68CEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA1A163457250A51(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_BA1A163457250A51_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DC4E876FC82175B(::System::Int32 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_3DC4E876FC82175B_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_C7BDFA01C81821C0(::Struct_2_085541A9CFF64383 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_C7BDFA01C81821C0_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_3976AB8D58C7574A(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_3976AB8D58C7574A_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_6CE471172CD2B7AA(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6CE471172CD2B7AA_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_D7DDA895983CCCB2_1(::System::Boolean a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D7DDA895983CCCB2_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D38CD9F4ED9A008E(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D38CD9F4ED9A008E_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_D40B9084A09E068D(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D40B9084A09E068D_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_5F6398776E49CD87(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_5F6398776E49CD87_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_5F6398776E49CD87_1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_5F6398776E49CD87_1_OFFSET))(this, a1, a2);
	}

	::Class_1_2BC1F0DE405AE0D4* Method_1_F8ECF45606EE91F8(::System::Boolean a1)
	{
		return ((::Class_1_2BC1F0DE405AE0D4*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_F8ECF45606EE91F8_OFFSET))(this, a1);
	}

	::System::Int32 get_RoadIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_ROADINDEX_OFFSET))(this);
	}

	::System::Int32 get_PointCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_POINTCOUNT_OFFSET))(this);
	}

	::System::Int32 get_PointStartIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_POINTSTARTINDEX_OFFSET))(this);
	}

	::System::Int32 get_PointEndIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_POINTENDINDEX_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_A1C464B05BB7A5C1_1_OFFSET))(this);
	}

	::Class_1_2BC1F0DE405AE0D4* get_StartConnectIntersection()
	{
		return ((::Class_1_2BC1F0DE405AE0D4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_STARTCONNECTINTERSECTION_OFFSET))(this);
	}

	::System::Void set_StartConnectIntersection(::Class_1_2BC1F0DE405AE0D4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2BC1F0DE405AE0D4*))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_SET_STARTCONNECTINTERSECTION_OFFSET))(this, a1);
	}

	::Class_1_2BC1F0DE405AE0D4* get_EndConnectIntersection()
	{
		return ((::Class_1_2BC1F0DE405AE0D4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_ENDCONNECTINTERSECTION_OFFSET))(this);
	}

	::System::Void set_EndConnectIntersection(::Class_1_2BC1F0DE405AE0D4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2BC1F0DE405AE0D4*))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_SET_ENDCONNECTINTERSECTION_OFFSET))(this, a1);
	}

	::Class_1_483ED67B5E0A21FB* Method_1_24748FC20F375725()
	{
		return ((::Class_1_483ED67B5E0A21FB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Int32 get_PedestrianMaxCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_PEDESTRIANMAXCOUNT_OFFSET))(this);
	}

	::System::Void set_PedestrianMaxCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_SET_PEDESTRIANMAXCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Single Method_1_124E7DAB85EAFECD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_124E7DAB85EAFECD_OFFSET))(this);
	}

	::System::Boolean get_HasInvisibleSegment()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_HASINVISIBLESEGMENT_OFFSET))(this);
	}
};
