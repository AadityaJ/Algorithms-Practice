string findSubString(string large, string small)
{
    int len1 = large.length();
    int len2 = small.length();   
 
    int hash_small[no_of_chars] = {0};
    int hash_large[no_of_chars] = {0};
    for (int i = 0; i < len2; i++)
        hash_small[small[i]]++;
 
    int start = 0, start_index = -1, min_len = INT_MAX;
    int count = 0; 
    for (int j = 0; j < len1 ; j++)
    {
        hash_large[large[j]]++;
        if (hash_small[large[j]] != 0 &&
            hash_large[large[j]] <= hash_small[large[j]] )
            count++;
        if (count == len2)
        {
            while ( hash_large[large[start]] > hash_small[large[start]]
                   || hash_small[large[start]] == 0)
            {
 
                if (hash_large[large[start]] > hash_small[large[start]])
                    hash_large[large[start]]--;
                start++;
            }
            int len_window = j - start + 1;
            if (min_len > len_window)
            {
                min_len = len_window;
                start_index = start;
            }
        }
    }
    if (start_index == -1)
    {
       return "";
    }
    return str.substr(start_index, min_len);
}