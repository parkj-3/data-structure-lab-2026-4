#include "rectangle.h"
#include "pet.h"
#include "music.h"
using namespace std;

int main() {
	//rectangle 1 객체 생성
	rectangle rect1(3.4, 2.5);
	cout << "rectangle 1:" << std::endl;
	//printf("rectangle 1:\n");
	cout << "Area: " << rect1.getArea() << endl;
	//printf("Area: %lf", rect1.getArea());
	cout << "Perimeter:" << rect1.getPerimeter() << endl;
	cout << "Is square ?" << boolalpha << rect1.isSquare() << endl;
	printf("===========================\n");

	//pet 클래스 테스트
	pet myPet("kong", 5, "dog");
	cout << "My pet's name is " << myPet.getName() << endl;
	//Puppy 클래스 테스트
	Puppy myPuppy("Lucky", 10, "dog", "munchicken");
	cout << "My puppy's breed is " << myPuppy.getBreed() << endl;
	printf("===========================\n");

	//streaming service 테스트
	MusicStreamingService myService("spotify");
	//음악 service에 추가하기
	myService.addMusic("SWIM", "BTS", "ARIRANG", 2026);
	myService.addMusic("RUDE", "HE2HE", "RUDE", 2026);
	myService.addMusic("BANGBANG", "IVE", "REVIVE", 2026);

	//title로 search
	string music_title;
	cout << "Enter the Music Title: ";
	cin >> music_title;
	//scanf_s("%s",&music_title);
	music* result = myService.searchByTitle(music_title);
	if (result != NULL) {
		cout << "Found: " << result->getTitle() << " by " << result->getArtist() << endl;
	
	}
	else {
		cout << "Not Found" << endl;
	}

	string artist_name;
	cout << "Enter the Artist Name: ";
	cin >> artist_name;

	vector<music*> artistResult = myService.searchByArtist(artist_name);
	if (artistResult.size() > 0) {
		cout << "Found" << artistResult.size() << " songs by " << artist_name << " : " << endl;
		for (int i = 0; i < artistResult.size(); i++) {
			cout << artistResult[i]->getTitle() << endl;
		}
	}
	else {
		cout << "Not Found" << endl;
	}
	return 0;
}