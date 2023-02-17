#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj1_16()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj1_16/ROC_Z_dR_Bj1_16
//=========  (Thu Feb 16 10:45:50 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj1_16 = new TCanvas("ROC_Z_dR_Bj1_16", "ROC_Z_dR_Bj1_16",0,0,600,600);
   ROC_Z_dR_Bj1_16->SetHighLightColor(2);
   ROC_Z_dR_Bj1_16->Range(-0.2901849,-0.1615385,1.238783,1.184615);
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
   0.03992225,
   0.2128715,
   0.3659471,
   0.483575,
   0.5759673,
   0.6492756,
   0.7114714,
   0.7605614,
   0.7986388,
   0.8297691,
   0.8561592,
   0.8841115,
   0.9046002,
   0.925942,
   0.9455943,
   0.9632734,
   0.9775627,
   0.985201,
   0.9889411,
   0.9919454,
   0.9945074,
   0.9962735,
   0.997554,
   0.9985439,
   0.9987999,
   0.9990932,
   0.9992679,
   0.9996178,
   0.9996379};
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
   
   TH1F *Graph_Graph170 = new TH1F("Graph_Graph170","Tagging Only",100,0,1.099602);
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
   
   TLatex *   tex = new TLatex(0.2126076,0.3653101,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(171);
      tex = new TLatex(0.3726925,0.6332431,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(172);
      tex = new TLatex(0.5100195,0.8704027,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(173);
      tex = new TLatex(0.6031503,0.9360594,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(174);
      tex = new TLatex(0.6833968,0.9815131,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(175);
      tex = new TLatex(0.7580804,0.997401,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(176);
      tex = new TLatex(0.8001048,1.005251,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(177);
      tex = new TLatex(0.8278501,1.015014,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(178);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx179[30] = {
   0,
   0.0004779879,
   0.17672,
   0.3726925,
   0.5100195,
   0.6031503,
   0.6833968,
   0.7580804,
   0.8001048,
   0.8278501,
   0.8500381,
   0.8744401,
   0.9004116,
   0.9154536,
   0.9261296,
   0.9342898,
   0.9469102,
   0.9758384,
   0.9847467,
   0.989887,
   0.9950174,
   0.9964724,
   0.9970561,
   0.9996671,
   0.9997805,
   0.9998926,
   0.9999107,
   0.9999741,
   0.9999773,
   0.9999888};
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
   0.04010982,
   0.2126076,
   0.3655763,
   0.4827825,
   0.5751353,
   0.6483827,
   0.710632,
   0.760107,
   0.7980952,
   0.8294504,
   0.8560607,
   0.8841467,
   0.9048425,
   0.9261082,
   0.9457098,
   0.9634003,
   0.977596,
   0.9851704,
   0.9889865,
   0.9920138,
   0.99455,
   0.9963146,
   0.9975814,
   0.9985584,
   0.9988134,
   0.999102,
   0.9992766,
   0.9996247,
   0.9996445};
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
   
   TH1F *Graph_Graph180 = new TH1F("Graph_Graph180","Tagging Prioritized",100,0,1.099609);
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
   multigraph->GetXaxis()->SetLimits(-0.04999944, 1.049988);
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
