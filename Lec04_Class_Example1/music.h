#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//music class
class music {
private:
	string title;
	string artist;
	string album;
	int year;
public:
	//생성자
	music(string title, string artist, string album, int year) {
		this->title = title;
		this->artist = artist;
		this->album = album;
		this->year = year;

	}
	//getters
	string getTitle() { return title; }
	string getArtist() { return artist; }
	string getAlbum() { return album; }
	int getYear() { return year; }
};

//musicService Class
class MusicStreamingService {
private:
	string serviceName;
	vector<music> musicList;
public:
	MusicStreamingService(string serviceName) {
		this->serviceName = serviceName;
	}
	//Music 객체를 service에 추가 기능
	void addMusic(string title, string artist, string album, int year) {
		music newMusic(title, artist, album, year);
		musicList.push_back(newMusic);
		cout << title << " by " << artist << " added to " << serviceName << endl;

	}
	//Title로 검색
	music* searchByTitle(string title) {
		for (int i = 0; i < musicList.size(); i++) {
			if (musicList[i].getTitle() == title)
				return &musicList[i];
				//return &musicList[i]; 이거랑 musicList + i 랑 같다
		}
		return NULL;
	}
	//Artist로 검색하기
	vector<music*> searchByArtist(string artist) {
		vector<music*> result;
		//musicList에 있는 artist와 입력 artist가 같으면 result에 push_back
	for (int i = 0; i < musicList.size(); i++) {
		if (musicList[i].getArtist() == artist) {
			result.push_back(&musicList[i]);
		}
	}
	return result;
	}
};