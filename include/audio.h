#pragma once
#include <array>

namespace fkkt {

const unsigned int Do = 523;
const unsigned int Re = 578;
const unsigned int Mi = 659;
const unsigned int Fa = 698;
const unsigned int So = 784;
const unsigned int La = 880;
const unsigned int Si = 988;

const unsigned int default_play_duration = 500;

class audio {
   private:
    /* data */
   public:
    audio(/* args */);
    ~audio();
    std::array<unsigned int, 7> audio_array_list = {Do, Re, Mi, Fa, So, La, Si};

    /**
     * @brief play audio
     *
     * @tparam Ty
     * @param audio
     * @param music_index from 0 to 6
     * @param time
     */
    template <typename T>
    void play(T music_index, T time = default_play_duration) const {
        unsigned int m = audio_array_list.at(music_index);
        _beep(m, time);
    }

    /**
     * @brief play audio
     *
     * @tparam Ty
     * @param audio
     * @param music from 1~7
     * @param time
     */
    template <typename T>
    void play_from_file(T music_index, T time = default_play_duration) const {
        if (music_index < 1 || music_index > 7) {
            return;
        }
        play(audio, --music_index, time);
    }
};

}  // namespace fkkt
