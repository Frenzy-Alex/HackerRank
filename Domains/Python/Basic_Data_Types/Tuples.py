if __name__ == '__main__':
    n = int( input() )
    intList = tuple( map( int, input().split(" ")))
    print( hash( intList ))