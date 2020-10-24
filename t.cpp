void Hanoi(int platesCount, int from, int dest, int by)
{
	if (platesCount==1)
	{
		printf(
			"Move the plate from %d to %d through %d"
			, from, dest, by);
	}
else
	{
		Hanoi(platesCount -1, from, by, dest);
		Hanoi(1, from, dest, by);
		Hanoi(platesCount -1, by, dest, from);
	}
} 
void HanoiDrawer::SolveNextStep()
{
	int platesCount
		, source
		, destination
		, intermediate;

	if(listSavedState.size()==0)
	{
		this->Hanoi(this->iPlatesCount, HanoiDrawer::SOURCE
			, HanoiDrawer::DESTINATION, HanoiDrawer::INTERMEDIATE);
	}

	if(listSavedState.size() % 4 != 0 )
	{
		return;
	}

	platesCount = listSavedState.front();
	listSavedState.pop_front();

	source = listSavedState.front();
	listSavedState.pop_front();

	destination = listSavedState.front();
	listSavedState.pop_front();

	intermediate = listSavedState.front();
	listSavedState.pop_front();

	MovePlateFromTo(source, destination);

	this->iMovesCount++;

	if(iMovesCount == this->GetTotalMovesCount())
	{
		this->solved = true;
	}

	SetDlgItemInt(this->hWnd, this->countContainerResourceId, 
						GetMovesCount(), FALSE);

	SetDlgItemText(this->hWnd, this->fromContainerResourceId
				, PlaceIntToString(source).c_str() );
	SetDlgItemText(this->hWnd, this->toContainerResourceId
				, PlaceIntToString(destination).c_str() );
	SetDlgItemText(this->hWnd, this->throughContainerResourceId
				, PlaceIntToString(intermediate).c_str() );
}

// Draws stands and plates
// then do Invalidate
// this operation is required
// in each step
void HanoiDrawer::ReDraw()
{
	DrawStands();

	DrawPlates();

	Invalidate();
}

// The internal function that is responsible
// about solve the problem.
// platesCount : how many plates
// source : the index of the source
// destination : the index of the destination
// intermediate : the index of the intermediate
void HanoiDrawer::Hanoi(int platesCount, int source, int destination, int intermediate)
{
	if (platesCount == 1)
	{
		listSavedState.push_back(platesCount);
		listSavedState.push_back(source);
		listSavedState.push_back(destination);
		listSavedState.push_back(intermediate);
		return;
	}
	else
	{
		Hanoi(platesCount - 1, source, intermediate, destination);
		Hanoi(1, source, destination, intermediate);
		Hanoi(platesCount - 1, intermediate, destination, source);
		return;
	}
}