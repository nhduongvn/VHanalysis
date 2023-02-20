#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_17()
{
//=========Macro generated from canvas: ROC_H_dR_17/ROC_H_dR_17
//=========  (Sun Feb 19 15:09:24 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_17 = new TCanvas("ROC_H_dR_17", "ROC_H_dR_17",0,0,600,600);
   ROC_H_dR_17->SetHighLightColor(2);
   ROC_H_dR_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_dR_17->SetFillColor(0);
   ROC_H_dR_17->SetBorderMode(0);
   ROC_H_dR_17->SetBorderSize(2);
   ROC_H_dR_17->SetGridx();
   ROC_H_dR_17->SetGridy();
   ROC_H_dR_17->SetLeftMargin(0.15709);
   ROC_H_dR_17->SetRightMargin(0.1234783);
   ROC_H_dR_17->SetBottomMargin(0.12);
   ROC_H_dR_17->SetFrameBorderMode(0);
   ROC_H_dR_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx15[30] = {
   0,
   0,
   9.152044e-05,
   0.04308651,
   0.08882049,
   0.1327219,
   0.1741957,
   0.2148521,
   0.2565246,
   0.3027149,
   0.352702,
   0.4127902,
   0.4670357,
   0.5288266,
   0.6056302,
   0.6893288,
   0.7828534,
   0.8400529,
   0.8843921,
   0.9168358,
   0.9406098,
   0.9599788,
   0.9729175,
   0.9836853,
   0.9926695,
   0.997355,
   0.999189,
   0.9998115,
   0.999998,
   1};
   Double_t Graph_fy15[30] = {
   0,
   0,
   0,
   0.02736919,
   0.08899243,
   0.1713436,
   0.2701903,
   0.370873,
   0.4565913,
   0.5238689,
   0.5802998,
   0.6330761,
   0.6808721,
   0.7315158,
   0.7983913,
   0.8600989,
   0.9291996,
   0.9577879,
   0.9732621,
   0.9840231,
   0.990208,
   0.9945411,
   0.9973349,
   0.9985808,
   0.9992459,
   0.9998364,
   0.9999776,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx15,Graph_fy15);
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
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","Tagging Only",100,0,1.1);
   Graph_Graph15->SetMinimum(0);
   Graph_Graph15->SetMaximum(1.1);
   Graph_Graph15->SetDirectory(0);
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
   
   TLatex *   tex = new TLatex(0.1562077,0.3176269,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(16);
      tex = new TLatex(0.2126156,0.4787095,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(17);
      tex = new TLatex(0.2623754,0.6355702,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(18);
      tex = new TLatex(0.315932,0.7793786,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(19);
      tex = new TLatex(0.3887413,0.8695274,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(20);
      tex = new TLatex(0.4631251,0.862153,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(21);
      tex = new TLatex(0.5376147,0.9054356,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(22);
      tex = new TLatex(0.6118043,0.9365416,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(23);
      tex = new TLatex(0.6782824,0.9616694,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(24);
      tex = new TLatex(0.7439673,0.9906952,"2.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(25);
      tex = new TLatex(0.8131985,1.009076,"3.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(26);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx27[30] = {
   0,
   0,
   6.048211e-07,
   0.05309919,
   0.1107954,
   0.1562077,
   0.2126156,
   0.2623754,
   0.315932,
   0.3887413,
   0.4631251,
   0.5376147,
   0.6118043,
   0.6782824,
   0.7439673,
   0.8131985,
   0.8898422,
   0.925907,
   0.9678482,
   0.9825696,
   0.9915556,
   0.9976757,
   0.9986775,
   0.9995112,
   0.9996595,
   0.9997066,
   0.9999815,
   0.9999967,
   1,
   1};
   Double_t Graph_fy27[30] = {
   0,
   0,
   0,
   0.02089229,
   0.0932317,
   0.2176269,
   0.3787095,
   0.5355702,
   0.6793786,
   0.7695274,
   0.822153,
   0.8654356,
   0.8965416,
   0.9216694,
   0.9506952,
   0.9690758,
   0.9856219,
   0.9935513,
   0.9952011,
   0.9976928,
   0.9989569,
   0.9996351,
   0.9998739,
   0.9998739,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx27,Graph_fy27);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph27 = new TH1F("Graph_Graph27","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph27->SetMinimum(0);
   Graph_Graph27->SetMaximum(1.1);
   Graph_Graph27->SetDirectory(0);
   Graph_Graph27->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph27->SetLineColor(ci);
   Graph_Graph27->GetXaxis()->SetLabelFont(42);
   Graph_Graph27->GetXaxis()->SetTitleOffset(1);
   Graph_Graph27->GetXaxis()->SetTitleFont(42);
   Graph_Graph27->GetYaxis()->SetLabelFont(42);
   Graph_Graph27->GetYaxis()->SetTitleFont(42);
   Graph_Graph27->GetZaxis()->SetLabelFont(42);
   Graph_Graph27->GetZaxis()->SetTitleOffset(1);
   Graph_Graph27->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph27);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx28[30] = {
   0,
   0,
   9.000499e-05,
   0.0429437,
   0.08848578,
   0.1322058,
   0.1739291,
   0.2146891,
   0.2564722,
   0.3029565,
   0.3531518,
   0.413161,
   0.4673497,
   0.5291164,
   0.6058978,
   0.6893877,
   0.783143,
   0.8403933,
   0.8846133,
   0.9171438,
   0.9410301,
   0.9602437,
   0.9730582,
   0.9837692,
   0.9926809,
   0.9973135,
   0.9991639,
   0.9998114,
   0.999998,
   1};
   Double_t Graph_fy28[30] = {
   0,
   0,
   0,
   0.02734913,
   0.09011999,
   0.1720664,
   0.2710883,
   0.3712196,
   0.4576838,
   0.5242923,
   0.5806956,
   0.6345705,
   0.6818818,
   0.7322312,
   0.7990068,
   0.8606933,
   0.9294466,
   0.9582506,
   0.9735964,
   0.9840965,
   0.9902454,
   0.9944335,
   0.99717,
   0.9983903,
   0.9992614,
   0.9998397,
   0.9999781,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx28,Graph_fy28);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph28 = new TH1F("Graph_Graph28","Tagging Prioritized",100,0,1.1);
   Graph_Graph28->SetMinimum(0);
   Graph_Graph28->SetMaximum(1.1);
   Graph_Graph28->SetDirectory(0);
   Graph_Graph28->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph28->SetLineColor(ci);
   Graph_Graph28->GetXaxis()->SetLabelFont(42);
   Graph_Graph28->GetXaxis()->SetTitleOffset(1);
   Graph_Graph28->GetXaxis()->SetTitleFont(42);
   Graph_Graph28->GetYaxis()->SetLabelFont(42);
   Graph_Graph28->GetYaxis()->SetTitleFont(42);
   Graph_Graph28->GetZaxis()->SetLabelFont(42);
   Graph_Graph28->GetZaxis()->SetTitleOffset(1);
   Graph_Graph28->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph28);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.05, 1.05);
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
   ROC_H_dR_17->Modified();
   ROC_H_dR_17->cd();
   ROC_H_dR_17->SetSelected(ROC_H_dR_17);
}
