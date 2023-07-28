from selenium import webdriver
from bs4 import BeautifulSoup
# from selenium.webdriver.chrome.options import Options
# chrome_options = Options()
# chrome_options.add_argument("--headless=new")
# driver = webdriver.Chrome(options=chrome_options)

driver = webdriver.Chrome()

songs=[]

# driver.get("https://open.spotify.com/playlist/0BK9IcPLd8ZTTwYzKAgb8L")
driver.get("https://open.spotify.com/playlist/37i9dQZF1DWT0upuUFtT7o?si=ee1d98f45bc444f4")

content = driver.page_source
# driver.execute_script("window.scrollBy(0,document.body.scrollHeight)")
soup = BeautifulSoup(content, features="html.parser")

driver.implicitly_wait(300)
count = 0
for song in soup.findAll('div', attrs={'class':'iCQtmPqY0QvkumAOuCjr'}):
    count += 1
    print(count, end=') ')
    print(song.a.div.text, end=' - ')

    a = ''
    for s in song.span.findAll('a'):
        a = a + s.text + ", "
        # print(s.text, end=', ')

    artists = a[:-2]
    print(artists)