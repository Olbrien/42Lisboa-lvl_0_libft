/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 03:49:29 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 14:57:17 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		mallocPrintTest()
{
	int *arr;
	int n = 5;

	if(!(arr = malloc(n * sizeof(arr))))
		return (0);
	printf("\nMalloc \n\n");
	printf("Array Vazia 	[");

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d = %d]",i, arr[i]);
			continue;
		}
		printf("%d = %d / ",i, arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}

	printf("\nArray Completa 	[");

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d = %d]",i, arr[i]);
			continue;
		}
		printf("%d = %d / ",i, arr[i]);
	}

	printf("\nPointers 	[");

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d = %p]",i, arr + i);
			continue;
		}
		printf("%d = %p / ",i, arr + i);
	}

	free(arr);

	printf("\nArray Free 	[");

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d = %d]",i, arr[i]);
			continue;
		}
		printf("%d = %d / ",i, arr[i]);
	}

	printf("\nPointers Free 	[");

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d = %p]",i, arr + i);
			continue;
		}
		printf("%d = %p / ",i, arr + i);
	}
	return (0);
}

int		callocPrintTest()
{
	int *arr;
	int n = 5;

	if(!(arr = calloc(n, sizeof(arr))))
		return (0);

	printf("\n\nCalloc\n\n");

	printf("Array Vazia 	[");

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d = %d]",i, arr[i]);
			continue;
		}
		printf("%d = %d / ",i, arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}

	printf("\nArray Completa 	[");

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d = %d]",i, arr[i]);
			continue;
		}
		printf("%d = %d / ",i, arr[i]);
	}

	printf("\nPointers 	[");

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d = %p]",i, arr + i);
			continue;
		}
		printf("%d = %p / ",i, arr + i);
	}

	free(arr);

	printf("\nArray Free 	[");

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d = %d]",i, arr[i]);
			continue;
		}
		printf("%d = %d / ",i, arr[i]);
	}

	printf("\nPointers Free 	[");

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d = %p]",i, arr + i);
			continue;
		}
		printf("%d = %p / ",i, arr + i);
	}
	return (0);
}

int		callocMyFunctionTester()
{
	int *arr;
	int n = 5;

	if(!(arr = ft_calloc(n, sizeof(arr))))
		return (0);

	printf("\n\nMy Calloc\n\n");

	printf("Array Vazia 	[");

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d = %d]",i, arr[i]);
			continue;
		}
		printf("%d = %d / ",i, arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}

	printf("\nArray Completa 	[");

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d = %d]",i, arr[i]);
			continue;
		}
		printf("%d = %d / ",i, arr[i]);
	}

	printf("\nPointers 	[");

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d = %p]",i, arr + i);
			continue;
		}
		printf("%d = %p / ",i, arr + i);
	}

	free(arr);

	printf("\nArray Free 	[");

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d = %d]",i, arr[i]);
			continue;
		}
		printf("%d = %d / ",i, arr[i]);
	}

	printf("\nPointers Free 	[");

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d = %p]",i, arr + i);
			continue;
		}
		printf("%d = %p / ",i, arr + i);
	}
	return (0);
}

int		main()
{
	mallocPrintTest();
	callocPrintTest();
	callocMyFunctionTester();

	return (0);
}
