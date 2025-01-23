import requests

def count_files(owner, repo, path=''):
    url = f'https://api.github.com/repos/{owner}/{repo}/contents/{path}'
    headers = {'Accept': 'application/vnd.github.v3+json'}
    response = requests.get(url, headers=headers)
    if response.status_code != 200:
        print(f"Failed to access {url}: {response.status_code}")
        return 0
    items = response.json()
    count = 0
    for item in items:
        if item['type'] == 'file':
            count += 1
        elif item['type'] == 'dir':
            count += count_files(owner, repo, item['path'])
    return count

if __name__ == "__main__":
    owner = 'pranay15155'
    # repo = 'Dynamic-Programming'
    repo='GRAPH-NEW'

    total_files = count_files(owner, repo)
    print(f"Total number of files in the repository: {total_files}")

#how to run it
#open cmd using windows +r then type cmd and enter
#first change directory using cd your path 
#then write python 1.py
