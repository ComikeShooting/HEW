#ifndef _FPS_H_
#define _FPS_H_

#include<Windows.h>
class FPS
{
public:
	FPS();
	~FPS();

	bool IsCheck(void);

private:
	DWORD m_preTime;//直前に実行した時間
};

#endif // _FPS_H_
