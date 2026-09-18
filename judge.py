import subprocess

p = subprocess.Popen(
    ["./solution.exe"],
    stdin=subprocess.PIPE,
    stdout=subprocess.PIPE,
    text=True
)

queries = [
    "Is it rated?",
    "Is it rated?",
    "Is it rated?"
]

for query in queries:

    print("JUDGE:", query)

    # Send input to C++
    p.stdin.write(query + "\n")
    p.stdin.flush()

    # Read C++ output
    answer = p.stdout.readline()

    if not answer:
        print("Program terminated.")
        break

    print("PROGRAM:", answer.strip())

p.stdin.close()
p.wait()