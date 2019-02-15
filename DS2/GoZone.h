#pragma once

class GoZone {
public:
	DefineConstMethod(IsPosInZone, 0x90cf52, bool, Params(const SiegePos& unk1), Args(unk1));
	DefineConstMethod(IsPosOnBackSide, 0x90cf7e, bool, Params(const SiegePos& unk1), Args(unk1));
	DefineConstMethod(IsPosOnFrontSide, 0x90cf68, bool, Params(const SiegePos& unk1), Args(unk1));
	DefineConstMethod(IsPosOnLeftSide, 0x90cf94, bool, Params(const SiegePos& unk1), Args(unk1));
	DefineConstMethod(IsPosOnRightSide, 0x90cfaa, bool, Params(const SiegePos& unk1), Args(unk1));
	DefineConstMethod(IsValid, 0x4283e0, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetPosition, 0x90cfc0, const SiegePos&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetBackDirection, 0x90cfed, void, Params(vector_3& unk1), Args(unk1));
	DefineMethod(GetFrontDirection, 0x90cfd2, void, Params(vector_3& unk1), Args(unk1));
	DefineMethod(GetLeftDirection, 0x90d03e, void, Params(vector_3& unk1), Args(unk1));
	DefineMethod(GetRightDirection, 0x90d023, void, Params(vector_3& unk1), Args(unk1));
};