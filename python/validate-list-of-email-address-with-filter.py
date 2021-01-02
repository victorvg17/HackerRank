def fun(s):
    # return True if s is a valid email, else return False
    if s.count("@") != 1:
        return False
    username, site_and_extension = s.split("@")
    if len(s.split("@")) != 2:
        return False
    f1 = all([f.isalnum() or f in ["-", "_"] for f in username])
    site = site_and_extension.split(".")[0]
    f2 = False
    if len(site_and_extension.split(".")) > 1:
        extn = site_and_extension.split(".")[1]
        f2 = len(extn) < 4
    
    f3 = all([f.isalnum() for f in site])
    return f1 and f2 and f3


def filter_mail(emails):
    return list(filter(fun, emails))

if __name__ == '__main__':
    n = int(input())
    emails = []
    for _ in range(n):
        emails.append(input())

filtered_emails = filter_mail(emails)
filtered_emails.sort()
print(filtered_emails)