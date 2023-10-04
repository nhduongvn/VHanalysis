#ifdef __CLING__
#pragma cling optimize(0)
#endif
void OPT_SR_shift17()
{
//=========Macro generated from canvas: OPT_SR_shift17/OPT_SR_shift17
//=========  (Wed Oct  4 11:53:01 2023) by ROOT version 6.28/04
   TCanvas *OPT_SR_shift17 = new TCanvas("OPT_SR_shift17", "OPT_SR_shift17",0,0,600,600);
   OPT_SR_shift17->SetHighLightColor(2);
   OPT_SR_shift17->Range(97.6875,-0.1368041,151.3125,0.9993328);
   OPT_SR_shift17->SetFillColor(0);
   OPT_SR_shift17->SetFillStyle(4000);
   OPT_SR_shift17->SetBorderMode(0);
   OPT_SR_shift17->SetBorderSize(2);
   OPT_SR_shift17->SetFrameFillStyle(1000);
   OPT_SR_shift17->SetFrameBorderMode(0);
   OPT_SR_shift17->SetFrameFillStyle(1000);
   OPT_SR_shift17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("Percentages of Events inside Regions");
   
   Double_t Graph_fx9[40] = { 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
   122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137,
   138, 139, 140, 141, 142, 143, 144 };
   Double_t Graph_fy9[40] = { 0.7642245, 0.7803743, 0.7960262, 0.8069193, 0.8169957, 0.8278761, 0.8342821, 0.8373282, 0.8422408, 0.8429125, 0.8436596, 0.844405, 0.841813, 0.8378809, 0.8362611, 0.8319081, 0.8277246,
   0.8222707, 0.8158806, 0.8078548, 0.8014616, 0.7913975, 0.7780975, 0.7671934, 0.7528995, 0.7409225, 0.7296355, 0.7185732, 0.7022889, 0.6860082, 0.6632427, 0.6438853, 0.619073,
   0.5987772, 0.5781197, 0.5517469, 0.5284968, 0.5002503, 0.4701337, 0.4355513 };
   TGraph *graph = new TGraph(40,Graph_fx9,Graph_fy9);
   graph->SetName("Graph");
   graph->SetTitle("SR");
   graph->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","SR",100,101.1,147.9);
   Graph_Graph9->SetMinimum(0.3946659);
   Graph_Graph9->SetMaximum(0.8852904);
   Graph_Graph9->SetDirectory(nullptr);
   Graph_Graph9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph9->SetLineColor(ci);
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetTitleOffset(1);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetTitleOffset(1);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph9);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx10[40] = { 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
   122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137,
   138, 139, 140, 141, 142, 143, 144 };
   Double_t Graph_fy10[40] = { 0.1558877, 0.1426912, 0.1289189, 0.1186475, 0.1095411, 0.101386, 0.09545304, 0.09245723, 0.08735182, 0.08715992, 0.08578234, 0.08312358, 0.08608698, 0.08886289, 0.08724261, 0.09068288, 0.09301863,
   0.09694621, 0.1006634, 0.1060834, 0.1089115, 0.1147112, 0.1226296, 0.1271965, 0.1367573, 0.1430831, 0.1486395, 0.1534424, 0.1627037, 0.1712349, 0.1857141, 0.1949057, 0.2069731,
   0.2158437, 0.2228067, 0.2343586, 0.2426381, 0.2587781, 0.2723183, 0.2909521 };
   graph = new TGraph(40,Graph_fx10,Graph_fy10);
   graph->SetName("Graph");
   graph->SetTitle("VR");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","VR",100,101.1,147.9);
   Graph_Graph10->SetMinimum(0.06234073);
   Graph_Graph10->SetMaximum(0.311735);
   Graph_Graph10->SetDirectory(nullptr);
   Graph_Graph10->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph10->SetLineColor(ci);
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetTitleOffset(1);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetTitleOffset(1);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph10);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx11[40] = { 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
   122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137,
   138, 139, 140, 141, 142, 143, 144 };
   Double_t Graph_fy11[40] = { 0.02426565, 0.02369752, 0.02346706, 0.0222865, 0.02188281, 0.02142473, 0.02118127, 0.02087281, 0.02008715, 0.01974002, 0.01887603, 0.01858719, 0.01912832, 0.01920003, 0.01929456, 0.01876875, 0.0188784,
   0.01812365, 0.01828886, 0.01865451, 0.01933864, 0.02073413, 0.02140222, 0.02180886, 0.02273957, 0.02229791, 0.02352686, 0.02452201, 0.02535833, 0.02707304, 0.02821162, 0.03195175, 0.03399263,
   0.03558693, 0.03818087, 0.03905312, 0.04154418, 0.04454295, 0.04754475, 0.05033145 };
   graph = new TGraph(40,Graph_fx11,Graph_fy11);
   graph->SetName("Graph");
   graph->SetTitle("other");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","other",100,101.1,147.9);
   Graph_Graph11->SetMinimum(0.01490287);
   Graph_Graph11->SetMaximum(0.05355223);
   Graph_Graph11->SetDirectory(nullptr);
   Graph_Graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11->SetLineColor(ci);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx12[40] = { 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
   122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137,
   138, 139, 140, 141, 142, 143, 144 };
   Double_t Graph_fy12[40] = { 0.05562216, 0.05323701, 0.0515879, 0.05214673, 0.05158037, 0.04931319, 0.04908358, 0.04934177, 0.05032026, 0.05018753, 0.05168205, 0.05388423, 0.05297174, 0.05405622, 0.05720175, 0.05864023, 0.06037838,
   0.06265941, 0.06516714, 0.06740729, 0.07028832, 0.0731571, 0.07787065, 0.0838013, 0.08760368, 0.09369649, 0.09819819, 0.1034624, 0.1096491, 0.1156838, 0.1228315, 0.1292573, 0.1399613,
   0.1497922, 0.1608926, 0.1748413, 0.1873209, 0.1964286, 0.2100033, 0.2231651 };
   graph = new TGraph(40,Graph_fx12,Graph_fy12);
   graph->SetName("Graph");
   graph->SetTitle("CR");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","CR",100,101.1,147.9);
   Graph_Graph12->SetMinimum(0.03167542);
   Graph_Graph12->SetMaximum(0.2405733);
   Graph_Graph12->SetDirectory(nullptr);
   Graph_Graph12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph12->SetLineColor(ci);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetTitleOffset(1);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetTitleOffset(1);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12);
   
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
   OPT_SR_shift17->Modified();
   OPT_SR_shift17->cd();
   OPT_SR_shift17->SetSelected(OPT_SR_shift17);
}
