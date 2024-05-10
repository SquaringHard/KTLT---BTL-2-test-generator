/// Demo code
#ifndef _H_STUDY_IN_PINK_2_H_
#define _H_STUDY_IN_PINK_2_H_

#include "main.h"

class StudyPinkProgram {
private:
    ofstream ofs;

public:
    StudyPinkProgram(const string & config_file_path, const string &outfile){
        // (your original code)

        ofs.open(outfile);
        // ofs << config->str() << "\n\n";
    };

    void printResult() {
        ofs << "Demo code\n";
        ofs << "------------------------   Test end   ------------------------";

        ofs.close();
    };

    /*void printStep(int si) {
        ofs << "**   Step: " + to_string(si) + "   **\n";
        ofs << "-- Sherlock: " + sherlock->str() + "\n";
        ofs << "Stats: " + to_string(sherlock->getHp()) + " HP ~ " + to_string(sherlock->getExp()) + " EXP\n";
        ofs << "Sherlock Bag: " + sb->str() + "\n";
        ofs << "-- Watson: " + watson->str() + "\n";
        ofs << "Stats: " + to_string(watson->getHp()) + " HP ~ " + to_string(watson->getExp()) + " EXP\n";
        ofs << "Watson Bag: " + wb->str() + "\n";
        ofs << "-- Criminal: " + criminal->str() + "\n";
        ofs << "-- Robots: " + to_string(arr_mv_objs->size()-3) + "\n";
        for (int i=3; i<arr_mv_objs->size(); i++)
            {   ofs << arr_mv_objs->get(i)->str() + " ~ item: ";
                switch (arr_mv_objs->get(i)->getItem()->gettype()){
                case (MAGIC_BOOK):
                    ofs << "MagicBook";
                    break;
                case (ENERGY_DRINK):
                    ofs << "EnergyDrink";
                    break;
                case (FIRST_AID):
                    ofs << "FirstAid";
                    break;
                case (EXCEMPTION_CARD):
                    ofs << "ExcemptionCard";
                    break;
                case (PASSING_CARD):
                    ofs << "PassingCard";
                    break;
                default:
                    ofs << "UNDEFINED";
                    break;
                }
                ofs << "\n";
            }
        ofs << "\n";
    }; */

    void run(bool verbose) {
        printResult();
    };

    ~StudyPinkProgram() {
    };
};

#endif /* _H_STUDY_IN_PINK_2_H_ */
