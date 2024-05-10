@InputGen.exe
@ExpectGen.exe
@echo Generating outputs
@g++ -g -o OutputGen OutputGen.cpp study_in_pink2.cpp
@OutputGen.exe
@pause