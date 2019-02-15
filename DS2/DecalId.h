#pragma once

struct DecalId_ {
	DefineStaticMethod(GetInvalidDecalId, 0x40839f, const DecalId_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetActive, 0x7d6cef, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsValid, 0x40838c, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetAlpha, 0x7d6d04, unsigned char, NO_PARAMS, NO_ARGS);
	DefineMethod(SetActive, 0x408397, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SetActive, 0x7d6d1d, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetAlpha, 0x7d6d38, void, Params(unsigned char unk1), Args(unk1));
} typedef DecalId;
