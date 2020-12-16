#include<iostream>
#include<string>

class bicycle
{
private:
	double max_speed = 60;
	double current_speed;
	double weight = 12;
	double wheel_diameter = 7;
	double get_coordinate() { return 0.0; }

	std::string color = "blue";
public:

		bicycle() {}
		void change_color(std::string pcolor);
		bool accelerate(double v)
		{
			if (v <= this->max_speed)
			{
				this->current_speed = v;

				return true;

			}

			else
				return false;
		}

};
void bicycle::change_color(std::string pcolor)
{
	this->color = pcolor;


}
int main(void)
{
	bicycle bicycle_object1;
	bicycle * bicycle_object2;
	bicycle_object2 = new bicycle;
	bicycle_object1.change_color("grey");
	std::system("pause");



}