#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj1_16()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj1_16/ROC_Z_dR_Bj1_16
//=========  (Wed Mar  1 15:31:58 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj1_16 = new TCanvas("ROC_Z_dR_Bj1_16", "ROC_Z_dR_Bj1_16",0,0,600,600);
   ROC_Z_dR_Bj1_16->SetHighLightColor(2);
   ROC_Z_dR_Bj1_16->Range(-0.290185,-0.1615385,1.238783,1.184615);
   ROC_Z_dR_Bj1_16->SetFillColor(0);
   ROC_Z_dR_Bj1_16->SetBorderMode(0);
   ROC_Z_dR_Bj1_16->SetBorderSize(2);
   ROC_Z_dR_Bj1_16->SetGridx();
   ROC_Z_dR_Bj1_16->SetGridy();
   ROC_Z_dR_Bj1_16->SetLeftMargin(0.15709);
   ROC_Z_dR_Bj1_16->SetRightMargin(0.1234783);
   ROC_Z_dR_Bj1_16->SetBottomMargin(0.12);
   ROC_Z_dR_Bj1_16->SetFrameBorderMode(0);
   ROC_Z_dR_Bj1_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx170[30] = {
   0,
   0.0399166,
   0.213194,
   0.3695251,
   0.4877195,
   0.5782163,
   0.6510258,
   0.7118378,
   0.7608388,
   0.7991746,
   0.8303365,
   0.8566641,
   0.884252,
   0.9050027,
   0.926128,
   0.945388,
   0.9631698,
   0.9772706,
   0.9846205,
   0.9884896,
   0.9915316,
   0.9946815,
   0.9963292,
   0.9977126,
   0.9986621,
   0.9989058,
   0.9991864,
   0.9993581,
   0.9996867,
   0.9997058};
   Double_t Graph_fy170[30] = {
   0,
   0.050605,
   0.2651327,
   0.4968161,
   0.6545853,
   0.7416851,
   0.7887285,
   0.8229387,
   0.857872,
   0.8768941,
   0.8982945,
   0.9167485,
   0.9347962,
   0.9489207,
   0.962841,
   0.974789,
   0.9841756,
   0.9902518,
   0.9950578,
   0.9965769,
   0.9969173,
   0.9976428,
   0.9982321,
   0.9993426,
   0.9994107,
   0.9999319,
   0.9999319,
   0.9999319,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx170,Graph_fy170);
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
   
   TH1F *Graph_Graph170 = new TH1F("Graph_Graph170","Tagging Only",100,0,1.099676);
   Graph_Graph170->SetMinimum(0);
   Graph_Graph170->SetMaximum(1.1);
   Graph_Graph170->SetDirectory(0);
   Graph_Graph170->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph170->SetLineColor(ci);
   Graph_Graph170->GetXaxis()->SetLabelFont(42);
   Graph_Graph170->GetXaxis()->SetTitleOffset(1);
   Graph_Graph170->GetXaxis()->SetTitleFont(42);
   Graph_Graph170->GetYaxis()->SetLabelFont(42);
   Graph_Graph170->GetYaxis()->SetTitleFont(42);
   Graph_Graph170->GetZaxis()->SetLabelFont(42);
   Graph_Graph170->GetZaxis()->SetTitleOffset(1);
   Graph_Graph170->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph170);
   
   TLatex *   tex = new TLatex(0.212727,0.3653101,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(171);
      tex = new TLatex(0.375993,0.6332431,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(172);
      tex = new TLatex(0.5210384,0.8704027,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(173);
      tex = new TLatex(0.61703,0.9360594,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(174);
      tex = new TLatex(0.6936807,0.9815131,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(175);
      tex = new TLatex(0.7656783,0.997401,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(176);
      tex = new TLatex(0.8058539,1.005251,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(177);
      tex = new TLatex(0.8341464,1.015014,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(178);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx179[30] = {
   0,
   0.0004493253,
   0.1814119,
   0.375993,
   0.5210384,
   0.61703,
   0.6936807,
   0.7656783,
   0.8058539,
   0.8341464,
   0.8552552,
   0.8796024,
   0.9038047,
   0.9202773,
   0.9303036,
   0.9392694,
   0.9507027,
   0.9785478,
   0.9861148,
   0.9906863,
   0.9949237,
   0.996637,
   0.9971811,
   0.999335,
   0.9997687,
   0.9998723,
   0.9998902,
   0.9999484,
   0.9999516,
   0.9999891};
   Double_t Graph_fy179[30] = {
   0,
   0.002200345,
   0.2024901,
   0.5332431,
   0.7704027,
   0.8960594,
   0.9415131,
   0.957401,
   0.9652508,
   0.9750135,
   0.9817136,
   0.9867882,
   0.9876505,
   0.9912879,
   0.9943506,
   0.9952128,
   0.9988503,
   0.9991377,
   0.9997126,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx179,Graph_fy179);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph179 = new TH1F("Graph_Graph179","Mass-Matching Prioritized",100,0,1.099988);
   Graph_Graph179->SetMinimum(0);
   Graph_Graph179->SetMaximum(1.1);
   Graph_Graph179->SetDirectory(0);
   Graph_Graph179->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph179->SetLineColor(ci);
   Graph_Graph179->GetXaxis()->SetLabelFont(42);
   Graph_Graph179->GetXaxis()->SetTitleOffset(1);
   Graph_Graph179->GetXaxis()->SetTitleFont(42);
   Graph_Graph179->GetYaxis()->SetLabelFont(42);
   Graph_Graph179->GetYaxis()->SetTitleFont(42);
   Graph_Graph179->GetZaxis()->SetLabelFont(42);
   Graph_Graph179->GetZaxis()->SetTitleOffset(1);
   Graph_Graph179->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph179);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx180[30] = {
   0,
   0.0400823,
   0.212727,
   0.3690786,
   0.4868602,
   0.577255,
   0.6502418,
   0.7110373,
   0.7605507,
   0.7987755,
   0.8301242,
   0.8566829,
   0.8843582,
   0.9052892,
   0.9263396,
   0.9455471,
   0.9633169,
   0.9773235,
   0.9846145,
   0.9885492,
   0.9916085,
   0.9947243,
   0.9963703,
   0.9977388,
   0.9986754,
   0.9989182,
   0.9991943,
   0.9993658,
   0.9996924,
   0.9997113};
   Double_t Graph_fy180[30] = {
   0,
   0.05048738,
   0.2653101,
   0.4979415,
   0.6555198,
   0.7412761,
   0.7898678,
   0.8245624,
   0.858632,
   0.8775844,
   0.8982941,
   0.9169997,
   0.9358184,
   0.9498262,
   0.9635666,
   0.9753029,
   0.9845231,
   0.9903578,
   0.9950786,
   0.9965707,
   0.9970388,
   0.9976846,
   0.9982634,
   0.9993543,
   0.9994211,
   0.9999331,
   0.9999331,
   0.9999331,
   1,
   1};
   graph = new TGraph(30,Graph_fx180,Graph_fy180);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph180 = new TH1F("Graph_Graph180","Tagging Prioritized",100,0,1.099682);
   Graph_Graph180->SetMinimum(0);
   Graph_Graph180->SetMaximum(1.1);
   Graph_Graph180->SetDirectory(0);
   Graph_Graph180->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph180->SetLineColor(ci);
   Graph_Graph180->GetXaxis()->SetLabelFont(42);
   Graph_Graph180->GetXaxis()->SetTitleOffset(1);
   Graph_Graph180->GetXaxis()->SetTitleFont(42);
   Graph_Graph180->GetYaxis()->SetLabelFont(42);
   Graph_Graph180->GetYaxis()->SetTitleFont(42);
   Graph_Graph180->GetZaxis()->SetLabelFont(42);
   Graph_Graph180->GetZaxis()->SetTitleOffset(1);
   Graph_Graph180->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph180);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999946, 1.049989);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_dR_Bj1_16->Modified();
   ROC_Z_dR_Bj1_16->cd();
   ROC_Z_dR_Bj1_16->SetSelected(ROC_Z_dR_Bj1_16);
}
