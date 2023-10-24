#include <gtest/gtest.h>
#include "class.hpp"

TEST(CheckInformation, TEST_1) {
std::string university = "MGTU";
std::string sex = "man";
std::string year = "2022";
std::string month = "12";
std::string day = "8";
EXPECT_TRUE(CheckInformation(university, sex, year, month, day));
university = "MGTUU";
sex = "man";
year = "2022";
month = "22";
day = "80";
EXPECT_FALSE(CheckInformation(university, sex, year, month, day));
university = "MGTUU";
sex = "Vanya";
year = "2022";
month = "22";
day = "80";
EXPECT_FALSE(CheckInformation(university, sex, year, month, day));

}
TEST(CorrectInformation, TEST_2) {
std::string year = "2022";
std::string month = "12";
std::string day = "8";
CorrectInformation(year, month, day);
EXPECT_EQ("2022", year);
EXPECT_EQ("12", month);
EXPECT_EQ("08", day);
year = "222";
month = "6";
day = "1";
CorrectInformation(year, month, day);
EXPECT_EQ("0222", year);
EXPECT_EQ("06", month);
EXPECT_EQ("01", day);
}

TEST(Generator_MGTU, TEST_3_MGTU
) {
    Generator templateGenerator;
std::map<std::string, std::vector<int>> randomNumbers;
std::string sex = "man";
std::string year = "2022";
std::string month = "12";
std::string day = "8";
CorrectInformation(year, month, day);
    EXPECT_EQ("22022120863838", templateGenerator.

generator("MGTU")->generate(sex, year, month, day, randomNumbers));
sex = "man";
year = "1054";
month = "3";
day = "2";
CorrectInformation(year, month, day);
EXPECT_EQ("21054030248860", templateGenerator.

generator("MGTU")->generate(sex, year, month, day, randomNumbers));
sex = "woman";
year = "2000";
month = "03";
day = "30";
CorrectInformation(year, month, day);
EXPECT_EQ("12000033077772", templateGenerator.generator("MGTU")->generate(sex, year, month, day, randomNumbers));
sex = "woman";
year = "1980";
month = "01";
day = "25";
CorrectInformation(year, month, day);
EXPECT_EQ("11980012529154", templateGenerator.

generator("MGTU")->generate(sex, year, month, day, randomNumbers));
}

TEST(Generator_MIEM, TEST_4_MIEM
) {
Generator templateGenerator;
std::map<std::string, std::vector<int>> randomNumbers;
std::string sex = "man";
std::string year = "2022";
std::string month = "12";
std::string day = "09";
CorrectInformation(year, month, day);
EXPECT_EQ("820221209223624", templateGenerator.

generator("MIEM")->generate(sex, year, month, day, randomNumbers));
sex = "man";
year = "1054";
month = "3";
day = "2";
CorrectInformation(year, month, day);
EXPECT_EQ("810540302500271", templateGenerator.

generator("MIEM")->generate(sex, year, month, day, randomNumbers));
sex = "woman";
year = "2000";
month = "03";
day = "30";
CorrectInformation(year, month, day);
EXPECT_EQ("420000330186901", templateGenerator.

generator("MIEM")->generate(sex, year, month, day, randomNumbers));

sex = "woman";
year = "1980";
month = "01";
day = "25";
CorrectInformation(year, month, day);
EXPECT_EQ("419800125300599", templateGenerator.

generator("MIEM")->generate(sex, year, month, day, randomNumbers));
}

TEST(Generator_MIEM, TEST_5_MIEM_SameBirth
) {
Generator templateGenerator;
std::map<std::string, std::vector<int>> randomNumbers;
std::string sex = "man";
std::string year = "2022";
std::string month = "12";
std::string day = "09";
CorrectInformation(year, month, day);
EXPECT_EQ("820221209177637", templateGenerator.

generator("MIEM")->generate(sex, year, month, day, randomNumbers));
sex = "man";
year = "2022";
month = "12";
 day = "09";
 CorrectInformation(year, month, day);
EXPECT_EQ("820221209705406", templateGenerator.

generator("MIEM")->generate(sex, year, month, day, randomNumbers));
sex = "man";
year = "2022";
month = "12";
day = "09";
CorrectInformation(year, month, day);
EXPECT_EQ("820221209857360", templateGenerator.

generator("MIEM")->generate(sex, year, month, day, randomNumbers));


}
TEST(Generator_MGTU, TEST_6_MGTU_SameBirth
) {
Generator templateGenerator;
std::map<std::string, std::vector<int>> randomNumbers;
std::string sex = "man";
std::string year = "2022";
std::string month = "12";
std::string day = "09";
CorrectInformation(year, month, day);
EXPECT_EQ("22022120957938", templateGenerator.

generator("MGTU")->generate(sex, year, month, day, randomNumbers));
sex = "man";
year = "2022";
month = "12";
 day = "09";
 CorrectInformation(year, month, day);
EXPECT_EQ("22022120933861", templateGenerator.

generator("MGTU")->generate(sex, year, month, day, randomNumbers));
sex = "man";
year = "2022";
month = "12";
day = "09";
CorrectInformation(year, month, day);
EXPECT_EQ("22022120944217", templateGenerator.

generator("MGTU")->generate(sex, year, month, day, randomNumbers));

}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}


