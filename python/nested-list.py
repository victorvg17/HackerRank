if __name__ == '__main__':
    scores = set()
    second_low_scores = []
    marksheet = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        scores.add(score)
        marksheet.append([name, score])
    scores = list(scores)
    scores.sort()
    score_relv = scores[1]
    for i in range(len(marksheet)):
        if marksheet[i][1] == score_relv:
            second_low_scores.append(marksheet[i])
    second_low_scores.sort(key=lambda x: x[0])
    for s in second_low_scores:
        print(s[0])