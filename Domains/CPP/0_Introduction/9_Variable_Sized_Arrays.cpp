    int seqCount, queryCount;
    int *seqSize;
    int **seqArray;
    int **queryArray;
    cin >> seqCount >> queryCount;
    seqSize = new int[seqCount];
    seqArray = new int*[seqCount];
    for (int i = 0; i < seqCount; ++i)
    {
        cin >> seqSize[i];
        seqArray[i] = new int[seqSize[i]];
        for (int j = 0; j < seqSize[i]; ++j)
        {
            cin >> seqArray[i][j];
        }
    }
    queryArray = new int*[queryCount];
    for (int i = 0; i < queryCount; ++i)
    {
        queryArray[i] = new int[2];
        cin >> queryArray[i][0] >> queryArray[i][1];
    }
    for (int i = 0; i < queryCount; ++i)
    {
        cout << seqArray[queryArray[i][0]][queryArray[i][1]] << '\n';
    }
    return 0;
}
