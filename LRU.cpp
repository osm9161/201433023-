#include <iostream>



using namespace std;

int min(int counter[], int nFrames)

{

	int minimum = counter[0];

	int pos;

	for (int i = 0;i<nFrames;i++) {
		if (minimum > counter[i])

			pos = i;

	}

	return pos;

}

int main()

{

	int pageString[50], n, frames[10], counter[10], recent = 0;

	int pageFault = 0, nFrames;



	cout << "Enter the number of pages: "; cin >> n;

	cout << "Enter the page reference string: ";

	for (int i = 0;i<n;i++) cin >> pageString[i];



	cout << "\nEnter the number of frames: "; cin >> nFrames;



	for (int i = 0;i<nFrames;i++)

	{

		frames[i] = 0;

		counter[i] = 0;//here 0 referes an empty space in frame

	}



	for (int i = 0;i<n;i++)

	{
		int flag = 0;

		for (int j = 0;j<nFrames;j++)

		{

			if (frames[j] == pageString[i])

			{
				flag = 1;

				counter[j] = recent++; //counter holds which frame is recently used,

									   //recently used page in frame will have a bigger number

									   //and least recently used page in frame will have a lower number

				break;

			}

		}



		if (flag == 0)

		{

			for (int j = 0;j<nFrames;j++)

			{
				if (frames[j] == 0)

				{
					frames[j] = pageString[i];

					counter[j] = recent++;

					flag = 1;

					pageFault++;

					break;

				}



			}

		}



		if (flag == 0) {

			int PositionToreplace = min(counter, nFrames);

			frames[PositionToreplace] = pageString[i];

			counter[PositionToreplace] = recent++;

			pageFault++;

		}



		//print frames

		cout << endl;

		for (int j = 0;j<nFrames;j++)

		{

			cout << frames[j] << " ";

		}



	}



	cout << "\nPage Fault: " << pageFault;



	return 0;

}