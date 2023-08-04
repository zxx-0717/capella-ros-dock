#include "tf2/LinearMath/Transform.h"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2/LinearMath/Matrix3x3.h"
#include "tf2/utils.h"
#include <iostream>
#include "Eigen/Dense"

Eigen::Array33d s;

using namespace std;

void printQuaternion(const tf2::Quaternion &q)
{
	cout << "x => " << q.getX() << "  y => " << q.getY() << "  z => " << q.getZ() << "  w => " << q.getW() << endl;
	cout << "------------------------------------------" << endl << endl;
}

void printRPY(const tf2::Quaternion &q)
{
	double yaw, pitch, roll;
	
	tf2::getEulerYPR(q, yaw, pitch, roll);
	cout << "roll: " << roll << ", pitch: " << pitch << ", yaw: " << yaw << endl;
	cout << "------------------------------------------" << endl << endl;
}

int main()
{
	// o => d tf:(0,0,0) (pi/4, -pi/2, 0)
	// d => o tf:(0,0,0) (-pi/2, 0, -pi/2)
	double yaw, pitch, roll;
	tf2::Matrix3x3 m_basis{0,-1,0,  0,0,-1,  1,0,0};
	tf2::Vector3 m_origin{0,0,0};
	tf2::Transform tf_o2d, tf_tmp1, tf_tmp2;
	static tf2::Quaternion q_o2d, q_d2o, q_tmp1, q_tmp2, q_tmp3;
	tf_o2d = tf2::Transform(m_basis, m_origin);
	q_o2d = tf_o2d.getRotation();

	cout << "******** q_o2d ********" << endl;
        printQuaternion(q_o2d);
	printRPY(q_o2d);

	tf2::getEulerYPR(q_o2d, yaw, pitch, roll);
	q_tmp1.setRPY(roll, pitch, yaw);
	q_tmp1.normalize();

	cout << "******** q_tmp1 ********" << endl;
        printQuaternion(q_tmp1);
	printRPY(q_tmp1);

	cout << endl;

	tf_tmp1.setIdentity();
	tf_tmp1.setRotation(q_tmp1);
	tf2::Transform tf_identity;
	tf_identity.setIdentity();
	tf_tmp1 = tf_identity * tf_tmp1;
	q_tmp2 = tf_tmp1.inverse().getRotation();

	cout << "******** q_tmp2 ********" << endl;
        printQuaternion(q_tmp2);
	printRPY(q_tmp2);

	q_tmp3 = q_tmp1.inverse() * q_o2d;
	q_tmp3.normalize();
	cout << "******** q_tmp3 ********" << endl;
        printQuaternion(q_tmp3);
	printRPY(q_tmp3);

	return 0;
}