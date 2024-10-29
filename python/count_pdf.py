# 统计某个文件夹下所有 pdf 文件的总页数
import os
from PyPDF2 import PdfReader

def count_pdf_pages(folder_path):
    total_pages = 0
    for filename in os.listdir(folder_path):
        if filename.lower().endswith('.pdf'):
            file_path = os.path.join(folder_path, filename)
            try:
                with open(file_path, 'rb') as file:
                    pdf = PdfReader(file)
                    total_pages += len(pdf.pages)
            except Exception as e:
                print(f"Error reading {filename}: {e}")
    return total_pages

folder_path = r'D:\sxh_打印'
total_pages = count_pdf_pages(folder_path)
print(f"Total pages in all PDFs: {total_pages}")