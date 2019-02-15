#pragma once

#include "ClassMacros.h"

class UIText {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x5028a5, int, Params(UIWindow* unk1), Args(unk1));
	DefineConstMethod(GetText, 0x503f1d, void, Params(gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetText, 0x503a55, void, Params(const gpbstring<char>& unk1, bool unk2), Args(unk1, unk2));
	DefineStaticMethod(GetUIText, 0x5028af, UIText*, Params(UIWindow* unk1), Args(unk1));
	DefineConstMethod(GetJustification, 0x5028a8, JUSTIFICATION, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetColor, 0x498485, unsigned int, NO_PARAMS, NO_ARGS);
	DefineMethod(SetAutoSize, 0x472beb, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetColor, 0x472bdb, void, Params(unsigned int unk1), Args(unk1));
	DefineMethod(SetFont, 0x760ac0, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetJustification, 0x456d41, void, Params(JUSTIFICATION unk1), Args(unk1));
};
