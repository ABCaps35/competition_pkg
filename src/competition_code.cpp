#include "std_servs/Trigger.h"
#include "ros/ros.h"

//void method(

int main(int argc, char ** argv){
	ros::init(argc, argv, "competition_node");
	ros::NodeHandle n;
	ros::Subscriber sub = n.subscribe(subscription_name, 1000, method);
	ros::spin();
	return 0;
}
