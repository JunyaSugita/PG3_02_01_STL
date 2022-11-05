#include <stdio.h>
#include <list>
#include <iostream>
using namespace std;

int main() {
	const char *yamanote[28] = {
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okatimati",
		"Ueno",
		"Uguisudani",
		"Nippori",
		"Tabata",
		"Komagome",
		"Sugamo",
		"Otsuka",
		"Ikebukuro",
		"Mejiro",
		"Takadanobaba",
		"Sin-Okubo",
		"Shinjuku",
		"Yoyogi",
		"Harajuku",
		"Shibuya",
		"Ebisu",
		"Meguro",
		"Gotanda",
		"Osaki",
		"Sinagawa",
		"Tamachi",
		"Hamamatsucho",
		"Sinbasi",
		"Yurakucho"
	};
	list < const char* > lst(28);

	auto itr = lst.begin();
	for (int i = 0; i < 28; i++) {
		*itr = yamanote[i];
		itr++;
	}
	
	//�\��
	printf("1990�N\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	//�����闢�w��}��
	const char* newStation1 = "Nishi-Nippori";
	for (list<const char*>::iterator itr = lst.begin(); itr != lst.end();++itr) {
		if (*itr == "Tabata") {
			itr = lst.insert(itr,newStation1);
			++itr;
		}
	}

	//�\��
	printf("\n\n2019�N\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	//���փQ�[�g�E�F�C�w��}��
	const char* newStation2 = "Takanawa Gateway";
	for (list<const char*>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = lst.insert(itr, newStation2);
			++itr;
		}
	}

	//�\��
	printf("\n\n2022�N\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	return 0;
}