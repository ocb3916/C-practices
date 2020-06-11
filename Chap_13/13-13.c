#include <stdio.h>
#define PI 3.141592

struct shape
{
	enum { tri, rect, circ }type;
	union
	{
		struct { int base, height; }tri;
		struct { int width, height; }rect;
		struct { int radius; }circ;
	}data;
};

int main(void)
{
	struct shape figure;
	float area;
	printf("������ Ÿ���� �Է��Ͻÿ�(0, 1, 2): ");
	scanf("%d", &figure.type);
	printf("���ο� ������ ���̸� �Է��Ͻÿ�(���� �� 100 200): ");
	
	switch (figure.type)
	{
	case tri:
		scanf("%d %d", &figure.data.tri.base, &figure.data.tri.height);
		area = figure.data.tri.base * figure.data.tri.height / 2;
		printf("������ %.0f", area);
		break;
	case rect:
		scanf("%d %d", &figure.data.rect.width, &figure.data.rect.height);
		area = figure.data.rect.width * figure.data.rect.height;
		printf("������ %.0f", area);
		break;
	case circ:
		scanf("%d", &figure.data.circ.radius);
		area = PI * figure.data.circ.radius * figure.data.circ.radius;
		printf("������ %.0f", area);
		break;
	default:
		break;
	}

}