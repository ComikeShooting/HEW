#ifndef _BULLET_H_
#define _BULLET_H_

#include "Sprite.h"

class Bullet
{
public:
	Bullet(SpriteDesc desc);
	~Bullet();
	void Update();
	void Draw();

	void SetPos(float x, float y);
	void SetMove(float x, float y);
	bool IsDestroy();
	void Destroy();

	Transform GetTransform();
	float GetWidth();
	float GetHeight();

private:
		Transform m_transform;
	Sprite* m_pSprite;

	//eÌîñ
	bool m_isDestroy;	//ejütO
	float m_moveX;		//eÌÚ®ûüX
	float m_moveY;		//eÌÚ®ûüY
	float m_sizeW;		//¡Ìå«³
	float m_sizeH;		//cÌå«³

};

#endif // !_BULLET_H_

