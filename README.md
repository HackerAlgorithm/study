# hacker algorithm study

## Github Organization 생성 
* **"HackerAlgorithm"** organization 생성
* **"study"** organization repo 생성

## Github Organization 활동 방법
* 반드시 한 문제당 1 branch, 1 commit, 1 PR(Pull Request)을 생성한다.
* CodeReview는 비속어만 사용하지 않는 조건으로 자유롭게 작성한다.
* CodeReview가 끝나기 전까지 PR을 merge하지 않는다.

## Git Push 과정
1. main branch의 최신 내용을 가져온다.
`git pull origin main`
2. main branch로 이동한다.
`git checkout main`
3. 새로운 branch를 생성하고 해당 branch로 이동한다.
`git checkout -b "branch name"`
3-1. branch name 형식: `(본인 영어 이름)_(문제 번호)`
3-2. ex) `seongju_25205` `seongju_ECR129_A`
3-3. 그냥 branch 생성은 `git branch "branch name"`
3-4. 해당 branch로 이동은 `git checkout "branch name"`
4. 추가하고 싶은 파일의 바로 상위 경로까지 들어가서 `git bash`
5. 변경된 파일을 add한다. (local folder -> staging area)
`git add "file name"`
5-1. file name 형식: `(본인 영어 이름)_(문제 번호).cpp`
5-2. ex) `seongju_25205.cpp` `seongju_ECR_129_A.cpp`
6. commit을 만든다. (staging area -> local repo)
`git commit -m "commit message"`
6-1. commit message 형식: `[CREATE/UPDATE/DELETE] (file name)`
6-2. ex) `[CREATE] seongju_25205.cpp`
7. remote에 push한다. (local repo -> remote repo)
`git push origin "branch name"`

## PR 과정
1. 위의 과정을 마치고 repo에 생긴 `Compare & pull request` 버튼을 클릭한다.
2. PR 내용을 작성하고, `Create pull request`를 클릭한다.
2-1. PR title 형식: `(본인 한글 이름) / [(플랫폼) (문제 번호)] (문제 이름)` 
2-2. ex)`이성주 / [BOJ 25205] 경로당펑크 2077` `이성주 / [CodeForce ECR129] A`
2-3. PR 내용은 default 형식에 맞춰서 알아서 작성
3. 오른쪽 메뉴의 `Reviewers`, `Assignees`, `Labels`를 설정한다.
3-1. `Reviewers`는 전원 체크
3-2. `Assignees`는 본인만 체크
3-3. `Labels`는 특별히 다른 경우가 아니면 `Review needed`로 체크

## Code Review 과정
1. Code Review가 진행된다. (내용 추가 예정)
2. Code Review가 전부 끝나면, `Merge pull request`를 눌러 merge한다.
