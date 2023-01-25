#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_18()
{
//=========Macro generated from canvas: ROC_H_mass_18/ROC_H_mass_18
//=========  (Wed Jan 25 10:51:22 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_18 = new TCanvas("ROC_H_mass_18", "ROC_H_mass_18",0,0,600,600);
   ROC_H_mass_18->SetHighLightColor(2);
   ROC_H_mass_18->Range(-0.2019526,-0.05736364,1.14414,1.132952);
   ROC_H_mass_18->SetFillColor(0);
   ROC_H_mass_18->SetBorderMode(0);
   ROC_H_mass_18->SetBorderSize(2);
   ROC_H_mass_18->SetGridx();
   ROC_H_mass_18->SetGridy();
   ROC_H_mass_18->SetLeftMargin(0.15709);
   ROC_H_mass_18->SetRightMargin(0.1234783);
   ROC_H_mass_18->SetBottomMargin(0.12);
   ROC_H_mass_18->SetFrameBorderMode(0);
   ROC_H_mass_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx23[11] = {
   0.05352429,
   0.1623696,
   0.2765859,
   0.3877991,
   0.4990907,
   0.5923911,
   0.6626751,
   0.7356106,
   0.8008235,
   0.8410391,
   0.8609133};
   Double_t Graph_fy23[11] = {
   0.13434,
   0.3612551,
   0.5352174,
   0.6409256,
   0.7113807,
   0.7650321,
   0.8095579,
   0.8436092,
   0.8701979,
   0.8862413,
   0.9010877};
   TGraph *graph = new TGraph(11,Graph_fx23,Graph_fy23);
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
   
   TH1F *Graph_Graph23 = new TH1F("Graph_Graph23","Tagging Only",100,0,0.9416522);
   Graph_Graph23->SetMinimum(0.05766518);
   Graph_Graph23->SetMaximum(0.9777624);
   Graph_Graph23->SetDirectory(0);
   Graph_Graph23->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph23->SetLineColor(ci);
   Graph_Graph23->GetXaxis()->SetLabelFont(42);
   Graph_Graph23->GetXaxis()->SetTitleOffset(1);
   Graph_Graph23->GetXaxis()->SetTitleFont(42);
   Graph_Graph23->GetYaxis()->SetLabelFont(42);
   Graph_Graph23->GetYaxis()->SetTitleFont(42);
   Graph_Graph23->GetZaxis()->SetLabelFont(42);
   Graph_Graph23->GetZaxis()->SetTitleOffset(1);
   Graph_Graph23->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph23);
   
   TLatex *   tex = new TLatex(0.05968676,0.2499924,"#pm0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(24);
      tex = new TLatex(0.1702822,0.5699273,"#pm1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(25);
      tex = new TLatex(0.2846208,0.7543762,"#pm2");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(26);
      tex = new TLatex(0.3956337,0.8521188,"#pm3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(27);
      tex = new TLatex(0.4992665,0.9138874,"#pm4");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(28);
      tex = new TLatex(0.5949013,0.9558785,"#pm5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(29);
      tex = new TLatex(0.6756805,0.9774396,"#pm6");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(30);
      tex = new TLatex(0.7567532,0.9916902,"#pm7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(31);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx32[12] = {
   0.05968676,
   0.1702822,
   0.2846208,
   0.3956337,
   0.4992665,
   0.5949013,
   0.6756805,
   0.7567532,
   0.8369008,
   0.8954886,
   0.9198227,
   0.9339078};
   Double_t Graph_fy32[12] = {
   0.2099924,
   0.5299273,
   0.7143762,
   0.8121188,
   0.8738874,
   0.9158785,
   0.9374396,
   0.9516902,
   0.9567799,
   0.96471,
   0.9687693,
   0.9717182};
   graph = new TGraph(12,Graph_fx32,Graph_fy32);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph32 = new TH1F("Graph_Graph32","Mass-Matching Prioritized",100,0,1.02133);
   Graph_Graph32->SetMinimum(0.1338199);
   Graph_Graph32->SetMaximum(1.047891);
   Graph_Graph32->SetDirectory(0);
   Graph_Graph32->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph32->SetLineColor(ci);
   Graph_Graph32->GetXaxis()->SetLabelFont(42);
   Graph_Graph32->GetXaxis()->SetTitleOffset(1);
   Graph_Graph32->GetXaxis()->SetTitleFont(42);
   Graph_Graph32->GetYaxis()->SetLabelFont(42);
   Graph_Graph32->GetYaxis()->SetTitleFont(42);
   Graph_Graph32->GetZaxis()->SetLabelFont(42);
   Graph_Graph32->GetZaxis()->SetTitleOffset(1);
   Graph_Graph32->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph32);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx33[11] = {
   0.05449046,
   0.1622658,
   0.2762332,
   0.3878022,
   0.4984775,
   0.5921932,
   0.6627126,
   0.7353315,
   0.800556,
   0.8409914,
   0.8607147};
   Double_t Graph_fy33[11] = {
   0.1276763,
   0.3436593,
   0.514414,
   0.6215353,
   0.6937368,
   0.7482748,
   0.793423,
   0.8287559,
   0.8565879,
   0.8734938,
   0.890621};
   graph = new TGraph(11,Graph_fx33,Graph_fy33);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph33 = new TH1F("Graph_Graph33","Tagging Prioritized",100,0,0.9413371);
   Graph_Graph33->SetMinimum(0.05138186);
   Graph_Graph33->SetMaximum(0.9669154);
   Graph_Graph33->SetDirectory(0);
   Graph_Graph33->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph33->SetLineColor(ci);
   Graph_Graph33->GetXaxis()->SetLabelFont(42);
   Graph_Graph33->GetXaxis()->SetTitleOffset(1);
   Graph_Graph33->GetXaxis()->SetTitleFont(42);
   Graph_Graph33->GetYaxis()->SetLabelFont(42);
   Graph_Graph33->GetYaxis()->SetTitleFont(42);
   Graph_Graph33->GetZaxis()->SetLabelFont(42);
   Graph_Graph33->GetZaxis()->SetTitleOffset(1);
   Graph_Graph33->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph33);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.009505118, 0.977927);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.5,0.15,0.85,0.3,NULL,"brNDC");
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
   entry=leg->AddEntry("NULL","Intervals centered around 115.0 GeV","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","bin size = 10.0 GeV","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_mass_18->Modified();
   ROC_H_mass_18->cd();
   ROC_H_mass_18->SetSelected(ROC_H_mass_18);
}
