#include "AdjMatGraph.h"
/*
void main()
{
	AdjMatGraph g;

	for (int i = 0; i < 4; i++)
	g.insertVertex('A' + i);
	g.insertEdge(0, 1);
	g.insertEdge(0, 3);
	g.insertEdge(1, 2);
	g.insertEdge(1, 3);
	g.insertEdge(2, 3);
	printf("인접 행렬로 표현한 그래프/n")
	g.display();

	FILE* fp;
	fopen_s(&fp, "../text_out.txt", "w"); //..은 내 위치보다 한 단계 위 cpp파일의 폴더 전단계에 text_out을 만들고 write로 열겠다
	g.display(fp); //../상위 폴더 개념
	fclose(fp);

	return 0;
}
*/
int main()
{
	SrchAMGraph g;
	for(int i=0;i<7;i++)
		g.insertVertex('A' + i);
	g.insertEdge(0, 1);
	g.insertEdge(0, 3);
	g.insertEdge(1, 2);
	g.insertEdge(1, 3);
	g.insertEdge(2, 3);
	g.insertEdge(4, 5);
	g.insertEdge(3, 6);
	g.insertEdge(4, 6);
	printf("인접 행렬로 표현한 그래프\n");
	g.display();
	printf("DFS==>");
	g.resetVisited();
	g.DFS(0);
	printf("\n");

	return 0;
}