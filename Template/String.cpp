#include<cstring>
a.find(b,pos)!=a.npos

find()：在一个字符串中查找一个指定的单个字符或字符数组。若是找到，就返回首次匹配的开始位置；若是没有查找到匹配的内容，就返回string::npos。
find_first_of()：在一个目标串中进行查找，返回值是第一个与指定字符组中任何字符匹配的字符位置。若是没有查找到匹配的内容，则返回npos。
find_last_of()：在一个目标串中进行查找，返回最后一个与指定字符组中任何字符匹配的字符位置。若是没有查找到匹配的内容，则返回npos。
find_first_not_of()：在一个目标串中进行查找，返回第一个与指定字符组中任何字符都不匹配的元素位置。若是找不到那样的元素则返回npos。
find_last_not_of()：在一个目标串中进行查找，返回下标值最大的与指定字符组中任何字符都不匹配的元素的位置。若找不到那样的元素则返回npos。
rfind()：对一个串从尾至头查找一个指定的单个字符或字符组。若是找到，就返回首次匹配的开始位置；若是没有查找到匹配的内容，则返回npos。

input.replace(input.find(str1), pos, str2);

s1.compare(s2)，若返回值为0，则两者相等

#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char a[] = "aaa",b[]="aaa";
    string A = "AAA", B = "AAA";
    cout <<"*a和*b的值分别是：" <<*a << "，" << *b << endl;
    cout <<"*“aaa”的值是："<< *"aaa" << endl;
    cout <<"利用 == 比较a,b两个字符串，结果是（相等为1，不等为0）：" <<(a==b) << endl;
    cout << "利用strcmp()比较a，b两个字符串，结果是（相等为0，不等非0）："<<strcmp(a,b) << endl;
    cout << "利用 == 比较A,B两个string，结果是（相等为1，不等为0）："<<(A==B) << endl;
    cout << "利用compare()比较A,B两个string，结果是（相等为0，不等非0）：" << A.compare(B) << endl;
    return 0;
}

*a和*b的值分别是：a，a
*“aaa”的值是：a
利用 == 比较a,b两个字符串，结果是（相等为1，不等为0）：0
利用strcmp()比较a，b两个字符串，结果是（相等为0，不等非0）：0
利用 == 比较A,B两个string，结果是（相等为1，不等为0）：1
利用compare()比较A,B两个string，结果是（相等为0，不等非0）：0

