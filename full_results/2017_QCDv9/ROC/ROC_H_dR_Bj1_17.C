#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj1_17()
{
//=========Macro generated from canvas: ROC_H_dR_Bj1_17/ROC_H_dR_Bj1_17
//=========  (Wed Mar  1 15:31:58 2023) by ROOT version 6.26/06
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
   0.02913028,
   0.1443362,
   0.268015,
   0.3795386,
   0.4763543,
   0.5509308,
   0.6171162,
   0.6735323,
   0.7147413,
   0.7537385,
   0.7914287,
   0.8250064,
   0.8540775,
   0.879744,
   0.9061972,
   0.930788,
   0.9473429,
   0.9642232,
   0.9729528,
   0.9796203,
   0.9844357,
   0.9914055,
   0.9937289,
   0.9954613,
   0.9987246,
   0.9993718,
   0.9997536,
   0.9999207,
   0.9999526};
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
   
   TLatex *   tex = new TLatex(0.2684286,0.4469091,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(82);
      tex = new TLatex(0.3799741,0.6010529,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(83);
      tex = new TLatex(0.477021,0.7158258,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(84);
      tex = new TLatex(0.4149291,0.8486302,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(85);
      tex = new TLatex(0.4896204,0.8669075,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(86);
      tex = new TLatex(0.5613283,0.9111293,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(87);
      tex = new TLatex(0.6135231,0.9355806,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(88);
      tex = new TLatex(0.6770108,0.9594824,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(89);
      tex = new TLatex(0.717013,0.9753932,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(90);
      tex = new TLatex(0.7637997,0.9927107,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(91);
      tex = new TLatex(0.8033334,1.006281,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(92);
      tex = new TLatex(0.83992,1.019255,"2.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(93);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx94[30] = {
   0,
   8.190635e-07,
   0.05918759,
   0.1447868,
   0.2306945,
   0.3210856,
   0.4149291,
   0.4896204,
   0.5613283,
   0.6135231,
   0.6770108,
   0.717013,
   0.7637997,
   0.8033334,
   0.83992,
   0.8933404,
   0.9250604,
   0.9481325,
   0.9730799,
   0.983126,
   0.99198,
   0.9962845,
   0.9977646,
   0.9985667,
   0.9987055,
   0.9998811,
   0.9999708,
   0.9999901,
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
   0.02928192,
   0.1442935,
   0.2684286,
   0.3799741,
   0.477021,
   0.5517801,
   0.6174982,
   0.6739557,
   0.7152984,
   0.7542709,
   0.7920988,
   0.825352,
   0.854766,
   0.8804151,
   0.906866,
   0.9313351,
   0.9476146,
   0.9644211,
   0.9731085,
   0.9797881,
   0.9846317,
   0.991501,
   0.9938042,
   0.9955213,
   0.9987355,
   0.9993748,
   0.9997529,
   0.9999213,
   0.9999533};
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
   multigraph->GetXaxis()->SetLimits(-0.04999997, 1.049999);
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
