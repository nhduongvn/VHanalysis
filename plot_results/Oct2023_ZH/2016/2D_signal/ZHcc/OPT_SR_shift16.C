#ifdef __CLING__
#pragma cling optimize(0)
#endif
void OPT_SR_shift16()
{
//=========Macro generated from canvas: OPT_SR_shift16/OPT_SR_shift16
//=========  (Wed Oct  4 11:52:56 2023) by ROOT version 6.28/04
   TCanvas *OPT_SR_shift16 = new TCanvas("OPT_SR_shift16", "OPT_SR_shift16",0,0,600,600);
   OPT_SR_shift16->SetHighLightColor(2);
   OPT_SR_shift16->Range(97.6875,-0.1389242,151.3125,1.004657);
   OPT_SR_shift16->SetFillColor(0);
   OPT_SR_shift16->SetFillStyle(4000);
   OPT_SR_shift16->SetBorderMode(0);
   OPT_SR_shift16->SetBorderSize(2);
   OPT_SR_shift16->SetFrameFillStyle(1000);
   OPT_SR_shift16->SetFrameBorderMode(0);
   OPT_SR_shift16->SetFrameFillStyle(1000);
   OPT_SR_shift16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("Percentages of Events inside Regions");
   
   Double_t Graph_fx1[40] = { 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
   122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137,
   138, 139, 140, 141, 142, 143, 144 };
   Double_t Graph_fy1[40] = { 0.7661105, 0.7878149, 0.8044978, 0.8177458, 0.8268521, 0.8337258, 0.8357577, 0.8403834, 0.8445722, 0.8481654, 0.8487137, 0.8464634, 0.8443548, 0.8421469, 0.8380184, 0.8361637, 0.8264404,
   0.8188678, 0.8137705, 0.8065839, 0.7999309, 0.7925372, 0.7821224, 0.774946, 0.7631646, 0.7501896, 0.7332769, 0.7147149, 0.6971397, 0.6844339, 0.6672042, 0.6430614, 0.6229322,
   0.5997446, 0.5753128, 0.5466639, 0.5211796, 0.4874473, 0.4507656, 0.4207554 };
   TGraph *graph = new TGraph(40,Graph_fx1,Graph_fy1);
   graph->SetName("Graph");
   graph->SetTitle("SR");
   graph->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","SR",100,101.1,147.9);
   Graph_Graph1->SetMinimum(0.3779596);
   Graph_Graph1->SetMaximum(0.8915095);
   Graph_Graph1->SetDirectory(nullptr);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2[40] = { 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
   122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137,
   138, 139, 140, 141, 142, 143, 144 };
   Double_t Graph_fy2[40] = { 0.1588675, 0.1398135, 0.1238454, 0.1113126, 0.1034986, 0.09805183, 0.09712002, 0.09307001, 0.08981109, 0.08579946, 0.08528638, 0.08661037, 0.08551969, 0.0858701, 0.08984053, 0.09168161, 0.09903376,
   0.1055072, 0.1061067, 0.1133864, 0.1161065, 0.118226, 0.1243394, 0.1259229, 0.1307056, 0.1357053, 0.1434638, 0.1544836, 0.162332, 0.1672862, 0.1779462, 0.1923373, 0.2043491,
   0.2180785, 0.2289219, 0.2470997, 0.2583947, 0.272422, 0.2895239, 0.3029615 };
   graph = new TGraph(40,Graph_fx2,Graph_fy2);
   graph->SetName("Graph");
   graph->SetTitle("VR");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","VR",100,101.1,147.9);
   Graph_Graph2->SetMinimum(0.06351887);
   Graph_Graph2->SetMaximum(0.324729);
   Graph_Graph2->SetDirectory(nullptr);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx3[40] = { 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
   122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137,
   138, 139, 140, 141, 142, 143, 144 };
   Double_t Graph_fy3[40] = { 0.01982466, 0.01938381, 0.01938381, 0.01982237, 0.01982237, 0.01982237, 0.01982237, 0.01982237, 0.01982237, 0.01861886, 0.01732675, 0.01797137, 0.01703361, 0.01703361, 0.01748939, 0.01701867, 0.01761921,
   0.01883097, 0.0193638, 0.01908892, 0.01908148, 0.0195199, 0.01905795, 0.02038307, 0.02080774, 0.02169426, 0.02169426, 0.0229585, 0.02306572, 0.02295821, 0.02389765, 0.0248364, 0.02727644,
   0.03086461, 0.03397185, 0.03448116, 0.03738515, 0.0409215, 0.04375087, 0.04627598 };
   graph = new TGraph(40,Graph_fx3,Graph_fy3);
   graph->SetName("Graph");
   graph->SetTitle("other");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","other",100,101.1,147.9);
   Graph_Graph3->SetMinimum(0.01409294);
   Graph_Graph3->SetMaximum(0.04920171);
   Graph_Graph3->SetDirectory(nullptr);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx4[40] = { 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
   122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137,
   138, 139, 140, 141, 142, 143, 144 };
   Double_t Graph_fy4[40] = { 0.05519726, 0.0529878, 0.05227299, 0.05111918, 0.04982687, 0.04839998, 0.04729987, 0.04672417, 0.04579429, 0.04741624, 0.04867318, 0.04895485, 0.05309192, 0.05494938, 0.05465164, 0.05513599, 0.05690664,
   0.056794, 0.06075897, 0.06094081, 0.06488107, 0.0697169, 0.07448021, 0.07874798, 0.08532205, 0.0924109, 0.101565, 0.107843, 0.1174626, 0.1253217, 0.130952, 0.1397649, 0.1454423,
   0.1513123, 0.1617934, 0.1717552, 0.1830405, 0.1992092, 0.2159596, 0.2300071 };
   graph = new TGraph(40,Graph_fx4,Graph_fy4);
   graph->SetName("Graph");
   graph->SetTitle("CR");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","CR",100,101.1,147.9);
   Graph_Graph4->SetMinimum(0.02737301);
   Graph_Graph4->SetMaximum(0.2484284);
   Graph_Graph4->SetDirectory(nullptr);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetTitleOffset(1);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetTitleOffset(1);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   multigraph->Add(graph,"");
   multigraph->Draw("AC");
   multigraph->GetXaxis()->SetLimits(103.05, 145.95);
   multigraph->GetXaxis()->SetTitle("x-center of ellipse [GeV]");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("percentage of events");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.7,0.7,0.9,0.9,NULL,"brNDC");
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
   OPT_SR_shift16->Modified();
   OPT_SR_shift16->cd();
   OPT_SR_shift16->SetSelected(OPT_SR_shift16);
}
