#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenuUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "ShopItemCategory_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuUI.MainMenuUI_C
// 0x0188 (0x03E8 - 0x0260)
class UMainMenuUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       TutorialButtonAnim;                                // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoverOnCoins;                                      // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HideTitleAnim;                                     // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FlyIn;                                             // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HideMenu;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                ADDcoins;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               AppearencesWrapBox;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_0;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_1;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                CloseNotifButton;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                CoinButton;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_162;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_189;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Loadout_Button;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuChat_C*                            MenuChat;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MoreButton;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Play_Button;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_106;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SaleButton;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SelectedMapBox;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Setup_button;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Shop_button;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ShopNotifButton;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Skill_button;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                SkinRotationPopup;                                 // 0x0330(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USteamFriend_parent_C*                  SteamFriend_parent;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x0340(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x0348(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_3;                                       // 0x0350(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_4;                                       // 0x0358(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_5;                                       // 0x0360(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_6;                                       // 0x0368(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_7;                                       // 0x0370(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_13;                                      // 0x0378(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_15;                                      // 0x0380(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_559;                                     // 0x0388(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Title;                                             // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                TutorialButton;                                    // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TutorialText;                                      // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 LobbyType;                                         // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class AMainMenuPlayer_C*                      OwnerPlayer;                                       // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ARobberController_C*                    As_Robber_Controller;                              // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TitleHidden_;                                      // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C9[0x3];                                      // 0x03C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Countdown;                                         // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URobberGI_C*                            As_Robber_GI;                                      // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALobbyManager_C*                        LobbyManager;                                      // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MapSale_;                                          // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E1[0x3];                                      // 0x03E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SaleAmount;                                        // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MainMenuUI(int32 EntryPoint);
	void BndEvt__MainMenuUI_Setup_button_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MainMenuUI_Button_2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void CheckSale();
	void BndEvt__MainMenuUI_Skill_button_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
	void ShownewSkins();
	void ShopOpened(class UShopUI_C* Widget);
	void OpenShop();
	void BndEvt__MainMenuUI_ShopNotifButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MainMenuUI_CloseNotifButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void UpdateLobbyDataInfo();
	void ContinueStartGame();
	void ViewLoadout();
	void BndEvt__MainMenuUI_TutorialButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MainMenuUI_CoinButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MainMenuUI_ADDcoins_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MainMenuUI_CoinButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MainMenuUI_CoinButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MainMenuUI_MoreButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void RefreshInventory();
	void OpenMain();
	void UpdateMap();
	void BndEvt__MainMenuUI_Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void CheckReady();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StartGame();
	void HideTitle(bool Hide_);
	void UnhighlightAll();
	void HighlightButton(class UButton* Button_0);
	void HideCurrentTab();
	void BndEvt__MainMenuUI_Shop_button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MainMenuUI_Play_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MainMenuUI_Loadout_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MainMenuUI_Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MainMenuUI_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void PreviewItem(class UClass* ItemInfo, int32 SalePrice);
	void CancelDrag();
	void DragItemFromCategory(EShopItemCategory Category);
	void ChangeCategory(EShopItemCategory Category);
	void RemoveloadoutCategory();
	void Remove();
	class FText LeaveLobbytext();
	class FText LobbyType_Text();
	ESlateVisibility CollapsedOnClient();
	ESlateVisibility CollapsedOnHost();
	class FText GetText_0();
	class FText GetText_1();
	struct FSlateBrush GetBrush_0();
	class FText GetText_2();
	float GetPercent_0();
	void CheckPlayersReady(bool* All_ready_);
	ESlateVisibility Get_CountdownText_Visibility_0();
	class FText GetText_3();
	void SetTutorialButton(class FString* TutorialLevel);
	ESlateVisibility Get_SkinRotationPopup_Visibility_0();
	ESlateVisibility GetVisibility_0();
	class FText GetText_4();
	ESlateVisibility Get_Setup_button_Visibility_0();
	class FText GetText_5();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenuUI_C">();
	}
	static class UMainMenuUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenuUI_C>();
	}
};
static_assert(alignof(UMainMenuUI_C) == 0x000008, "Wrong alignment on UMainMenuUI_C");
static_assert(sizeof(UMainMenuUI_C) == 0x0003E8, "Wrong size on UMainMenuUI_C");
static_assert(offsetof(UMainMenuUI_C, UberGraphFrame) == 0x000260, "Member 'UMainMenuUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, TutorialButtonAnim) == 0x000268, "Member 'UMainMenuUI_C::TutorialButtonAnim' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, HoverOnCoins) == 0x000270, "Member 'UMainMenuUI_C::HoverOnCoins' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, HideTitleAnim) == 0x000278, "Member 'UMainMenuUI_C::HideTitleAnim' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, FlyIn) == 0x000280, "Member 'UMainMenuUI_C::FlyIn' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, HideMenu) == 0x000288, "Member 'UMainMenuUI_C::HideMenu' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, ADDcoins) == 0x000290, "Member 'UMainMenuUI_C::ADDcoins' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, AppearencesWrapBox) == 0x000298, "Member 'UMainMenuUI_C::AppearencesWrapBox' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, Button) == 0x0002A0, "Member 'UMainMenuUI_C::Button' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, Button_0) == 0x0002A8, "Member 'UMainMenuUI_C::Button_0' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, Button_1) == 0x0002B0, "Member 'UMainMenuUI_C::Button_1' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, CloseNotifButton) == 0x0002B8, "Member 'UMainMenuUI_C::CloseNotifButton' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, CoinButton) == 0x0002C0, "Member 'UMainMenuUI_C::CoinButton' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, Image_162) == 0x0002C8, "Member 'UMainMenuUI_C::Image_162' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, Image_189) == 0x0002D0, "Member 'UMainMenuUI_C::Image_189' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, Loadout_Button) == 0x0002D8, "Member 'UMainMenuUI_C::Loadout_Button' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, MenuChat) == 0x0002E0, "Member 'UMainMenuUI_C::MenuChat' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, MoreButton) == 0x0002E8, "Member 'UMainMenuUI_C::MoreButton' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, Play_Button) == 0x0002F0, "Member 'UMainMenuUI_C::Play_Button' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, ProgressBar_106) == 0x0002F8, "Member 'UMainMenuUI_C::ProgressBar_106' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, SaleButton) == 0x000300, "Member 'UMainMenuUI_C::SaleButton' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, SelectedMapBox) == 0x000308, "Member 'UMainMenuUI_C::SelectedMapBox' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, Setup_button) == 0x000310, "Member 'UMainMenuUI_C::Setup_button' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, Shop_button) == 0x000318, "Member 'UMainMenuUI_C::Shop_button' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, ShopNotifButton) == 0x000320, "Member 'UMainMenuUI_C::ShopNotifButton' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, Skill_button) == 0x000328, "Member 'UMainMenuUI_C::Skill_button' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, SkinRotationPopup) == 0x000330, "Member 'UMainMenuUI_C::SkinRotationPopup' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, SteamFriend_parent) == 0x000338, "Member 'UMainMenuUI_C::SteamFriend_parent' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, TextBlock_0) == 0x000340, "Member 'UMainMenuUI_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, TextBlock_1) == 0x000348, "Member 'UMainMenuUI_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, TextBlock_3) == 0x000350, "Member 'UMainMenuUI_C::TextBlock_3' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, TextBlock_4) == 0x000358, "Member 'UMainMenuUI_C::TextBlock_4' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, TextBlock_5) == 0x000360, "Member 'UMainMenuUI_C::TextBlock_5' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, TextBlock_6) == 0x000368, "Member 'UMainMenuUI_C::TextBlock_6' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, TextBlock_7) == 0x000370, "Member 'UMainMenuUI_C::TextBlock_7' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, TextBlock_13) == 0x000378, "Member 'UMainMenuUI_C::TextBlock_13' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, TextBlock_15) == 0x000380, "Member 'UMainMenuUI_C::TextBlock_15' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, TextBlock_559) == 0x000388, "Member 'UMainMenuUI_C::TextBlock_559' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, Title) == 0x000390, "Member 'UMainMenuUI_C::Title' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, TutorialButton) == 0x000398, "Member 'UMainMenuUI_C::TutorialButton' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, TutorialText) == 0x0003A0, "Member 'UMainMenuUI_C::TutorialText' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, LobbyType) == 0x0003A8, "Member 'UMainMenuUI_C::LobbyType' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, OwnerPlayer) == 0x0003B8, "Member 'UMainMenuUI_C::OwnerPlayer' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, As_Robber_Controller) == 0x0003C0, "Member 'UMainMenuUI_C::As_Robber_Controller' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, TitleHidden_) == 0x0003C8, "Member 'UMainMenuUI_C::TitleHidden_' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, Countdown) == 0x0003CC, "Member 'UMainMenuUI_C::Countdown' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, As_Robber_GI) == 0x0003D0, "Member 'UMainMenuUI_C::As_Robber_GI' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, LobbyManager) == 0x0003D8, "Member 'UMainMenuUI_C::LobbyManager' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, MapSale_) == 0x0003E0, "Member 'UMainMenuUI_C::MapSale_' has a wrong offset!");
static_assert(offsetof(UMainMenuUI_C, SaleAmount) == 0x0003E4, "Member 'UMainMenuUI_C::SaleAmount' has a wrong offset!");

}

