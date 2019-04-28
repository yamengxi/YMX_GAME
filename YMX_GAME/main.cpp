#include <queue>
#include <string>
#include <vector>
using namespace std;

class BaseObject{
public:
virtual void update();
virtual void onCollision(BaseObject Obj);
};

enum ObjType {
	ENUM_MAP, ENUM_MONSTOR, ENUM_PLAYER, ENUM_WALL, ENUM_BULLET
};

class ResModule{
public:
	void Load(ObjType type, int type_id)//load attr. Bitmap
	{}
};

class Event{
public:
	int time;
	string type;
	int type_id;
	int pos
};

class SceneModule{
public:
	BaseObject *p_obj_list;
	priority_queue<Event> heap; 
	void Init()
	{
		vector<Event> m = ResModule.load(map, round_0);
		for(
			heap.push(w);
	}
	Run()
	{
	Await time_ signal
	While(heap.top().time == now)
		p_obj_list.push(new xxxx);
		heap.pop();
	Render.show_img(wall, background)
	For p_obj in p_obj_list:
		P_obj->update();
	Render.show_img(P_obj)
	CollisionDetect()
	}
	CollisionDetect()
	{
	For i in p_obj_list:
		For j in p_obj_list:
			If(Xxxxxxxx(i, j))
				i-> onCollision(); == (*i).
				j-> onCollision();
	}
	void Delete(int id);
}

int main()
{
	Welcome()
	ResModule.init();
	SceneModule.Init_map()
	Timer timer;
	Signal time_signal;
	While(Timer)
		New thread(SceneModule().run());
	
}

SceneModule{
BaseObj *p_obj_list;
Heap<Event{time, type, type_id, pos}>; 
Init()
{
List<Event> m = ResModule.load(map, round_0);
For w in m:
	Heap.push(w);
}
Run()
{
Await time_ signal
While(heap.top().time == now)
	p_obj_list.push(new xxxx);
	heap.pop();
Render.show_img(wall, background)
For p_obj in p_obj_list:
	P_obj->update();
Render.show_img(P_obj)
CollisionDetect()
}
CollisionDetect()
{
For i in p_obj_list:
	For j in p_obj_list:
		If(Xxxxxxxx(i, j))
			i-> onCollision(); == (*i).
			j-> onCollision();
}
Delete(id)
}
Render{
	Show_img(pos, bitmap, layer)
} 
