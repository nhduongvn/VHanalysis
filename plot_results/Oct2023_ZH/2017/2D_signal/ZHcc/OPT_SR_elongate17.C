#ifdef __CLING__
#pragma cling optimize(0)
#endif
void OPT_SR_elongate17()
{
//=========Macro generated from canvas: OPT_SR_elongate17/OPT_SR_elongate17
//=========  (Wed Oct  4 11:53:03 2023) by ROOT version 6.28/04
   TCanvas *OPT_SR_elongate17 = new TCanvas("OPT_SR_elongate17", "OPT_SR_elongate17",0,0,600,600);
   OPT_SR_elongate17->SetHighLightColor(2);
   OPT_SR_elongate17->Range(-3.5625,-0.1530659,22.5625,1.052802);
   OPT_SR_elongate17->SetFillColor(0);
   OPT_SR_elongate17->SetFillStyle(4000);
   OPT_SR_elongate17->SetBorderMode(0);
   OPT_SR_elongate17->SetBorderSize(2);
   OPT_SR_elongate17->SetFrameFillStyle(1000);
   OPT_SR_elongate17->SetFrameBorderMode(0);
   OPT_SR_elongate17->SetFrameFillStyle(1000);
   OPT_SR_elongate17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("Percentages of Events inside Regions");
   
   Double_t Graph_fx13[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
   17, 18, 19 };
   Double_t Graph_fy13[20] = { 0.8014616, 0.8083424, 0.8158151, 0.8229723, 0.8301791, 0.8370164, 0.8426012, 0.8457572, 0.8521944, 0.8577225, 0.8632194, 0.8674033, 0.8694012, 0.8744033, 0.876849, 0.8787243, 0.8799062,
   0.8822707, 0.8859252, 0.8883655 };
   TGraph *graph = new TGraph(20,Graph_fx13,Graph_fy13);
   graph->SetName("Graph");
   graph->SetTitle("SR");
   graph->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","SR",100,0,20.9);
   Graph_Graph13->SetMinimum(0.7927712);
   Graph_Graph13->SetMaximum(0.8970559);
   Graph_Graph13->SetDirectory(nullptr);
   Graph_Graph13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph13->SetLineColor(ci);
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetTitleOffset(1);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetTitleOffset(1);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph13);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx14[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
   17, 18, 19 };
   Double_t Graph_fy14[20] = { 0.1089115, 0.1057181, 0.1006501, 0.0979881, 0.09295691, 0.08855659, 0.08421838, 0.08361916, 0.08032738, 0.07858605, 0.07582559, 0.07334739, 0.07260081, 0.07012407, 0.06896165, 0.0685439, 0.06800395,
   0.06737513, 0.06488194, 0.06360303 };
   graph = new TGraph(20,Graph_fx14,Graph_fy14);
   graph->SetName("Graph");
   graph->SetTitle("VR");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","VR",100,0,20.9);
   Graph_Graph14->SetMinimum(0.05907219);
   Graph_Graph14->SetMaximum(0.1134423);
   Graph_Graph14->SetDirectory(nullptr);
   Graph_Graph14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph14->SetLineColor(ci);
   Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph14->GetXaxis()->SetTitleOffset(1);
   Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph14->GetYaxis()->SetTitleFont(42);
   Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph14->GetZaxis()->SetTitleOffset(1);
   Graph_Graph14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph14);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx15[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
   17, 18, 19 };
   Double_t Graph_fy15[20] = { 0.01933864, 0.01865451, 0.0179405, 0.01758202, 0.01726357, 0.0164183, 0.01550985, 0.01531327, 0.01423819, 0.01395235, 0.0134051, 0.0134051, 0.0134051, 0.0134051, 0.01329477, 0.01269649, 0.01231459,
   0.01231459, 0.01169203, 0.01137064 };
   graph = new TGraph(20,Graph_fx15,Graph_fy15);
   graph->SetName("Graph");
   graph->SetTitle("other");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","other",100,0,20.9);
   Graph_Graph15->SetMinimum(0.01057384);
   Graph_Graph15->SetMaximum(0.02013544);
   Graph_Graph15->SetDirectory(nullptr);
   Graph_Graph15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph15->SetLineColor(ci);
   Graph_Graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph15->GetXaxis()->SetTitleOffset(1);
   Graph_Graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph15->GetYaxis()->SetTitleFont(42);
   Graph_Graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph15->GetZaxis()->SetTitleOffset(1);
   Graph_Graph15->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph15);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx16[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
   17, 18, 19 };
   Double_t Graph_fy16[20] = { 0.07028832, 0.067285, 0.06559432, 0.06145762, 0.05960038, 0.0580087, 0.05767053, 0.05531039, 0.05324001, 0.04973913, 0.0475499, 0.04584425, 0.04459286, 0.04206752, 0.04089457, 0.04003532, 0.03977527,
   0.03803953, 0.03750083, 0.03666082 };
   graph = new TGraph(20,Graph_fx16,Graph_fy16);
   graph->SetName("Graph");
   graph->SetTitle("CR");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph16 = new TH1F("Graph_Graph16","CR",100,0,20.9);
   Graph_Graph16->SetMinimum(0.03329808);
   Graph_Graph16->SetMaximum(0.07365107);
   Graph_Graph16->SetDirectory(nullptr);
   Graph_Graph16->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph16->SetLineColor(ci);
   Graph_Graph16->GetXaxis()->SetLabelFont(42);
   Graph_Graph16->GetXaxis()->SetTitleOffset(1);
   Graph_Graph16->GetXaxis()->SetTitleFont(42);
   Graph_Graph16->GetYaxis()->SetLabelFont(42);
   Graph_Graph16->GetYaxis()->SetTitleFont(42);
   Graph_Graph16->GetZaxis()->SetLabelFont(42);
   Graph_Graph16->GetZaxis()->SetTitleOffset(1);
   Graph_Graph16->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph16);
   
   multigraph->Add(graph,"");
   multigraph->Draw("AC");
   multigraph->GetXaxis()->SetLimits(-0.95, 19.95);
   multigraph->GetXaxis()->SetTitle("|major axis - minor axis| [GeV]");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("percentage of events");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.1,0.5,0.3,0.7,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","SR","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","VR","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","other","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","CR","lp");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.9341608,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Percentages of Events inside Regions");
   pt->Draw();
   OPT_SR_elongate17->Modified();
   OPT_SR_elongate17->cd();
   OPT_SR_elongate17->SetSelected(OPT_SR_elongate17);
}
