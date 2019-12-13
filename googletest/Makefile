# Makefile
# all:より下の3行のインデント、
# gtest-gen:より下の1行のインデント
# は半角空白になっていますがタブ1個にしてください
# target.cはCなのでgccで、それ以外はC++なのでg++でビルドします
# gtest_main.ccはGoogleTestが用意してくれているmain関数、
# gtest-all.ccがGoogleTest全部入りファイルです
# -lpthreadをつけることにも注意。
# makeかmake allしたらビルドして実行まで行います。
all:
	gcc -c myfunction.c #オブジェクト作成
	g++ test.cpp googletest-master/googletest/src/gtest_main.cc gtest/gtest-all.cc -I. -lpthread myfunction.o #リンク
    #./a.out
	
gtest-gen:
	python googletest-master/googletest/scripts/fuse_gtest_files.py ./