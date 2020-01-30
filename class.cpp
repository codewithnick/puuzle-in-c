#include "main.h"

class key
{
public:
virtual void move(int *a)=0;
};
class up:public key
{public:
	void move(int *a)
	{
      swap(a+4,a)   ;
	}
};
class down:public key
{public:
	void move(int *a)
	{
      swap(a-4,a)   ;
	}
};
class left:public key
{ public:
	void move(int *a)
	{
        swap(a+1,a)   ;
	}
};
class right:public key
{ public:
	void move(int *a)
	{
       swap(a-1,a)   ;
	}
};
