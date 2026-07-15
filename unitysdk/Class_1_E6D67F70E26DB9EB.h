#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1262;
class Class_0_16E4307DCC419505_1266;
class Class_0_16E4307DCC419505_1280;
class Class_1_6F4CEA512F531AE2;
class Class_1_97F9E33E53026E4C;
class Class_1_B6441625E3D7D3E0;
class Class_1_C85C4DAB350DD5FC_2;
class Class_1_D04575A520F91692;
class Class_1_F21160E71E8406C6;
namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapFight; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_11E23947F0676236_OFFSET UNITYSDK_OFFSET(0x15431610)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15430F20)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_257590FDC808DC84_OFFSET UNITYSDK_OFFSET(0x15431E70)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_356ABAEE5BA225E6_OFFSET UNITYSDK_OFFSET(0x154309D0)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_38C3D0AC3EE745A3_OFFSET UNITYSDK_OFFSET(0x15431290)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x1542F1E0)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_49FB02306DA841AC_OFFSET UNITYSDK_OFFSET(0x15431840)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_4F6ADC22FECA8414_OFFSET UNITYSDK_OFFSET(0x15430F80)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x15432A60)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_59D9069E39FC78DB_OFFSET UNITYSDK_OFFSET(0x154314C0)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_64A16760584A240E_OFFSET UNITYSDK_OFFSET(0x15431F30)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_683DFAE7E82DDBDB_OFFSET UNITYSDK_OFFSET(0x1542F240)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_6BBDCFC1D27F8FD8_OFFSET UNITYSDK_OFFSET(0x15431A50)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_6F79DF9E89039421_OFFSET UNITYSDK_OFFSET(0x154320D0)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x1542F5A0)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_8A2AC7CD7EA66CAC_OFFSET UNITYSDK_OFFSET(0x15432CE0)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_93456CA503FCF8F4_OFFSET UNITYSDK_OFFSET(0x15431530)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x15430C00)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_A2FECA576332B43B_OFFSET UNITYSDK_OFFSET(0x15430E10)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_AF4E83C3893A9F6A_OFFSET UNITYSDK_OFFSET(0x1542F4A0)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_B691D9BB492BD50C_OFFSET UNITYSDK_OFFSET(0x15430CE0)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_BB3B5CB275AC3ED1_OFFSET UNITYSDK_OFFSET(0x1542F2F0)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_C2C229B4ABA9CBC2_OFFSET UNITYSDK_OFFSET(0x1542FC60)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_C36CF11F898C9FDC_OFFSET UNITYSDK_OFFSET(0x15432B60)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_D3B330E20BB51086_OFFSET UNITYSDK_OFFSET(0x15432280)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_DB009E688B02FC97_OFFSET UNITYSDK_OFFSET(0x154321A0)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_E0611EB9D4262ACA_OFFSET UNITYSDK_OFFSET(0x15431BC0)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_F140C81F7FC72D9F_OFFSET UNITYSDK_OFFSET(0x15432230)
#define CLASS_1_E6D67F70E26DB9EB_METHOD_1_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0x15431B70)
#define CLASS_1_E6D67F70E26DB9EB__CTOR_OFFSET UNITYSDK_OFFSET(0x1542EFC0)

inline static constexpr unsigned int Class_1_E6D67F70E26DB9EB_TypeDefinitionIndex = 75778;

class Class_1_E6D67F70E26DB9EB : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1280* Field_1_0; // 0x10
	::Class_1_97F9E33E53026E4C* Field_1_1; // 0x18
	::Class_1_D04575A520F91692* Field_1_2; // 0x20
	::Class_1_F21160E71E8406C6* Field_1_3; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_4; // 0x30
	::Class_0_16E4307DCC419505_1266* Field_1_5; // 0x38
	::Class_0_16E4307DCC419505_1262* Field_1_6; // 0x40

	::System::Void _ctor(::Class_1_F21160E71E8406C6* a1, ::Class_0_16E4307DCC419505_1266* a2, ::Class_1_97F9E33E53026E4C* a3, ::Class_0_16E4307DCC419505_1262* a4, ::Class_0_16E4307DCC419505_1280* a5, ::Class_1_D04575A520F91692* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F21160E71E8406C6*, ::Class_0_16E4307DCC419505_1266*, ::Class_1_97F9E33E53026E4C*, ::Class_0_16E4307DCC419505_1262*, ::Class_0_16E4307DCC419505_1280*, ::Class_1_D04575A520F91692*))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Boolean Method_1_683DFAE7E82DDBDB(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_683DFAE7E82DDBDB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BB3B5CB275AC3ED1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_BB3B5CB275AC3ED1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AF4E83C3893A9F6A(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_AF4E83C3893A9F6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_B6441625E3D7D3E0*>* Method_1_356ABAEE5BA225E6()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_B6441625E3D7D3E0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_356ABAEE5BA225E6_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_C85C4DAB350DD5FC_2*>* Method_1_C2C229B4ABA9CBC2()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_C85C4DAB350DD5FC_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_C2C229B4ABA9CBC2_OFFSET))(this);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Boolean Method_1_B691D9BB492BD50C(::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_B691D9BB492BD50C_OFFSET))(this, a1);
	}

	::System::Void Method_1_A2FECA576332B43B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_A2FECA576332B43B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_38C3D0AC3EE745A3()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_38C3D0AC3EE745A3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*>* Method_1_4F6ADC22FECA8414()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_4F6ADC22FECA8414_OFFSET))(this);
	}

	::System::Boolean Method_1_59D9069E39FC78DB(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_59D9069E39FC78DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_49FB02306DA841AC(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_49FB02306DA841AC_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_FD6692A5F6B0AC0C_OFFSET))();
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_E0611EB9D4262ACA()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_E0611EB9D4262ACA_OFFSET))(this);
	}

	::System::Boolean Method_1_11E23947F0676236(::RPG::GameCore::FateRinCaseBoardTeamType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_11E23947F0676236_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6BBDCFC1D27F8FD8(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_6BBDCFC1D27F8FD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_257590FDC808DC84(::RPG::GameCore::FateRinCaseBoardTeamType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_257590FDC808DC84_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_64A16760584A240E(::Class_1_6F4CEA512F531AE2* a1)
	{
		return ((::System::Boolean(*)(::Class_1_6F4CEA512F531AE2*))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_64A16760584A240E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6F79DF9E89039421(::Class_1_6F4CEA512F531AE2* a1)
	{
		return ((::System::Boolean(*)(::Class_1_6F4CEA512F531AE2*))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_6F79DF9E89039421_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_93456CA503FCF8F4(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_93456CA503FCF8F4_OFFSET))(a1);
	}

	::System::String* Method_1_DB009E688B02FC97()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_DB009E688B02FC97_OFFSET))(this);
	}

	::System::String* Method_1_D3B330E20BB51086(::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_D3B330E20BB51086_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_507A5122CD01412B_OFFSET))(this);
	}

	::System::Boolean Method_1_8A2AC7CD7EA66CAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_8A2AC7CD7EA66CAC_OFFSET))(this);
	}

	::System::Boolean Method_1_C36CF11F898C9FDC(::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_C36CF11F898C9FDC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>* Method_1_F140C81F7FC72D9F()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6D67F70E26DB9EB_METHOD_1_F140C81F7FC72D9F_OFFSET))(this);
	}
};
