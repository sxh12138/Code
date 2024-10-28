# 批量重命名脚本
import os
import re

directory = r'D:\Videos\TBBT\1'
pattern = r'S(\d{2})E(\d{2})'

def batch_rename_with_season_and_episode(directory, pattern):
    for filename in os.listdir(directory):
        match = re.search(pattern, filename)
        if match:
            season = match.group(1)
            episode = match.group(2)
            new_filename = f"S{season}E{episode}{os.path.splitext(filename)[1]}"
            os.rename(os.path.join(directory, filename), os.path.join(directory, new_filename))
            print(f"Renamed '{filename}' to '{new_filename}'")

batch_rename_with_season_and_episode(directory, pattern)