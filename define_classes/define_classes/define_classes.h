class BaseObject
{
public:
	virtual void Delete() const;//ɾ������
	virtual void Update() const;//�������
	virtual void OnCollision(BaseObject* obj) const;//������ײ

protected:
	int positionX, positionY;//�ᡢ������
	int velocityX, velocityY;//���������ٶ�
	int typeId;//��������ID
	int uniqueId;//ÿ�������һ�޶���ID
	int shapeType;//������״�����ࣺ0ΪԲ�Σ�1Ϊ����
	int radius;//Բ�ΰ뾶
	int width;//���ο��
	int height;//���θ߶�
};

class Charater : public BaseObject
{
public:
	virtual void Update() const;//�������
	virtual void OnCollision(BaseObject* obj) const;//������ײ

	virtual void Fire() const;//����
	virtual void Move() const;//�ƶ�

protected://�ȼ��赯ϻ�ӵ�����
	int bulletType, bulletPeriod, lastFireTime;//�ӵ����͡��ӵ��������ڡ��ϴο���ʱ��
	float bulletPeriodRate;//�ӵ����������ٶȱ���(�����ӵ������ٶ�)
	int HP, HPIncrement, lastTime;//Ѫ����Ѫ������(�����ɸ�)��Ѫ�����ٱ��ʡ�buff����ʱ��
	float velocityRate;//�ٶȱ���(����������ƶ��ٶȴ�С)
};

class Player : public Charater
{
public:
	void Update() const override;//�������
	void OnCollision(BaseObject* obj) const override;//������ײ

	void Fire() const override;//����
	void Move() const override;//�ƶ�
};

class Monster : public Charater
{
public:
	void Update() const override;//�������
	void OnCollision(BaseObject* obj) const override;//������ײ

	void Fire() const override;//����
	void Move() const override;//�ƶ�
};

class Item : public BaseObject
{
public:
	void Use(Player* user) const;//ʹ����Ʒ

	void Update() const override;//�������
	void OnCollision(BaseObject* obj) const override;//������ײ
};

class Bullet : BaseObject
{
public:
	void Update() const override;//�������
	void OnCollision(BaseObject* obj) const override;//������ײ
	
protected:
	int attack;//������
};
