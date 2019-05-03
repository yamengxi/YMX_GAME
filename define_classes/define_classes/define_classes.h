class BaseObject
{
public:
	virtual void Delete() const;//删除对象
	virtual void Update() const;//常规更新
	virtual void OnCollision(BaseObject* obj) const;//处理碰撞

protected:
	int positionX, positionY;//横、纵坐标
	int velocityX, velocityY;//横向、纵向速度
	int typeId;//物体种类ID
	int uniqueId;//每个物体独一无二的ID
	int shapeType;//几何形状的种类：0为圆形，1为矩形
	int radius;//圆形半径
	int width;//矩形宽度
	int height;//矩形高度
};

class Charater : public BaseObject
{
public:
	virtual void Update() const;//常规更新
	virtual void OnCollision(BaseObject* obj) const;//处理碰撞

	virtual void Fire() const;//开火
	virtual void Move() const;//移动

protected://先假设弹匣子弹无限
	int bulletType, bulletPeriod, lastFireTime;//子弹类型、子弹发射周期、上次开火时间
	float bulletPeriodRate;//子弹发射周期速度倍率(控制子弹发射速度)
	int HP, HPIncrement, lastTime;//血量、血量增速(可正可负)、血量增速倍率、buff持续时间
	float velocityRate;//速度倍率(控制人物的移动速度大小)
};

class Player : public Charater
{
public:
	void Update() const override;//常规更新
	void OnCollision(BaseObject* obj) const override;//处理碰撞

	void Fire() const override;//开火
	void Move() const override;//移动
};

class Monster : public Charater
{
public:
	void Update() const override;//常规更新
	void OnCollision(BaseObject* obj) const override;//处理碰撞

	void Fire() const override;//开火
	void Move() const override;//移动
};

class Item : public BaseObject
{
public:
	void Use(Player* user) const;//使用物品

	void Update() const override;//常规更新
	void OnCollision(BaseObject* obj) const override;//处理碰撞
};

class Bullet : BaseObject
{
public:
	void Update() const override;//常规更新
	void OnCollision(BaseObject* obj) const override;//处理碰撞
	
protected:
	int attack;//攻击力
};
