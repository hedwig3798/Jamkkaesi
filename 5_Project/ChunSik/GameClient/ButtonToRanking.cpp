#include "ButtonToRanking.h"
#include "ClientHeaders.h"

ButtonToRanking::ButtonToRanking(ManagerSet* _managers)
	: Button(_managers)
{
}

ButtonToRanking::~ButtonToRanking()
{

}

void ButtonToRanking::Render(GraphicsEngine* _graphicsEngine)
{

	// 글자색 / 글자 크기 / 글자 위치 설정
	// Button에서 protected로 text / position / size를 받아옴
// 	std::string renderText = text;
// 	_graphicsEngine->ColorSet(D2D1::ColorF::Black);
// 	_graphicsEngine->ChangeFontSize(fontSize);
// 	_graphicsEngine->DrawString((int)stringPosition.x, (int)stringPosition.y, renderText);
// 	_graphicsEngine->ChangeFontSize(12.f);

	// 여기에 버튼 이미지 넣기
	_graphicsEngine->DrawSprite("rankingbtn", 96, 747, 845, 202, 70);

// 	rm->LoadImage("creditbtn", pm->GetResourcePath(L"ui\\title_btn\\UI_Credit_btn.png"));//95
// 	rm->LoadImage("rankingbtn", pm->GetResourcePath(L"ui\\title_btn\\UI_Rank_btn.png"));//96
// 	rm->LoadImage("startbtn", pm->GetResourcePath(L"ui\\title_btn\\UI_Start_btn.png"));//97
}

void ButtonToRanking::OnButtonClicked()
{
	SoundManager::GetInstance()->Play(SoundManager::MOUSEEFFECT, SoundManager::BUTTON);
	SceneManager* sceneManager = GetManagers()->GetSceneManager();
	sceneManager->ChangeScene("RankingScene");
}
