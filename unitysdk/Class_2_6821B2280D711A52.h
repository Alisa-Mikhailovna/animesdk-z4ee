#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/NativeString.h"

class Class_2_A48F3719AA1CF200_31;
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_6821B2280D711A52_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15580470)
#define CLASS_2_6821B2280D711A52_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15580590)
#define CLASS_2_6821B2280D711A52_METHOD_2_090BCD9BFCD6DFF8_OFFSET UNITYSDK_OFFSET(0x1557E660)
#define CLASS_2_6821B2280D711A52_METHOD_2_16323FC6A31C6693_OFFSET UNITYSDK_OFFSET(0x15577E30)
#define CLASS_2_6821B2280D711A52_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1557FB40)
#define CLASS_2_6821B2280D711A52_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1557F850)
#define CLASS_2_6821B2280D711A52_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1557E470)
#define CLASS_2_6821B2280D711A52_METHOD_2_1EFC5A8A94CA6BE7_OFFSET UNITYSDK_OFFSET(0x1557E140)
#define CLASS_2_6821B2280D711A52_METHOD_2_21C77EE697523F65_OFFSET UNITYSDK_OFFSET(0x1557D330)
#define CLASS_2_6821B2280D711A52_METHOD_2_28E79F620B30B422_OFFSET UNITYSDK_OFFSET(0x1557F9B0)
#define CLASS_2_6821B2280D711A52_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1557C980)
#define CLASS_2_6821B2280D711A52_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1557FAF0)
#define CLASS_2_6821B2280D711A52_METHOD_2_3E2ADB487A34BD2D_OFFSET UNITYSDK_OFFSET(0x1557CCC0)
#define CLASS_2_6821B2280D711A52_METHOD_2_4ECA7EC0FAA68570_OFFSET UNITYSDK_OFFSET(0x1557FD10)
#define CLASS_2_6821B2280D711A52_METHOD_2_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x1557E4D0)
#define CLASS_2_6821B2280D711A52_METHOD_2_6D5F59BCE8B4A09A_OFFSET UNITYSDK_OFFSET(0x1557FA50)
#define CLASS_2_6821B2280D711A52_METHOD_2_73C23613314BF1A1_OFFSET UNITYSDK_OFFSET(0x1557E260)
#define CLASS_2_6821B2280D711A52_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x1557C610)
#define CLASS_2_6821B2280D711A52_METHOD_2_7DD84EAFF333A1E4_1_OFFSET UNITYSDK_OFFSET(0x1557CF70)
#define CLASS_2_6821B2280D711A52_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x1557CF20)
#define CLASS_2_6821B2280D711A52_METHOD_2_809818D33F5A75DB_OFFSET UNITYSDK_OFFSET(0x1557AE00)
#define CLASS_2_6821B2280D711A52_METHOD_2_9056A82E3B7BB01B_OFFSET UNITYSDK_OFFSET(0x1557D150)
#define CLASS_2_6821B2280D711A52_METHOD_2_AA7E7D1E175DAB81_1_OFFSET UNITYSDK_OFFSET(0x1557F180)
#define CLASS_2_6821B2280D711A52_METHOD_2_AA7E7D1E175DAB81_OFFSET UNITYSDK_OFFSET(0x1557EF60)
#define CLASS_2_6821B2280D711A52_METHOD_2_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0x15577360)
#define CLASS_2_6821B2280D711A52_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x155803C0)
#define CLASS_2_6821B2280D711A52_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x15580310)
#define CLASS_2_6821B2280D711A52_METHOD_2_C6F738ECB1BBB902_OFFSET UNITYSDK_OFFSET(0x1557F410)
#define CLASS_2_6821B2280D711A52_METHOD_2_C825CC6156D8612D_OFFSET UNITYSDK_OFFSET(0x1557AFC0)
#define CLASS_2_6821B2280D711A52_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1557D2F0)
#define CLASS_2_6821B2280D711A52_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1557E430)
#define CLASS_2_6821B2280D711A52_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1557CFC0)
#define CLASS_2_6821B2280D711A52_METHOD_2_CD762BD492FAC131_1_OFFSET UNITYSDK_OFFSET(0x1557EBB0)
#define CLASS_2_6821B2280D711A52_METHOD_2_CD762BD492FAC131_OFFSET UNITYSDK_OFFSET(0x1557CD10)
#define CLASS_2_6821B2280D711A52_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x1557D840)
#define CLASS_2_6821B2280D711A52_METHOD_2_E11BF4997198DC1F_OFFSET UNITYSDK_OFFSET(0x1557B950)
#define CLASS_2_6821B2280D711A52_METHOD_2_F20A56AFD565E234_OFFSET UNITYSDK_OFFSET(0x1557BFF0)
#define CLASS_2_6821B2280D711A52_METHOD_2_F4702DCB1E895B7F_OFFSET UNITYSDK_OFFSET(0x1557D000)
#define CLASS_2_6821B2280D711A52_METHOD_2_F713E417997556FC_OFFSET UNITYSDK_OFFSET(0x1557D9C0)
#define CLASS_2_6821B2280D711A52_METHOD_2_FB31A773A52994BE_OFFSET UNITYSDK_OFFSET(0x1557DA10)
#define CLASS_2_6821B2280D711A52__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x155773D0)
#define CLASS_2_6821B2280D711A52__CCTOR_OFFSET UNITYSDK_OFFSET(0x15580680)
#define CLASS_2_6821B2280D711A52__CTOR_OFFSET UNITYSDK_OFFSET(0x15577130)
#define CLASS_2_6821B2280D711A52__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x155772B0)
#define CLASS_2_6821B2280D711A52__ONTICK_OFFSET UNITYSDK_OFFSET(0x15578590)
#define CLASS_2_6821B2280D711A52__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x155778E0)

