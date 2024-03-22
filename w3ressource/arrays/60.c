#include<stdio.h>
void main()
{
    int arr2d[5][5] = 
    {
        {0, 1, 0, 1, 1},
        {0, 0, 0, 0, 0},
        {1, 0, 0, 1, 0},
        {0, 0, 0, 0, 0},
        {1, 0, 0, 0, 1}
    };

    int _rowWithMaxOnes   = 0;
    int _countOnesPerLine = 0;
    int _column           = 0;

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            if (arr2d[i][j] == 1)
            {
                _countOnesPerLine++;
            }
        }
        // printf("%d\n",_countOnesPerLine);
        if (_rowWithMaxOnes < _countOnesPerLine) 
        {
            _rowWithMaxOnes = _countOnesPerLine;
            _column = i;
        }
        _countOnesPerLine = 0;
    }
    printf("the line with max ones is %d",_column);
}