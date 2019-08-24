#include <string>
using namespace std;

/**
 * daily-challenge-1154
 * PUZZLE: Day of the Year
 */
class Solution
{
public:
  int dayOfYear(string date)
  {
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    unsigned dSize = date.size();
    int meta[3] = {0, 0, 0};

    unsigned unit = 0;
    for (int i = 0; i < dSize; i++)
    {
      if ('-' == date[i])
      {
        unit++;
        continue;
      }

      meta[unit] = meta[unit] * 10 + date[i] - 48;
    }

    int result = meta[2];
    if (
        meta[0] % 400 == 0 ||
        (meta[0] % 4 == 0 && meta[0] % 100 != 0))
    {
      monthDays[1] = 29;
    }

    for (int j = 0; j < meta[1]-1; j++ ) {
      result += monthDays[j];
    }
    return result;
  }
};