inline static constexpr unsigned int Class_2_6821B2280D711A52_TypeDefinitionIndex = 69434;

class Class_2_6821B2280D711A52 : public ::RPG::Client::UIController
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6821B2280D711A52_TypeDefinitionIndex)->GetStaticField(0x9DB0);
	}
	static ::System::Boolean* StaticGet_Field_2_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6821B2280D711A52_TypeDefinitionIndex)->GetStaticField(0x9DB1);
	}
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6821B2280D711A52_TypeDefinitionIndex)->GetStaticField(0x9DB2);
	}
	static ::System::Single* StaticGet_Field_2_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6821B2280D711A52_TypeDefinitionIndex)->GetStaticField(0x9DB4);
	}
	static ::System::Boolean* StaticGet_Field_2_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6821B2280D711A52_TypeDefinitionIndex)->GetStaticField(0x9DB8);
	}
	static ::System::Boolean* StaticGet_Field_2_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6821B2280D711A52_TypeDefinitionIndex)->GetStaticField(0x9DB9);
	}
	static ::System::Boolean* StaticGet_Field_2_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6821B2280D711A52_TypeDefinitionIndex)->GetStaticField(0x9DBA);
	}
	static ::System::Boolean* StaticGet_Field_2_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6821B2280D711A52_TypeDefinitionIndex)->GetStaticField(0x9DBB);
	}
	::System::Text::StringBuilder* Field_2_8; // 0x180
	::System::Text::StringBuilder* Field_2_9; // 0x188
	::UnityEngine::Transform* Field_2_10; // 0x190
	::System::String* Field_2_11; // 0x198
	::System::Int64 Field_2_12; // 0x1A0
	::System::Int64 Field_2_13; // 0x1A8
	::System::Boolean Field_2_14; // 0x1B0
	::System::Int32 Field_2_15; // 0x1B4
	::System::Single Field_2_16; // 0x1B8
	::System::Int64 Field_2_17; // 0x1C0
	::System::Int64 Field_2_18; // 0x1C8
	::System::Int32 Field_2_19; // 0x1D0
	::System::Single Field_2_20; // 0x1D4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52__CCTOR_OFFSET))();
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _AddHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52__ADDHANDLERS_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E2ADB487A34BD2D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_3E2ADB487A34BD2D_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_7DD84EAFF333A1E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F4702DCB1E895B7F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_F4702DCB1E895B7F_OFFSET))(this, a1);
	}

	::System::Void Method_2_9056A82E3B7BB01B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_9056A82E3B7BB01B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_21C77EE697523F65(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_21C77EE697523F65_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_F713E417997556FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_F713E417997556FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_2_FB31A773A52994BE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_FB31A773A52994BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_1EFC5A8A94CA6BE7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_1EFC5A8A94CA6BE7_OFFSET))(this, a1);
	}

	::System::Void Method_2_73C23613314BF1A1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_73C23613314BF1A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11BF4997198DC1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_E11BF4997198DC1F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_090BCD9BFCD6DFF8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_090BCD9BFCD6DFF8_OFFSET))(this, a1);
	}

	::System::Void Method_2_16323FC6A31C6693(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_16323FC6A31C6693_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD762BD492FAC131(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_CD762BD492FAC131_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD762BD492FAC131_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_CD762BD492FAC131_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA7E7D1E175DAB81(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_AA7E7D1E175DAB81_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA7E7D1E175DAB81_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_AA7E7D1E175DAB81_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F20A56AFD565E234(::UnityEngine::UI::Text* a1, ::System::String* a2, ::System::Int64 a3, ::System::Int64 a4, ::System::Int64 a5, ::System::Int64 a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_F20A56AFD565E234_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_809818D33F5A75DB(::UnityEngine::UI::Text* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_809818D33F5A75DB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_C825CC6156D8612D(::UnityEngine::UI::Text* a1, ::UnityEngine::NativeString a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::UnityEngine::NativeString, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_C825CC6156D8612D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_C6F738ECB1BBB902(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_C6F738ECB1BBB902_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::UnityEngine::UI::Text* Method_2_28E79F620B30B422()
	{
		return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_28E79F620B30B422_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_6D5F59BCE8B4A09A()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_6D5F59BCE8B4A09A_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_4ECA7EC0FAA68570(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_4ECA7EC0FAA68570_OFFSET))(this, a1);
	}

	::Class_2_A48F3719AA1CF200_31* Method_2_BEBC8F4773DC82AA()
	{
		return ((::Class_2_A48F3719AA1CF200_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_BEBC8F4773DC82AA_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
