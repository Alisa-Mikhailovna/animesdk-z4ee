#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_32B3FE2FD3EEDB80.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

class Class_1_63D18ECF87218619_1;
class Class_1_BAF6F107F0961F34;
class Class_2_2661F5CE5402F421;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_FF130E84C7E667B9_METHOD_3_0384AC884613AD2A_OFFSET UNITYSDK_OFFSET(0xB16C930)
#define CLASS_3_FF130E84C7E667B9_METHOD_3_28A344257FC02244_OFFSET UNITYSDK_OFFSET(0xB16C8E0)
#define CLASS_3_FF130E84C7E667B9_METHOD_3_86E5BAC73570DA03_OFFSET UNITYSDK_OFFSET(0xB16D0D0)
#define CLASS_3_FF130E84C7E667B9_METHOD_3_BCF43D4317A97D4C_OFFSET UNITYSDK_OFFSET(0xB16D180)
#define CLASS_3_FF130E84C7E667B9_METHOD_3_F385090BF8DD2EE6_OFFSET UNITYSDK_OFFSET(0xB16D390)
#define CLASS_3_FF130E84C7E667B9_METHOD_3_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0xB16D3F0)
#define CLASS_3_FF130E84C7E667B9__CCTOR_OFFSET UNITYSDK_OFFSET(0xB16D420)
#define CLASS_3_FF130E84C7E667B9__CTOR_OFFSET UNITYSDK_OFFSET(0xB16D400)

inline static constexpr unsigned int Class_3_FF130E84C7E667B9_TypeDefinitionIndex = 72856;

class Class_3_FF130E84C7E667B9 : public ::Class_2_32B3FE2FD3EEDB80
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FF130E84C7E667B9_TypeDefinitionIndex)->GetStaticField(0x5CB40);
	}
	::RPG::Client::LittleGame::Move::MoveState Field_3_1; // 0xA8
	::System::Boolean Field_3_2; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF130E84C7E667B9__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FF130E84C7E667B9__CCTOR_OFFSET))();
	}

	::System::Void Method_3_28A344257FC02244(::Class_1_BAF6F107F0961F34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BAF6F107F0961F34*))((::PBYTE)hIl2Cpp + CLASS_3_FF130E84C7E667B9_METHOD_3_28A344257FC02244_OFFSET))(this, a1);
	}

	::System::Void Method_3_0384AC884613AD2A(::Class_1_63D18ECF87218619_1* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_3_FF130E84C7E667B9_METHOD_3_0384AC884613AD2A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_86E5BAC73570DA03(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FF130E84C7E667B9_METHOD_3_86E5BAC73570DA03_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCF43D4317A97D4C(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FF130E84C7E667B9_METHOD_3_BCF43D4317A97D4C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F385090BF8DD2EE6(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FF130E84C7E667B9_METHOD_3_F385090BF8DD2EE6_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_3_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF130E84C7E667B9_METHOD_3_F48B6E9D83D3B226_OFFSET))(this);
	}
};
