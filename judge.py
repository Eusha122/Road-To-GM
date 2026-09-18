import subprocess

p = subprocess.Popen(
    ["./solution"],
    stdin=subprocess.PIPE,
    stdout=subprocess.PIPE,
    text=True
)

while True:
    line = p.stdout.readline()

    if not line:
        break

    print("PROGRAM:", line.strip())

    # Decide what the judge should answer here.
    response = input("JUDGE RESPONSE: ")

    p.stdin.write(response + "\n")
    p.stdin.flush()