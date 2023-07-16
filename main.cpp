#include <audio.h>
#include <exception>
#include <fstream>
#include <iostream>
#include <memory>
#include <string>

int main(int, char**) {
    auto pAudio = std::make_shared<fkkt::audio>();
    auto list = pAudio->audio_array_list;
    std::ifstream inFile("D:/Sample/cpp_audio/music.txt");
    char ch[100];
    while (inFile.getline(ch, 100)) {
    }
    pAudio->play(1);
    inFile.close();
    return 0;
}
