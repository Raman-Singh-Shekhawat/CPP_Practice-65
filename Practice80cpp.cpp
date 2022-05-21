// 80. Remove Duplicates Recursively: Given a string S, remove consecutive duplicates from it recursively.

void removeConsecutiveDuplicates(char *input)
{

    if (input[0] == '\0')
    {

        return;
    }

    removeConsecutiveDuplicates(input + 1);

    if (input[0] == input[1])
    {

        int i = 1;

        for (; input[i] != '\0'; i++)
        {

            input[i - 1] = input[i];
        }

        input[i - 1] = input[i];
    }

    else
    {

        return;
    }
}