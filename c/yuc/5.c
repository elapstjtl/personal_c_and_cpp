#include <stdio.h>

int main()
{
        char str[1024];
        char *p = str;          // ���ڼ��Ѱַ
        char *pos[1024] = {0};  // ��¼ÿ�����ʵĵ�ַ
        int len = 0;
        int cChar = 0, cWord = 0; // cChar ͳ���ַ���, cWord ͳ�Ƶ�����
        int max = 0, i = 0, j;
        char delim = ' ';

        printf("������һ��Ӣ�ľ��ӣ�");
        // �������룬˳��ͳ���û�ʵ�������˶��ٸ��ַ�
        while ((str[len++] = getchar()) != '\n' && len + 1 < 1024)
                ;
        str[len-1] = '\0'; // str[len]��ŵ���'\n'�������滻Ϊ'\0'

        printf("������ָ����");
        scanf("%c", &delim);

        if (*p != delim)
        {
                pos[i++] = p; // ��¼��һ�����ʵĵ�ַ
                cWord++;
        }

        while (len--)
        {
                if (*p++ == delim)
                {
                        // �ж�����ַ���
                        max = cChar > max ? cChar : max;
                        cChar = 0;

                        // �����ˣ��˳�ѭ��
                        if (*p == '\0')
                        {
                                break;
                        }

                        // ��������һ
                        if (*p != delim)
                        {
                                pos[i++] = p;
                                cWord++;
                        }
                }
                else // û��else��ѿո�ͳ�ƽ�ȥ
                {
                        cChar++;
                }
        }
        max = --cChar > max ? cChar : max; // �������һ��'\0'�����Լ�ȥ

        // ����ɱ䳤���飬max+1
        char result[cWord][max+1];

        // ���ָ�õĵ��ʷŽ���ά������
        for (i = 0; i < cWord; i++)
        {
                for (j = 0; *(pos[i]+j) != delim && *(pos[i]+j) != '\0'; j++)
                {
                        result[i][j] = *(pos[i]+j);
                }
                result[i][j] = '\0';
        }

        // ��ӡ���
        printf("���δ�ӡÿ�����ʣ�\n");
        for (i = 0; i < cWord; i++)
        {
                printf("%s\n", result[i]);
        }

        return 0;
}
