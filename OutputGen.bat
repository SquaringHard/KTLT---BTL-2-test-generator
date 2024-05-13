@echo Generating outputs
@g++ -o OutputGen OutputGen.cpp study_in_pink2.cpp -I . -std=c++11
@OutputGen.exe
@pause