#include <iostream>

// 'StudentInfo'라는 이름의 구조체를 정의
struct StudentInfo {
	char bloodType;		// 혈액형
	int stdNumber;		// 학번
	float grade;		// 평점
};

int main() {
	// StudentInfo 구조체 타입의 변수 2개를 정의
	StudentInfo si1 = {'O', 20031128, 3.5f};
	StudentInfo si2 = {'A', 19961219, 2.3f};

	// 멤버의 값을 출력
	std::cout << "학번 : " << si1.stdNumber << std::endl;
	std::cout << "학점 : " << si1.grade << std::endl;
	std::cout << "혈액형 : " << si1.bloodType << std::endl << std::endl;
	std::cout << "학번 : " << si2.stdNumber << std::endl;
	std::cout << "학점 : " << si2.grade << std::endl;
	std::cout << "혈액형 : " << si2.bloodType << std::endl << std::endl;

	return 0;
}