#include"BackGround.h"
#include"Game.h"

BackGround::BackGround(SpriteDesc desc)
	:m_transform{0.0f,0.0f,1.0f,1.0f,0.0f}
{
	HRESULT hr;
	Vertex vtx[] =
	{
		{{0.0f,0.0f,0.0f},{0.0f,0.0f}},
		{{2000.0f,-2000.0f,0.0f},{1.0f,0.0f}},
		{{0.0f,2000.0f,0.0f},{0.0f,1.0f}},
		{{2000.0f,2000.0f,0.0f},{1.0f,1.0f}},
	};

	//移動回転拡縮
	m_transform.posX = 0.0f;
	m_transform.posY = 0.0f;
	m_transform.scaleX = 1.0f;
	m_transform.scaleY = 1.0f;
	m_transform.angle = 0.0f;

	desc.pVtx = vtx;
	desc.pTexture="Assets/BackGround.PNG";
	m_pSprite = new Sprite(desc);

}

BackGround::~BackGround()
{
	delete m_pSprite;
}

void BackGround::Update(void)
{
	//動かすスピード
	//1秒=60フレームなら1/60で動かせば
	//60回処理したとき60/60でUV座標1.0分移動
	/*float scroll = 1.0f/900;
	m_animeUV.uvTopLeftX += scroll;
	m_animeUV.uvTopLeftY -= scroll;*/

	/*float scroll = GetCamera()->GetPosX() / 960.0f;
		m_animeUV.uvTopLeftX = scroll;*/
}

void BackGround::Draw(void)
{
	//m_pSprite->Write(&m_animeUV, 0);
	Transform transform = m_transform;
	transform.posX -= GetCamera()->GetPosX();

	m_pSprite->Write(&transform, 0);
	m_pSprite->Draw();
}
