#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Matrix
{
    int m_row ;
    int m_col ;
    int** m_data ;
public:
    explicit Matrix( int row , int col ) ;
    ~Matrix () ;

    int Row() const { return m_row ; }
    int Col() const { return m_col ; }
    Matrix& Set( const int i , const int j , const int v ) { m_data[i][j] = v ; return *this; }
    int Get( const int i , const int j ) const { return m_data[i][j] ; }

    friend istream& operator >> ( istream& istr , Matrix& am ) ;
    friend ostream& operator << ( ostream& ostr , const Matrix& am ) ;
};
Matrix::Matrix( int row , int col )
{
    m_row = row ;
    m_col = col ;
    m_data = new int*[row] ;
    for( int i = 0 ; i < row ; ++ i )
    {
        m_data[i] = new int[col] ;
    }
}
Matrix::~Matrix()
{
    for( int i = 0; i < m_row ; ++ i )
    {
        delete [] m_data[i] ;
    }
    delete [] m_data ;
}
istream& operator >> ( istream& istr , Matrix& am )
{
    for( int i = 0 ; i < am.Row(); ++ i )
    {
        for( int j = 0 ; j < am.Col() ; ++ j )
        {
            int k ; istr>> k ;
            am.Set( i ,j , k ) ;
        }
    }
    return istr ;
}
/*-----------------------------------------------------
*Author: JiYou
*����:   2010-6-10
*���ܣ�   ��˳ʱ���ӡһ������
*        1 2 3
*        4 5 6
*        7 8 9
*        ��ӡΪ: 1 2 3 6 9 8 7 4 5
*        ����ֻ���������������.
*�㷨:   ʵ����FromRow,ToRow; ToRow, ToCol; �����������
*        ��һ�����ο�ֻҪ��������ο��еĿ��ߵĲ���һ����
*        һ���ߴ�ӡ�Ϳ��ԡ�
*        ��ӡ��һ��֮����С�������
*        ʵ����������ӡ�������������֣�
*        ��������ֻ���������������
*        1����������һ���㡣
*        2�������Ĳ�������һ�����ߡ�
*        3�������Ĳ�������һ������û�д�ӡ��
*----------------------------------------------------*/

ostream& operator << ( ostream& ostr , Matrix& am )
{
    int FromRow = 0 , ToRow = am.Row() - 1 ;
    int FromCol = 0 , ToCol = am.Col() - 1 ;
    while( FromRow < ToRow && FromCol < ToCol )
    {
        for( int i = FromCol ; i < ToCol ; ++ i ) ostr << am.Get( FromRow , i ) << ' ' ;
        for( int i = FromRow ; i < ToRow ; ++ i ) ostr << am.Get( i , ToCol ) << ' ' ;
        for( int i = ToCol ; i > FromCol ; -- i ) ostr << am.Get( ToRow , i ) << ' ' ;
        for( int i = ToRow ; i > FromRow ; -- i ) ostr << am.Get( i , FromCol) << ' ' ;
        ++FromRow ; ++ FromCol ;
        --ToRow ; --ToCol ;
    }
    if( FromRow == ToRow && FromCol == ToCol ) ostr<< am.Get( FromRow , FromCol ) ;
    if( FromRow == ToRow && FromCol < ToCol )
    {
        while( FromCol <= ToCol) ostr<< am.Get( FromRow , FromCol ++ ) << ' ' ;
    }
    if( FromCol == ToCol && FromRow < ToRow )
    {
        while( FromRow <= ToRow ) ostr<< am.Get( FromRow++ , FromCol ) << ' ' ;
    }
    return ostr ;
}
int main()
{
    freopen("1391.in","r",stdin);
    int iRow , iCol ;
    while( cin >> iRow >> iCol )
    {
        Matrix mat(iRow , iCol) ;
        cin >> mat ;
        cout << mat << endl;
    }
    return 0 ;
}
