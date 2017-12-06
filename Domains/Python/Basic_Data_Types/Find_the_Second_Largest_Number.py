if __name__ == '__main__':
    n = int( input() )
    arr = [*map( int, input().split(" ") )]
    max1, max2 = -100, -100
    for i in range( 0, n ):
        if max1 < arr[i]:
            max2 = max1
            max1 = arr[i]
        if max2 < arr[i] and max1 != arr[i]:
            max2 = arr[i]
    print( max2 )