#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj1_17()
{
//=========Macro generated from canvas: ROC_H_dR_Bj1_17/ROC_H_dR_Bj1_17
//=========  (Thu Feb 16 10:45:49 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_Bj1_17 = new TCanvas("ROC_H_dR_Bj1_17", "ROC_H_dR_Bj1_17",0,0,600,600);
   ROC_H_dR_Bj1_17->SetHighLightColor(2);
   ROC_H_dR_Bj1_17->Range(-0.290188,-0.1615385,1.238796,1.184615);
   ROC_H_dR_Bj1_17->SetFillColor(0);
   ROC_H_dR_Bj1_17->SetBorderMode(0);
   ROC_H_dR_Bj1_17->SetBorderSize(2);
   ROC_H_dR_Bj1_17->SetGridx();
   ROC_H_dR_Bj1_17->SetGridy();
   ROC_H_dR_Bj1_17->SetLeftMargin(0.15709);
   ROC_H_dR_Bj1_17->SetRightMargin(0.1234783);
   ROC_H_dR_Bj1_17->SetBottomMargin(0.12);
   ROC_H_dR_Bj1_17->SetFrameBorderMode(0);
   ROC_H_dR_Bj1_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx81[30] = {
   0,
   0.02911195,
   0.1448614,
   0.2692787,
   0.3778182,
   0.4761457,
   0.5515417,
   0.6178565,
   0.6745988,
   0.7152407,
   0.7543881,
   0.7926635,
   0.8259763,
   0.8546506,
   0.8799273,
   0.9066339,
   0.9315499,
   0.9477556,
   0.9633059,
   0.9720764,
   0.978857,
   0.9837744,
   0.99113,
   0.9934943,
   0.9952712,
   0.9987241,
   0.9993686,
   0.9997524,
   0.9999206,
   0.9999528};
   Double_t Graph_fy81[30] = {
   0,
   0.03120356,
   0.1769749,
   0.3452625,
   0.4991168,
   0.6130112,
   0.7039756,
   0.7595358,
   0.8037451,
   0.8334821,
   0.8616033,
   0.8868393,
   0.9092212,
   0.9294917,
   0.9466651,
   0.962903,
   0.9765225,
   0.9847185,
   0.9899922,
   0.9936632,
   0.9962119,
   0.9973713,
   0.997868,
   0.9983113,
   0.9992038,
   0.9996901,
   0.9997702,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx81,Graph_fy81);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Only");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph81 = new TH1F("Graph_Graph81","Tagging Only",100,0,1.099948);
   Graph_Graph81->SetMinimum(0);
   Graph_Graph81->SetMaximum(1.1);
   Graph_Graph81->SetDirectory(0);
   Graph_Graph81->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph81->SetLineColor(ci);
   Graph_Graph81->GetXaxis()->SetLabelFont(42);
   Graph_Graph81->GetXaxis()->SetTitleOffset(1);
   Graph_Graph81->GetXaxis()->SetTitleFont(42);
   Graph_Graph81->GetYaxis()->SetLabelFont(42);
   Graph_Graph81->GetYaxis()->SetTitleFont(42);
   Graph_Graph81->GetZaxis()->SetLabelFont(42);
   Graph_Graph81->GetZaxis()->SetTitleOffset(1);
   Graph_Graph81->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph81);
   
   TLatex *   tex = new TLatex(0.2696874,0.4469091,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(82);
      tex = new TLatex(0.3783227,0.6010529,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(83);
      tex = new TLatex(0.4768893,0.7158258,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(84);
      tex = new TLatex(0.4102819,0.8486302,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(85);
      tex = new TLatex(0.4876106,0.8669075,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(86);
      tex = new TLatex(0.5609728,0.9111293,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(87);
      tex = new TLatex(0.6123527,0.9355806,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(88);
      tex = new TLatex(0.6754446,0.9594824,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(89);
      tex = new TLatex(0.7153941,0.9753932,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(90);
      tex = new TLatex(0.7589856,0.9927107,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(91);
      tex = new TLatex(0.7982617,1.006281,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(92);
      tex = new TLatex(0.8357088,1.019255,"2.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(93);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx94[30] = {
   0,
   8.285866e-07,
   0.06103152,
   0.14802,
   0.2337656,
   0.3131547,
   0.4102819,
   0.4876106,
   0.5609728,
   0.6123527,
   0.6754446,
   0.7153941,
   0.7589856,
   0.7982617,
   0.8357088,
   0.8912662,
   0.9235088,
   0.9459018,
   0.9722519,
   0.9826333,
   0.9916766,
   0.9961873,
   0.9976862,
   0.9984873,
   0.9986206,
   0.9998787,
   0.9999698,
   0.9999895,
   0.9999983,
   0.9999995};
   Double_t Graph_fy94[30] = {
   0,
   0,
   0.02686298,
   0.1697296,
   0.392274,
   0.6046998,
   0.7486302,
   0.8269075,
   0.8711293,
   0.8955806,
   0.9194824,
   0.9353932,
   0.9527107,
   0.9662811,
   0.9792545,
   0.9897987,
   0.9937173,
   0.9971039,
   0.9975295,
   0.9988711,
   0.9989775,
   0.9990839,
   0.9998936,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx94,Graph_fy94);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph94 = new TH1F("Graph_Graph94","Mass-Matching Prioritized",100,0,1.099999);
   Graph_Graph94->SetMinimum(0);
   Graph_Graph94->SetMaximum(1.1);
   Graph_Graph94->SetDirectory(0);
   Graph_Graph94->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph94->SetLineColor(ci);
   Graph_Graph94->GetXaxis()->SetLabelFont(42);
   Graph_Graph94->GetXaxis()->SetTitleOffset(1);
   Graph_Graph94->GetXaxis()->SetTitleFont(42);
   Graph_Graph94->GetYaxis()->SetLabelFont(42);
   Graph_Graph94->GetYaxis()->SetTitleFont(42);
   Graph_Graph94->GetZaxis()->SetLabelFont(42);
   Graph_Graph94->GetZaxis()->SetTitleOffset(1);
   Graph_Graph94->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph94);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx95[30] = {
   0,
   0.02926527,
   0.1448102,
   0.2696874,
   0.3783227,
   0.4768893,
   0.5523347,
   0.6181627,
   0.6749641,
   0.7157619,
   0.7548779,
   0.7932949,
   0.826275,
   0.855338,
   0.8806045,
   0.9073091,
   0.9320963,
   0.94802,
   0.9635181,
   0.9722465,
   0.9790374,
   0.9839813,
   0.99123,
   0.9935736,
   0.9953347,
   0.9987349,
   0.9993716,
   0.9997516,
   0.9999211,
   0.9999535};
   Double_t Graph_fy95[30] = {
   0,
   0.03128407,
   0.1782783,
   0.3469091,
   0.5010529,
   0.6158258,
   0.7059755,
   0.7617466,
   0.805522,
   0.8353751,
   0.86343,
   0.8875061,
   0.9098171,
   0.9298766,
   0.9469539,
   0.9635227,
   0.9772647,
   0.9854939,
   0.9905404,
   0.9937914,
   0.9963147,
   0.9974506,
   0.9979372,
   0.9983716,
   0.9992199,
   0.9996964,
   0.9997748,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx95,Graph_fy95);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph95 = new TH1F("Graph_Graph95","Tagging Prioritized",100,0,1.099949);
   Graph_Graph95->SetMinimum(0);
   Graph_Graph95->SetMaximum(1.1);
   Graph_Graph95->SetDirectory(0);
   Graph_Graph95->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph95->SetLineColor(ci);
   Graph_Graph95->GetXaxis()->SetLabelFont(42);
   Graph_Graph95->GetXaxis()->SetTitleOffset(1);
   Graph_Graph95->GetXaxis()->SetTitleFont(42);
   Graph_Graph95->GetYaxis()->SetLabelFont(42);
   Graph_Graph95->GetYaxis()->SetTitleFont(42);
   Graph_Graph95->GetZaxis()->SetLabelFont(42);
   Graph_Graph95->GetZaxis()->SetTitleOffset(1);
   Graph_Graph95->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph95);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999998, 1.049999);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.55,0.15,0.85,0.3,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","Tagging Only","lpf");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Mass-Matching Prioritized","lpf");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Tagging Prioritized","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_dR_Bj1_17->Modified();
   ROC_H_dR_Bj1_17->cd();
   ROC_H_dR_Bj1_17->SetSelected(ROC_H_dR_Bj1_17);
}
