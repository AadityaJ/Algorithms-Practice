mkdir $1
touch "$1/comments.txt"
touch "$1/a-out"
touch "$1/1.cpp"
touch "$1/2.cpp"
touch "$1/3.cpp"
touch "$1/4.cpp"
touch "$1/5.cpp"
touch "$1/6.cpp"
touch "$1/7.cpp"
touch "$1/8.cpp"
touch "$1/9.cpp"
touch "$1/10.cpp"
touch "$1/11.cpp"
touch "$1/12.cpp"
touch "$1/13.cpp"
touch "$1/14.cpp"
touch "$1/15.cpp"
touch "$1/16.cpp"
touch "$1/17.cpp"
touch "$1/18.cpp"
touch "$1/19.cpp"
touch "$1/20.cpp"
touch "$1/20.cpp"
touch "$1/21.cpp"
touch "$1/22.cpp"
touch "$1/23.cpp"
touch "$1/24.cpp"
touch "$1/25.cpp"
touch "$1/26.cpp"
touch "$1/27.cpp"
touch "$1/28.cpp"
touch "$1/29.cpp"
touch "$1/30.cpp"
cd "$1"
str1="#include <iostream>"
str2="#include <string>"
str3="#include <vector>"
str4="#include <algorithm>"
str11="#include <vector>"
str12="#include <climits>"
str5="using namespace std;"
str6="int main(int argc, char const *argv[]){"
str7="\tint t;\n\tcin>>t;\n\twhile(t--){\n"
str8="\t}"
str9="\treturn 0;"
str10="}"
for file in *.cpp; do
  echo -e $str1 >> "$file"
  echo -e $str2 >> "$file"
  echo -e $str3 >> "$file"
  echo -e $str4 >> "$file"
  echo -e $str11 >> "$file"
  echo -e $str12 >> "$file"
  echo -e $str5 >> "$file"
  echo -e $str6 >> "$file"
  echo -e $str7 >> "$file"
  echo -e $str8 >> "$file"
  echo -e $str9 >> "$file"
  echo -e $str10 >> "$file"
done
