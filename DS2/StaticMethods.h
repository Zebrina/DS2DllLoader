#pragma once

#include "AnalysisResults.h"
#include "Enums.h"
#include "FrustumId.h"
#include "Goid.h"
#include "GPBString.h"
#include "MCP.h"
#include "Nema.h"
#include "Range.h"
#include "Range2.h"
#include "Siege.h"
#include "SiegePos.h"
#include "SiegeRail.h"
#include "Skrit.h"
#include "Vector3.h"

#include "ClassMacros.h"

DefineFunction(AnimEventBitTest, 0x5638c0, bool, Params(unsigned long unk1, eAnimEvent unk2), Args(unk1, unk2));
DefineFunction(CallAnalyzeCharacter, 0x8f87e2, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, AnalysisResults* unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(CallAnalyzeCharacterForRange, 0x8f892f, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, Range* unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(CallBoolFormula, 0x8f88c0, bool, Params(Skrit::Object* unk1, const char* unk2), Args(unk1, unk2));
DefineFunction(CallCanUseIncantation, 0x43dbac, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const gpbstring<char>& unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(CallIncantationManager, 0x43db3d, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const gpbstring<char>& unk5, const gpbstring<char>& unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
DefineFunction(CommandAttack, 0x468417, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(CommandAttackPosition, 0x468486, bool, Params(Skrit::Object* unk1, const char* unk2, const SiegePos& unk3, bool unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(CommandCast, 0x4684f5, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(CommandCastSingle, 0x468564, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(CommandCastSkill, 0x4685d3, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(CommandCastSkillPosition, 0x468642, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const SiegePos& unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(CommandContinuousMove, 0x468a8c, bool, Params(Skrit::Object* unk1, const char* unk2, const SiegePos& unk3), Args(unk1, unk2, unk3));
DefineFunction(CommandGive, 0x4688d3, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(CommandMove, 0x4689ae, bool, Params(Skrit::Object* unk1, const char* unk2, const SiegePos& unk3, bool unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(CommandMoveFocus, 0x468a1d, bool, Params(Skrit::Object* unk1, const char* unk2, const SiegePos& unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(CommandRegroup, 0x468afb, bool, Params(Skrit::Object* unk1, const char* unk2), Args(unk1, unk2));
DefineFunction(CommandTalk, 0x468d1a, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4, eActionOrigin unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(CommandUsePower, 0x4686b1, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(CommandUsePowerPosition, 0x468720, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const SiegePos& unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(ContextAction, 0x468339, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(FromString, 0x6d36f0, bool, Params(const char* unk1, SiegeRail& unk2), Args(unk1, unk2));
DefineFunction(HitTestTerrain, 0x6d1010, bool, Params(const SiegePos& unk1, const SiegePos& unk2, SiegePos& unk3, vector_3& unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(IsActivated, 0x7ec7ef, bool, Params(eQuestState unk1), Args(unk1));
DefineFunction(IsAlive, 0x467d48, bool, Params(eLifeState unk1), Args(unk1));
DefineFunction(IsAttackJat, 0x9411e9, bool, Params(eJobAbstractType unk1), Args(unk1));
DefineFunction(IsCastJat, 0x940a62, bool, Params(eJobAbstractType unk1), Args(unk1));
DefineFunction(IsChant, 0x887369, bool, Params(eEntryType unk1), Args(unk1));
DefineFunction(IsConscious, 0x435b56, bool, Params(eLifeState unk1), Args(unk1));
DefineFunction(IsDamageAggro, 0x9409b3, bool, Params(eAggroType unk1), Args(unk1));
DefineFunction(IsDeactivated, 0x7ec807, bool, Params(eQuestState unk1), Args(unk1));
DefineFunction(IsDead, 0x4283d2, bool, Params(eLifeState unk1), Args(unk1));
DefineFunction(IsEndGame, 0x7d5247, bool, Params(eWorldState unk1), Args(unk1));
DefineFunction(IsEqual, 0x6d0f20, bool, Params(const SiegePos& unk1, const SiegePos& unk2), Args(unk1, unk2));
DefineFunction(IsEqual, 0x7ec815, bool, Params(eQuestState unk1, eQuestState unk2), Args(unk1, unk2));
DefineFunction(IsFailed, 0x93cc0e, bool, Params(eJobResult unk1), Args(unk1));
DefineFunction(IsFuelAddressValid, 0x9bcc42, bool, Params(const char* unk1), Args(unk1));
DefineFunction(IsGameStarting, 0x7d5230, bool, Params(eWorldState unk1), Args(unk1));
DefineFunction(IsInFrontend, 0x7d51ab, bool, Params(eWorldState unk1), Args(unk1));
DefineFunction(IsInGame, 0x7d5163, bool, Params(eWorldState unk1), Args(unk1));
DefineFunction(IsInGameInteractive, 0x7d5194, bool, Params(eWorldState unk1), Args(unk1));
DefineFunction(IsInLobby, 0x7d5202, bool, Params(eWorldState unk1), Args(unk1));
DefineFunction(IsInNISMode, 0x7ed518, bool, NO_PARAMS, NO_ARGS);
DefineFunction(IsInStagingArea, 0x7d51eb, bool, Params(eWorldState unk1), Args(unk1));
DefineFunction(IsLoading, 0x7d5219, bool, Params(eWorldState unk1), Args(unk1));
DefineFunction(IsLoreItem, 0x88734b, bool, Params(eEntryType unk1), Args(unk1));
DefineFunction(IsMoveJat, 0x9411d5, bool, Params(eJobAbstractType unk1), Args(unk1));
DefineFunction(IsMultiPlayer, 0x7ed4d7, bool, NO_PARAMS, NO_ARGS);
DefineFunction(IsNodeInTransition, 0x6d0ff0, bool, Params(const siege::database_guid& unk1), Args(unk1));
DefineFunction(IsNoPath, 0x93cc1c, bool, Params(eJobResult unk1), Args(unk1));
DefineFunction(IsPrimaryThread, 0x7ed4f1, bool, NO_PARAMS, NO_ARGS);
DefineFunction(IsQuestItem, 0x88733d, bool, Params(eEntryType unk1), Args(unk1));
DefineFunction(IsRailJat, 0x940a7a, bool, Params(eJobAbstractType unk1), Args(unk1));
DefineFunction(IsSendLocalOnly, 0x7edf46, bool, Params(unsigned long unk1), Args(unk1));
DefineFunction(IsServerLocal, 0x7ed4bd, bool, NO_PARAMS, NO_ARGS);
DefineFunction(IsServerRemote, 0x413255, bool, NO_PARAMS, NO_ARGS);
DefineFunction(IsSinglePlayer, 0x409c37, bool, NO_PARAMS, NO_ARGS);
DefineFunction(IsStagingArea, 0x7d5269, bool, Params(eWorldState unk1), Args(unk1));
DefineFunction(IsTextType, 0x7adc30, bool, Params(UI_CONTROL_TYPE unk1), Args(unk1));
DefineFunction(IsValid, 0x7ed79f, bool, Params(const FrustumId_* unk1, bool unk2), Args(unk1, unk2));
DefineFunction(IsValid, 0x6d0f00, bool, Params(const SiegePos& unk1), Args(unk1));
DefineFunction(IsWorldEditMode, 0x7ed515, bool, NO_PARAMS, NO_ARGS);
DefineFunction(RequestBeyondRange, 0x968037, bool, Params(MCP::eReqRetCode unk1), Args(unk1));
DefineFunction(RequestFailed, 0x968020, bool, Params(MCP::eReqRetCode unk1), Args(unk1));
DefineFunction(RequestOk, 0x968009, bool, Params(MCP::eReqRetCode unk1), Args(unk1));
DefineFunction(SelectionAction, 0x4683a8, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SkritCalcCanHit, 0x842773, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(SkritDamageGo, 0x84292f, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, double unk6, bool unk7, bool unk8), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8));
DefineFunction(SkritDamageGoMagicPower, 0x842a0d, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, double unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
DefineFunction(SkritDamageGoPower, 0x842a7c, bool, Params(Skrit::Object* unk1, const char* unk2, const gpbstring<char>& unk3, const Goid_* unk4, const Goid_* unk5, const Goid_* unk6, double unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
DefineFunction(SkritDamageGoVolume, 0x84299e, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, double unk6, double unk7, bool unk8), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8));
DefineFunction(SkritGetDamageRange, 0x842851, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, range_2& unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(SkritGetDamageRangeHelper, 0x8428c0, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, range_2& unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
DefineFunction(SkritOnClientEnterWorld, 0x842aeb, bool, Params(Skrit::Object* unk1, const char* unk2, const PlayerId_* unk3, const Goid_* unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SkritOnClientExitWorld, 0x842b5a, bool, Params(Skrit::Object* unk1, const char* unk2, const PlayerId_* unk3), Args(unk1, unk2, unk3));
DefineFunction(SkritOnDropItemFor, 0x842695, bool, Params(Skrit::Object* unk1, const char* unk2, Go* unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SkritOnProjectileCollision, 0x842704, bool, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(StartCameraFx, 0x7d7855, bool, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
DefineFunction(StartCameraFx, 0x7d786d, bool, Params(const char* unk1), Args(unk1));
DefineFunction(StartDecalFx, 0x7d7912, bool, Params(const DecalId_* unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
DefineFunction(StartDecalFx, 0x7d7991, bool, Params(const DecalId_* unk1, const char* unk2), Args(unk1, unk2));
DefineFunction(StartLightFx, 0x7d787e, bool, Params(const LightId_* unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
DefineFunction(StartLightFx, 0x7d78fd, bool, Params(const LightId_* unk1, const char* unk2), Args(unk1, unk2));
DefineFunction(TestBits, 0x40a1d8, bool, Params(siege::eLogicalNodeFlags unk1, siege::eLogicalNodeFlags unk2), Args(unk1, unk2));
DefineFunction(GetSkillNameFromReqString, 0x7f0536, gpbstring<char>, Params(const gpbstring<char>& unk1, unsigned int unk2), Args(unk1, unk2));
DefineFunction(MakeFourCcString, 0x996fd6, gpbstring<char>, Params(int unk1, bool unk2), Args(unk1, unk2));
DefineFunction(MakeFourCcString, 0x996fbe, gpbstring<char>, Params(int unk1), Args(unk1));
DefineFunction(MakeNodeFlagString, 0x6d17d0, gpbstring<char>, Params(siege::eLogicalNodeFlags unk1), Args(unk1));
DefineFunction(MakeSiegePosString, 0x6d1a00, gpbstring<char>, Params(const SiegePos& unk1), Args(unk1));
//DefineVarArgFunction(MakeStringF, 0x99725c, gpbstring<char>, Params(const char* unk1));
DefineFunction(ToFullString, 0x7ee2c5, gpbstring<char>, Params(eDamageType unk1), Args(unk1));
DefineFunction(GoidClassToString, 0x502cb9, const char*, Params(const Goid_* unk1), Args(unk1));
DefineFunction(GoidToDebugString, 0x7eea43, const char*, Params(const Goid_* unk1), Args(unk1));
DefineFunction(MakeDecalId, 0x408384, const DecalId_*, Params(unsigned long unk1), Args(unk1));
DefineFunction(CreateAoEVolume, 0x468d89, const FFXID_*, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const SiegePos& unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(CreatePowerInvalidEffect, 0x468ed6, const FFXID_*, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const SiegePos& unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(CreatePowerSelfEffect, 0x468df8, const FFXID_*, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
DefineFunction(CreatePowerTargetEffect, 0x468e67, const FFXID_*, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(MakeFrustumId, 0x4c42ff, const FrustumId_*, Params(unsigned long unk1), Args(unk1));
DefineFunction(MakeGoid, 0x467d3a, const Goid_*, Params(unsigned long unk1), Args(unk1));
DefineFunction(MakeLightId, 0x408363, const LightId_*, Params(unsigned long unk1), Args(unk1));
DefineFunction(MakePlayerId, 0x424167, const PlayerId_*, Params(unsigned long unk1), Args(unk1));
DefineFunction(GetZeroQuat, 0x996f8b, const Quat&, NO_PARAMS, NO_ARGS);
DefineFunction(MakeScid, 0x435b20, const Scid_*, Params(unsigned long unk1), Args(unk1));
DefineFunction(MakeSiegeId, 0x4083ad, const SiegeId_*, Params(unsigned long unk1), Args(unk1));
DefineFunction(GetZeroVector, 0x996f59, const vector_3&, NO_PARAMS, NO_ARGS);
DefineFunction(CalcCharacterValue, 0x95c30f, double, Params(Skrit::Object* unk1, const char* unk2, double unk3), Args(unk1, unk2, unk3));
DefineFunction(CalcEatExperience, 0x954cb3, double, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(CalcHireLevel, 0x95c231, double, Params(Skrit::Object* unk1, const char* unk2, double unk3), Args(unk1, unk2, unk3));
DefineFunction(CalcPetMaxLife, 0x954d22, double, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
DefineFunction(CalcPetMaxMana, 0x954d91, double, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
DefineFunction(CalcStat, 0x95c2a0, double, Params(Skrit::Object* unk1, const char* unk2, double unk3, double unk4, double unk5, double unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
DefineFunction(CallFloatFormula, 0x8f81a1, double, Params(Skrit::Object* unk1, const char* unk2, ePContentType unk3), Args(unk1, unk2, unk3));
DefineFunction(CallFloatToFloatFormula, 0x8f83cc, double, Params(Skrit::Object* unk1, const char* unk2, ePContentType unk3, double unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(CallGetPathLevelMax, 0x891295, double, Params(Skrit::Object* unk1, const char* unk2, int unk3), Args(unk1, unk2, unk3));
DefineFunction(CallGetPathLevelMin, 0x891226, double, Params(Skrit::Object* unk1, const char* unk2, int unk3), Args(unk1, unk2, unk3));
DefineFunction(SkritCalculateExperience, 0x8427e2, double, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, double unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
DefineFunction(MakeAggroType, 0x9409ab, eAggroType, Params(unsigned long unk1), Args(unk1));
DefineFunction(ChoreFromString, 0x93bc00, eAnimChore, Params(const char* unk1), Args(unk1));
DefineFunction(MakeAnimChore, 0x93bc1e, eAnimChore, Params(unsigned long unk1), Args(unk1));
DefineFunction(CameraInterpFromString, 0x92879f, eCameraInterp, Params(const char* unk1), Args(unk1));
DefineFunction(CameraOrderFromString, 0x928f8a, eCameraOrder, Params(const char* unk1), Args(unk1));
DefineFunction(MakeCombatOrders, 0x940b9a, eCombatOrders, Params(unsigned long unk1), Args(unk1));
DefineFunction(MakeMovementOrders, 0x940b63, eMovementOrders, Params(unsigned long unk1), Args(unk1));
DefineFunction(CallPClassTypeFormula, 0x8f835d, ePClass, Params(Skrit::Object* unk1, const char* unk2), Args(unk1, unk2));
DefineFunction(CallPContentFormula, 0x8f827f, ePContentType, Params(Skrit::Object* unk1, const char* unk2), Args(unk1, unk2));
DefineFunction(CallPContentTypeFormula, 0x8f82ee, ePContentType, Params(Skrit::Object* unk1, const char* unk2, ePContentType unk3), Args(unk1, unk2, unk3));
DefineFunction(ToPContentType, 0x7eca55, ePContentType, Params(eAttackClass unk1), Args(unk1));
DefineFunction(FromString, 0x84826b, eWorldEvent, Params(const char* unk1), Args(unk1));
DefineFunction(ComputeTravelScalar, 0x928f2d, float, Params(eCameraInterp unk1, float unk2), Args(unk1, unk2));
DefineFunction(ConvertRatioToAttackBlend, 0x573ce0, float, Params(float unk1, float unk2, float unk3, float unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(ConvertRatioToWalkBlend, 0x573e70, float, Params(float unk1, float unk2), Args(unk1, unk2));
DefineFunction(DecodeAttackDeviation, 0x968221, float, Params(unsigned long unk1), Args(unk1));
DefineFunction(DecodeAttackElevation, 0x9681e7, float, Params(unsigned long unk1), Args(unk1));
DefineFunction(DecodeAttackLoopDuration, 0x9681b3, float, Params(unsigned long unk1), Args(unk1));
DefineFunction(GetAlpha, 0x9972c8, float, Params(unsigned long unk1), Args(unk1));
DefineFunction(GetBlue, 0x997319, float, Params(unsigned long unk1), Args(unk1));
DefineFunction(GetGreen, 0x9972fe, float, Params(unsigned long unk1), Args(unk1));
DefineFunction(GetRed, 0x9972e3, float, Params(unsigned long unk1), Args(unk1));
DefineFunction(GetSiegeDistance, 0x6d1150, float, Params(const SiegePos& unk1, const SiegePos& unk2), Args(unk1, unk2));
DefineFunction(GetSkillMinRequiredFromReqString, 0x7f0561, float, Params(const gpbstring<char>& unk1, unsigned int unk2), Args(unk1, unk2));
DefineFunction(SinWave, 0x573e10, float, Params(float unk1, float unk2, float unk3, float unk4, float unk5, float unk6, float unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
DefineFunction(SkritCalcAimingError, 0x841706, float, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
DefineFunction(SkritCalculateDamage, 0x841bb9, float, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, double unk6, double unk7, double unk8, bool unk9, bool unk10), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8, unk9, unk10));
DefineFunction(SkritCalculateDefence, 0x841adb, float, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
DefineFunction(SkritCalculateDefenceHelper, 0x841b4a, float, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SkritCalculateMaxLife, 0x841925, float, Params(Skrit::Object* unk1, const char* unk2, Go* unk3), Args(unk1, unk2, unk3));
DefineFunction(SkritCalculateMaxMana, 0x841994, float, Params(Skrit::Object* unk1, const char* unk2, Go* unk3), Args(unk1, unk2, unk3));
DefineFunction(CallAnalyzeCharacterForLevel, 0x8f8851, int, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
DefineFunction(CallGetGroupFromMonsterPower, 0x891304, int, Params(Skrit::Object* unk1, const char* unk2, double unk3, int unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(CallIntFormula, 0x8f8210, int, Params(Skrit::Object* unk1, const char* unk2, ePContentType unk3), Args(unk1, unk2, unk3));
DefineFunction(CallReturnIntFormula, 0x8f8bf3, int, Params(Skrit::Object* unk1, const char* unk2), Args(unk1, unk2));
DefineFunction(GetNumSkillsFromReqString, 0x7f0510, int, Params(const gpbstring<char>& unk1), Args(unk1));
DefineFunction(MakeFourCcInt, 0x996fef, int, Params(const char* unk1), Args(unk1));
DefineFunction(MakeIndex, 0x502d4e, int, Params(const FrustumId_* unk1), Args(unk1));
DefineFunction(MakeIndex, 0x502d32, int, Params(const PlayerId_* unk1), Args(unk1));
DefineFunction(MakeInt, 0x9409a3, int, Params(eAggroType unk1), Args(unk1));
DefineFunction(MakeInt, 0x93bc26, int, Params(eAnimChore unk1), Args(unk1));
DefineFunction(MakeInt, 0x940b92, int, Params(eCombatOrders unk1), Args(unk1));
DefineFunction(MakeInt, 0x940b5b, int, Params(eMovementOrders unk1), Args(unk1));
DefineFunction(MakeJobReq, 0x952505, JobReq&, Params(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const Goid_* unk5, const Goid_* unk6, const SiegePos& unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
DefineFunction(MakeJobReq, 0x95257a, JobReq&, Params(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const Goid_* unk5, const Goid_* unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
DefineFunction(MakeJobReq, 0x952555, JobReq&, Params(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const Goid_* unk5, const SiegePos& unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
DefineFunction(MakeJobReq, 0x9525ea, JobReq&, Params(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const Goid_* unk5, eEquipSlot unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
DefineFunction(MakeJobReq, 0x952642, JobReq&, Params(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const Goid_* unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(MakeJobReq, 0x9525c1, JobReq&, Params(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const SiegePos& unk5, const Goid_* unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
DefineFunction(MakeJobReq, 0x95259e, JobReq&, Params(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, const SiegePos& unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(MakeJobReq, 0x952617, JobReq&, Params(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4, eEquipSlot unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(MakeJobReq, 0x952669, JobReq&, Params(eJobAbstractType unk1, eJobQ unk2, eQPlace unk3, eActionOrigin unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(ToSiegePosRef, 0x40a1ab, SiegePos&, Params(int unk1), Args(unk1));
DefineFunction(GetServerMachineId, 0x7ec726, unsigned int, NO_PARAMS, NO_ARGS);
DefineFunction(GetWorldSimCount, 0x7ed531, unsigned int, NO_PARAMS, NO_ARGS);
DefineFunction(MakeColor, 0x997061, unsigned long, Params(const vector_3& unk1, float unk2), Args(unk1, unk2));
DefineFunction(MakeColor, 0x9971a7, unsigned long, Params(const vector_3& unk1), Args(unk1));
DefineFunction(MakeColor, 0x997011, unsigned long, Params(float unk1, float unk2, float unk3, float unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(MakeColor, 0x99703d, unsigned long, Params(float unk1, float unk2, float unk3), Args(unk1, unk2, unk3));
DefineFunction(MakeInt, 0x40837c, unsigned long, Params(const DecalId_* unk1), Args(unk1));
DefineFunction(MakeInt, 0x435b4e, unsigned long, Params(const FrustumId_* unk1), Args(unk1));
DefineFunction(MakeInt, 0x413260, unsigned long, Params(const Goid_* unk1), Args(unk1));
DefineFunction(MakeInt, 0x40835b, unsigned long, Params(const LightId_* unk1), Args(unk1));
DefineFunction(MakeInt, 0x4a47e6, unsigned long, Params(const PlayerId_* unk1), Args(unk1));
DefineFunction(MakeInt, 0x41326b, unsigned long, Params(const Scid_* unk1), Args(unk1));
DefineFunction(MakeInt, 0x4083a5, unsigned long, Params(const SiegeId_* unk1), Args(unk1));
DefineFunction(CalcPetStats, 0x954741, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
DefineFunction(CommandDrop, 0x46878f, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const SiegePos& unk4, bool unk5, bool unk6, const Goid_* unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
DefineFunction(CommandEquip, 0x4687fb, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5, bool unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
DefineFunction(CommandGet, 0x468867, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(CommandGuard, 0x468942, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(CommandStop, 0x468b6a, void, Params(Skrit::Object* unk1, const char* unk2), Args(unk1, unk2));
DefineFunction(CommandTalkSingle, 0x468cae, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, eActionOrigin unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(CommandUse, 0x468c42, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(CommandUseSingle, 0x468bd6, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(ConvertDirectionToNode, 0x6d1260, void, Params(vector_3& unk1, const siege::database_guid& unk2, const siege::database_guid& unk3), Args(unk1, unk2, unk3));
DefineFunction(ConvertSiegePosToNode, 0x6d11d0, void, Params(SiegePos& unk1, const siege::database_guid& unk2), Args(unk1, unk2));
DefineFunction(FuBiTableTempDontCallMe, 0x997983, void, NO_PARAMS, NO_ARGS);
DefineFunction(GameCheckTeamForVictory, 0x8ecbf7, void, Params(Skrit::Object* unk1, const char* unk2, int unk3), Args(unk1, unk2, unk3));
DefineFunction(GameHandleWorldMessage, 0x8ecb8b, void, Params(Skrit::Object* unk1, const char* unk2, WorldMessage* unk3), Args(unk1, unk2, unk3));
DefineFunction(GetCurrentCameraPosition, 0x928fa5, void, Params(CameraPosition& unk1), Args(unk1));
DefineFunction(GetCurrentCameraQuat, 0x9290b9, void, Params(Quat& unk1), Args(unk1));
DefineFunction(GetCurrentCameraQuatPosition, 0x929042, void, Params(CameraQuatPosition& unk1), Args(unk1));
DefineFunction(GetCurrentCameraSiegePosition, 0x929013, void, Params(SiegePos& unk1), Args(unk1));
DefineFunction(GetCurrentCamTargetSiegePosition, 0x92908a, void, Params(SiegePos& unk1), Args(unk1));
DefineFunction(GetSiegeDifference, 0x6d0f70, void, Params(vector_3& unk1, const SiegePos& unk2, const SiegePos& unk3), Args(unk1, unk2, unk3));
DefineFunction(Intersection, 0x94219d, void, Params(JobAttributeBits& unk1, const JobAttributeBits& unk2, const JobAttributeBits& unk3), Args(unk1, unk2, unk3));
DefineFunction(ManageMoods, 0x91d4d1, void, Params(Skrit::HObject unk1, const char* unk2, GoidColl& unk3, bool unk4, double unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(PostWorldMessage, 0x848c63, void, Params(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3, float unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(PostWorldMessage, 0x848c39, void, Params(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3, unsigned long unk4, float unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(PostWorldMessage, 0x848d86, void, Params(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3, float unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(PostWorldMessage, 0x848d5c, void, Params(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3, unsigned long unk4, float unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(QuestReward, 0x8ecc63, void, Params(Skrit::HObject unk1, int unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
DefineFunction(RCSendToFlickComponent, 0x966131, void, Params(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3, unsigned long unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(RCSendWorldMessage, 0x8486e6, void, Params(unsigned long unk1, eWorldEvent unk2, const Goid_* unk3, const Goid_* unk4, unsigned long unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(RCSendWorldMessage, 0x8487d0, void, Params(unsigned long unk1, eWorldEvent unk2, const Goid_* unk3, const Goid_* unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(RevertSaturation, 0x7d6939, void, NO_PARAMS, NO_ARGS);
DefineFunction(RSSendWorldMessage, 0x8485f8, void, Params(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3, unsigned long unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(RSSendWorldMessage, 0x848a5a, void, Params(unsigned long unk1, eWorldEvent unk2, const Goid_* unk3, const Goid_* unk4, unsigned long unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(RSSendWorldMessage, 0x848b4b, void, Params(unsigned long unk1, eWorldEvent unk2, const Goid_* unk3, const Goid_* unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SConditionalPostWorldMessage, 0x848d1d, void, Params(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3, float unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SConditionalPostWorldMessage, 0x848cdb, void, Params(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3, unsigned long unk4, float unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(SCreateAndLaunchFlickFX, 0x9669bb, void, Params(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
DefineFunction(SendWorldMessage, 0x84858c, void, Params(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3, unsigned long unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SendWorldMessage, 0x84856a, void, Params(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
DefineFunction(SendWorldMessage, 0x8488d9, void, Params(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3, unsigned long unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SendWorldMessage, 0x8488b7, void, Params(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3), Args(unk1, unk2, unk3));
DefineFunction(SetTextureLogSaturation, 0x7d79f1, void, Params(const char* unk1, float unk2), Args(unk1, unk2));
DefineFunction(SkritAwardExperience, 0x841775, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, double unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
DefineFunction(SkritDamageGoMagic, 0x841dd8, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(SkritDamageGoMagicObject, 0x841e44, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(SkritDamageGoMelee, 0x841c28, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(SkritDamageGoMeleeMultiplier, 0x841c94, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, double unk6, bool unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
DefineFunction(SkritDamageGoRanged, 0x841d00, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(SkritDamageGoRangedMultiplier, 0x841d6c, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, double unk6, bool unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
DefineFunction(SkritOnAddKillCount, 0x887bdf, void, Params(Skrit::Object* unk1, const char* unk2, const gpbstring<char>& unk3, int unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(SkritOnCustomEffectDamage, 0x9370ea, void, Params(Skrit::HObject unk1, const char* unk2, CustomEffect* unk3, Go* unk4, Go* unk5, Go* unk6, double unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
DefineFunction(SkritOnCustomEffectEnteredWorld, 0x93722e, void, Params(Skrit::HObject unk1, const char* unk2, CustomEffect* unk3), Args(unk1, unk2, unk3));
DefineFunction(SkritOnCustomEffectEquip, 0x937306, void, Params(Skrit::HObject unk1, const char* unk2, CustomEffect* unk3), Args(unk1, unk2, unk3));
DefineFunction(SkritOnCustomEffectFlickSyncEnd, 0x9371c2, void, Params(Skrit::HObject unk1, const char* unk2, const FFXID_* unk3), Args(unk1, unk2, unk3));
DefineFunction(SkritOnCustomEffectLeftWorld, 0x93729a, void, Params(Skrit::HObject unk1, const char* unk2, CustomEffect* unk3), Args(unk1, unk2, unk3));
DefineFunction(SkritOnCustomEffectPrepareAmmo, 0x937156, void, Params(Skrit::HObject unk1, const char* unk2, CustomEffect* unk3, Go* unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SkritOnLevelUp, 0x8417e1, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SkritOnPartyMemberAdded, 0x84184d, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, const Goid_* unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SkritOnPartyMemberMadeMonsterAngry, 0x84162e, void, Params(Skrit::Object* unk1, const char* unk2, Go* unk3, Go* unk4, eAggroType unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(SkritOnSetHandbookCallback, 0x887b73, void, Params(Skrit::Object* unk1, const char* unk2, int unk3, int unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SkritOnSetLoreStateCallback, 0x887b07, void, Params(Skrit::Object* unk1, const char* unk2, const gpbstring<char>& unk3, eEntryType unk4, eQuestState unk5, eQuestState unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
DefineFunction(SkritOnSetStateCallback, 0x887a9b, void, Params(Skrit::Object* unk1, const char* unk2, const gpbstring<char>& unk3, eQuestState unk4, eQuestState unk5, bool unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
DefineFunction(SkritOnWorldLocation, 0x84169a, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, int unk4, bool unk5, bool unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
DefineFunction(SkritRegenerateLife, 0x841a03, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, double unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SkritRegenerateMana, 0x841a6f, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, double unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SkritSetPackMemberStats, 0x8418b9, void, Params(Skrit::Object* unk1, const char* unk2, const Goid_* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SPostWorldMessage, 0x848cb4, void, Params(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3, float unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SPostWorldMessage, 0x848c8a, void, Params(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3, unsigned long unk4, float unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(SPostWorldMessage, 0x848dd7, void, Params(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3, float unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SPostWorldMessage, 0x848dad, void, Params(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3, unsigned long unk4, float unk5), Args(unk1, unk2, unk3, unk4, unk5));
DefineFunction(SSendWorldMessage, 0x8485b1, void, Params(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3, unsigned long unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SSendWorldMessage, 0x8485d6, void, Params(eWorldEvent unk1, const Goid_* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
DefineFunction(SSendWorldMessage, 0x848920, void, Params(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3, unsigned long unk4), Args(unk1, unk2, unk3, unk4));
DefineFunction(SSendWorldMessage, 0x8488fe, void, Params(eWorldEvent unk1, const Goid_* unk2, const Scid_* unk3), Args(unk1, unk2, unk3));
DefineFunction(StartActiveTextureLogging, 0x7d6926, void, NO_PARAMS, NO_ARGS);
DefineFunction(StopActiveTextureLogging, 0x7d75ad, void, Params(const char* unk1), Args(unk1));
DefineFunction(TableTest, 0x9d9946, void, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
DefineFunction(Union, 0x942152, void, Params(JobAttributeBits& unk1, const JobAttributeBits& unk2, const JobAttributeBits& unk3), Args(unk1, unk2, unk3));
