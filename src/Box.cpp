//Box class defined here
class Box{
	int h,w;
	public :
	Box(int h,int w){
		this->h=h;
		this->w=w;
	}
	int area(){
		return this->h * this->w;
	}
};
