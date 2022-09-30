#include <stdio.h>
#include <math.h>
//1- x2/2! + x4/4! - x6/6!........
int d[100]={0};
int fact(int num)
{
    if (num <= 1)
    {
        d[num] = 1;
    }
    else
    {
        if (d[num] == 0)
        {
            d[num] = num * fact(num - 1);
        }
    }
    return d[num];
}
int series6();
int main()
{
    double sum=1;
    int i,n=2,x=1,num=1;
    for (i=0;i<n;i++)
    {
        if (i%2==0)
        {
            sum=sum+(pow(x,num)/fact(num));
        }
        else
        {
            sum=sum-(pow(x,num)/fact(num));
        }
        num+=2;
    }
    printf("SUM OF SERIES TILL [%d]: %f",n,sum);
    return 0;
}

/*
!PS D:\GIT_HUB> git add.
git: 'add.' is not a git command. See 'git --help'.

The most similar command is
        add
!PS D:\GIT_HUB> cd .\DSA\
!PS D:\GIT_HUB\DSA> git status
On branch main
Your branch is up to date with 'origin/main'.

nothing to commit, working tree clean
!PS D:\GIT_HUB\DSA> cd ..
!PS D:\GIT_HUB> cd .\PS\
!PS D:\GIT_HUB\PS> git status
On branch main
Your branch is up to date with 'origin/main'.

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   day3_series5.c
        modified:   day3_series5.exe
        modified:   day3_series6.c

no changes added to commit (use "git add" and/or "git commit -a")
!PS D:\GIT_HUB\PS> git add .
!PS D:\GIT_HUB\PS> git status
On branch main
Your branch is up to date with 'origin/main'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        modified:   day3_series5.c
        modified:   day3_series5.exe
        modified:   day3_series6.c

!PS D:\GIT_HUB\PS> git commit -m"add files"
[main d7ca78b] add files
 3 files changed, 47 insertions(+), 7 deletions(-)
!PS D:\GIT_HUB\PS> git log
commit d7ca78b418a8e14fe821183584f58e7b240fc6ac (HEAD -> main)
Author: Aaditya Raj Gupta <aadityarajgupta333@gmail.com>
Date:   Wed Sep 28 13:56:07 2022 +0530

    add files

commit 1045a9584c8c2145545209944681da9c3db275d5 (origin/main, origin/HEAD)
Author: Aaditya Raj Gupta <aadityarajgupta333@gmail.com>
Date:   Tue Sep 27 22:29:00 2022 +0530

    uploading all file till now I have done

commit 55e6af0f11902740f8c4e7eb5e38479eadef45e1
Author: Aaditya Raj Gupta <67413825+AadityaRajGupta@users.noreply.github.com>
Date:   Tue Sep 27 22:01:20 2022 +0530

    Update README.md

commit b16886b22ed050dc562c7955de8a9fc0df7b4b59
Author: Aaditya Raj Gupta <67413825+AadityaRajGupta@users.noreply.github.com>
Date:   Tue Sep 27 21:59:08 2022 +0530

    Initial commit
!PS D:\GIT_HUB\PS> git push origin
Enumerating objects: 9, done.
Counting objects: 100% (9/9), done.
Delta compression using up to 8 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 3.08 KiB | 1.54 MiB/s, done.
Total 5 (delta 3), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (3/3), completed with 2 local objects.
To htt!PS://github.com/AadityaRajGupta/!PS.git
   1045a95..d7ca78b  main -> main
!PS D:\GIT_HUB\PS> 
*/