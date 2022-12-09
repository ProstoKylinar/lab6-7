#include <gtest/gtest.h>
#include "class.hpp"

TEST(Generator_MGTU, Check
) {
MGTU *a = new MGTU;
std::map<std::string, std::vector<int>> randomNumbers;
std::string sex = "man";
std::string year = "2022";
std::string month = "12";
std::string day = "8";
CorrectInformation(year, month, day);
std::string result = a->generate(sex, year, month, day, randomNumbers);
EXPECT_EQ("22022120863838", result);
sex = "man";
year = "1054";
month = "3";
day = "2";
CorrectInformation(year, month, day);
result = a->generate(sex, year, month, day, randomNumbers);
EXPECT_EQ("21054030248860", result);
sex = "woman";
year = "2000";
month = "03";
day = "30";
CorrectInformation(year, month, day);
result = a->generate(sex, year, month, day, randomNumbers);
EXPECT_EQ("12000033077772", result);
sex = "woman";
year = "1980";
month = "01";
day = "25";
CorrectInformation(year, month, day);
result = a->generate(sex, year, month, day, randomNumbers);
EXPECT_EQ("11980012529154", result);
delete
a;
}
TEST(Generator_MIEM, Check
) {
MIEM *a = new MIEM;
std::map<std::string, std::vector<int>> randomNumbers;
std::string sex = "man";
std::string year = "2022";
std::string month = "12";
std::string day = "09";
CorrectInformation(year, month, day);
std::string result = a->generate(sex, year, month, day, randomNumbers);
EXPECT_EQ("820221209223624", result);
sex = "man";
year = "1054";
month = "3";
day = "2";
CorrectInformation(year, month, day);
result = a->generate(sex, year, month, day, randomNumbers);
EXPECT_EQ("810540302500271", result);
sex = "woman";
year = "2000";
month = "03";
day = "30";
CorrectInformation(year, month, day);
result = a->generate(sex, year, month, day, randomNumbers);
EXPECT_EQ("420000330186901", result);
sex = "woman";
year = "1980";
month = "01";
day = "25";
CorrectInformation(year, month, day);
result = a->generate(sex, year, month, day, randomNumbers);
EXPECT_EQ("419800125300599", result);
delete
a;
}

TEST(Generator_MIEM, SameBirth
) {
MIEM *a = new MIEM;
std::map<std::string, std::vector<int>> randomNumbers;
std::string sex = "man";
std::string year = "2022";
std::string month = "12";
std::string day = "09";
CorrectInformation(year, month, day);
std::string result = a->generate(sex, year, month, day, randomNumbers);
EXPECT_EQ("820221209177637", result);
sex = "man";
year = "2022";
month = "12";
 day = "09";
 CorrectInformation(year, month, day);
result = a->generate(sex, year, month, day, randomNumbers);
EXPECT_EQ("820221209705406", result);
sex = "man";
year = "2022";
month = "12";
day = "09";
CorrectInformation(year, month, day);
result = a->generate(sex, year, month, day, randomNumbers);
EXPECT_EQ("820221209857360", result);
delete
a;
}
TEST(Generator_MGTU, SameBirth
) {
MGTU *a = new MGTU;
std::map<std::string, std::vector<int>> randomNumbers;
std::string sex = "man";
std::string year = "2022";
std::string month = "12";
std::string day = "09";
CorrectInformation(year, month, day);
std::string result = a->generate(sex, year, month, day, randomNumbers);
EXPECT_EQ("22022120957938", result);
sex = "man";
year = "2022";
month = "12";
 day = "09";
 CorrectInformation(year, month, day);
result = a->generate(sex, year, month, day, randomNumbers);
EXPECT_EQ("22022120933861", result);
sex = "man";
year = "2022";
month = "12";
day = "09";
CorrectInformation(year, month, day);
result = a->generate(sex, year, month, day, randomNumbers);
EXPECT_EQ("22022120944217", result);
delete
a;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}


