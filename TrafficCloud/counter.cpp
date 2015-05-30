#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <climits>
using namespace std;

int flowCount[1682];
string line;
string fileStr1 = "flow090";
string fileStr2 = "4";
string fileStr3 = ".txt";


int main()
{
//    freopen("flowCount.txt", "w", stdout);

    ifstream infile;
    infile.open(fileStr1 + fileStr2 + fileStr3);
    while (infile.eof() != true)
    {
        while (getline(infile, line))
        {
            int index = 0;
            string numStr;

            int start = 0;
            int end = 0;

            for (int i = 0; i < line.length(); ++i)
            {
                if (line[i] == ',')
                {
                    end = i - 1;
                    numStr = line.substr(start, end - start + 1);
                    if (index >= 2)
                        flowCount[index++] += stoi(numStr);
                    else
                        index++;
                    start = i + 1;
                }
            }
            numStr = line.substr(start, line.length() - start);
            flowCount[index] += stoi(numStr);
        }

        infile.close();

        int fileStr2Num = stoi(fileStr2) + 1;

        if (fileStr2Num <= 6)
        {
            fileStr2 = to_string(fileStr2Num);
            infile.open(fileStr1 + fileStr2 + fileStr3);
        }

    }


    int tmpCount = 0;
    int min = INT_MAX;
    int max = INT_MIN;
    int sum[2] = {0, 0};
    float mean = 0;   //平均数
    int count = 0;

    for (int i = 2; i < 1682; ++i)
    {
        tmpCount ++;
//        cout << flowCount[i] << endl;
        sum[1] += flowCount[i];

        if (flowCount[i] < min)
            min = flowCount[i];

        if (flowCount[i] > max)
            max = flowCount[i];

        if (tmpCount == 60)
        {
            tmpCount = 0;

            sum[1] = sum[1] / 60;

            cout << sum[1] << endl;

            if (sum[0] != 0 && sum[1] != 0)
            {
                //cout << (float)sum[0]/sum[1] << endl;
                mean += (float)sum[0]/sum[1];
                count++;
            }

            sum[0] = sum[1];
            sum[1] = 0;
            //cout << endl;
        }
    }

//    cout << "平均数：" << mean/count << endl;
//    cout << "max: " << max << endl;
//    cout << "min: " << min;

    return 0;
}