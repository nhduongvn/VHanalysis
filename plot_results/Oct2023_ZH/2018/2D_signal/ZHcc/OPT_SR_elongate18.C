#ifdef __CLING__
#pragma cling optimize(0)
#endif
void OPT_SR_elongate18()
{
//=========Macro generated from canvas: OPT_SR_elongate18/OPT_SR_elongate18
//=========  (Wed Oct  4 11:53:09 2023) by ROOT version 6.28/04
   TCanvas *OPT_SR_elongate18 = new TCanvas("OPT_SR_elongate18", "OPT_SR_elongate18",0,0,600,600);
   OPT_SR_elongate18->SetHighLightColor(2);
   OPT_SR_elongate18->Range(-3.5625,-0.1469723,22.5625,1.038276);
   OPT_SR_elongate18->SetFillColor(0);
   OPT_SR_elongate18->SetFillStyle(4000);
   OPT_SR_elongate18->SetBorderMode(0);
   OPT_SR_elongate18->SetBorderSize(2);
   OPT_SR_elongate18->SetFrameFillStyle(1000);
   OPT_SR_elongate18->SetFrameBorderMode(0);
   OPT_SR_elongate18->SetFrameFillStyle(1000);
   OPT_SR_elongate18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("Percentages of Events inside Regions");
   
   Double_t Graph_fx21[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
   17, 18, 19 };
   Double_t Graph_fy21[20] = { 0.7774053, 0.7848145, 0.7930132, 0.8035305, 0.8110545, 0.8200163, 0.8266767, 0.8297831, 0.8357749, 0.8410259, 0.8447856, 0.8485932, 0.8548583, 0.8592846, 0.8610223, 0.8640039, 0.8666361,
   0.8686517, 0.8732485, 0.8766515 };
   TGraph *graph = new TGraph(20,Graph_fx21,Graph_fy21);
   graph->SetName("Graph");
   graph->SetTitle("SR");
   graph->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph21 = new TH1F("Graph_Graph21","SR",100,0,20.9);
   Graph_Graph21->SetMinimum(0.7674807);
   Graph_Graph21->SetMaximum(0.8865762);
   Graph_Graph21->SetDirectory(nullptr);
   Graph_Graph21->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21->SetLineColor(ci);
   Graph_Graph21->GetXaxis()->SetLabelFont(42);
   Graph_Graph21->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21->GetXaxis()->SetTitleFont(42);
   Graph_Graph21->GetYaxis()->SetLabelFont(42);
   Graph_Graph21->GetYaxis()->SetTitleFont(42);
   Graph_Graph21->GetZaxis()->SetLabelFont(42);
   Graph_Graph21->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph21);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx22[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
   17, 18, 19 };
   Double_t Graph_fy22[20] = { 0.1205616, 0.1166198, 0.1125501, 0.1072029, 0.1022073, 0.09708611, 0.09374803, 0.09373309, 0.09277936, 0.09284047, 0.09192926, 0.09036846, 0.0858479, 0.08421996, 0.08386157, 0.08319407, 0.08091558,
   0.07925113, 0.07566507, 0.0733955 };
   graph = new TGraph(20,Graph_fx22,Graph_fy22);
   graph->SetName("Graph");
   graph->SetTitle("VR");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph22 = new TH1F("Graph_Graph22","VR",100,0,20.9);
   Graph_Graph22->SetMinimum(0.0686789);
   Graph_Graph22->SetMaximum(0.1252782);
   Graph_Graph22->SetDirectory(nullptr);
   Graph_Graph22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph22->SetLineColor(ci);
   Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph22->GetXaxis()->SetTitleOffset(1);
   Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph22->GetZaxis()->SetTitleOffset(1);
   Graph_Graph22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph22);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx23[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
   17, 18, 19 };
   Double_t Graph_fy23[20] = { 0.0224644, 0.02127479, 0.02081829, 0.01932997, 0.01785241, 0.01775775, 0.01731318, 0.01642663, 0.01642663, 0.01642663, 0.01592636, 0.01575925, 0.01553162, 0.01539573, 0.0151621, 0.01504866, 0.01504866,
   0.01480754, 0.01480754, 0.01465248 };
   graph = new TGraph(20,Graph_fx23,Graph_fy23);
   graph->SetName("Graph");
   graph->SetTitle("other");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph23 = new TH1F("Graph_Graph23","other",100,0,20.9);
   Graph_Graph23->SetMinimum(0.01387129);
   Graph_Graph23->SetMaximum(0.02324559);
   Graph_Graph23->SetDirectory(nullptr);
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
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx24[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
   17, 18, 19 };
   Double_t Graph_fy24[20] = { 0.07956872, 0.07729094, 0.07361839, 0.06993656, 0.06888582, 0.06513984, 0.06226204, 0.06005722, 0.05501907, 0.04970699, 0.0473588, 0.04527913, 0.04376217, 0.04109973, 0.039954, 0.03775337, 0.03739965,
   0.03728967, 0.03627886, 0.03530047 };
   graph = new TGraph(20,Graph_fx24,Graph_fy24);
   graph->SetName("Graph");
   graph->SetTitle("CR");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph24 = new TH1F("Graph_Graph24","CR",100,0,20.9);
   Graph_Graph24->SetMinimum(0.03087364);
   Graph_Graph24->SetMaximum(0.08399555);
   Graph_Graph24->SetDirectory(nullptr);
   Graph_Graph24->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph24->SetLineColor(ci);
   Graph_Graph24->GetXaxis()->SetLabelFont(42);
   Graph_Graph24->GetXaxis()->SetTitleOffset(1);
   Graph_Graph24->GetXaxis()->SetTitleFont(42);
   Graph_Graph24->GetYaxis()->SetLabelFont(42);
   Graph_Graph24->GetYaxis()->SetTitleFont(42);
   Graph_Graph24->GetZaxis()->SetLabelFont(42);
   Graph_Graph24->GetZaxis()->SetTitleOffset(1);
   Graph_Graph24->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph24);
   
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
   OPT_SR_elongate18->Modified();
   OPT_SR_elongate18->cd();
   OPT_SR_elongate18->SetSelected(OPT_SR_elongate18);
}
