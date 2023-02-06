#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_dR_HZ_17()
{
//=========Macro generated from canvas: ROC_dR_HZ_17/ROC_dR_HZ_17
//=========  (Tue Jan 31 11:21:42 2023) by ROOT version 6.26/06
   TCanvas *ROC_dR_HZ_17 = new TCanvas("ROC_dR_HZ_17", "ROC_dR_HZ_17",0,0,600,600);
   ROC_dR_HZ_17->SetHighLightColor(2);
   ROC_dR_HZ_17->Range(-0.1920535,-0.04669897,1.219111,1.163994);
   ROC_dR_HZ_17->SetFillColor(0);
   ROC_dR_HZ_17->SetBorderMode(0);
   ROC_dR_HZ_17->SetBorderSize(2);
   ROC_dR_HZ_17->SetGridx();
   ROC_dR_HZ_17->SetGridy();
   ROC_dR_HZ_17->SetLeftMargin(0.15709);
   ROC_dR_HZ_17->SetRightMargin(0.1234783);
   ROC_dR_HZ_17->SetBottomMargin(0.12);
   ROC_dR_HZ_17->SetFrameBorderMode(0);
   ROC_dR_HZ_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx265[28] = {
   0.07763775,
   0.2071833,
   0.3154525,
   0.4014812,
   0.4722491,
   0.5350773,
   0.591357,
   0.637525,
   0.6829911,
   0.7181874,
   0.7515821,
   0.7823605,
   0.8079277,
   0.8319385,
   0.8539286,
   0.8732548,
   0.8890241,
   0.9074422,
   0.9199811,
   0.9319827,
   0.9433486,
   0.9540735,
   0.9634156,
   0.9704481,
   0.9766085,
   0.983663,
   0.9885885,
   0.9939397};
   Double_t Graph_fy265[28] = {
   0.1466518,
   0.3570914,
   0.5053388,
   0.5985444,
   0.6667837,
   0.7230102,
   0.7670291,
   0.7998903,
   0.8253187,
   0.8497201,
   0.8701343,
   0.8890116,
   0.9019122,
   0.9141973,
   0.9252481,
   0.9360673,
   0.9463536,
   0.9536498,
   0.9602657,
   0.9643864,
   0.9709237,
   0.9757327,
   0.9812403,
   0.9851923,
   0.9894427,
   0.992784,
   0.9952812,
   0.9973366};
   TGraph *graph = new TGraph(28,Graph_fx265,Graph_fy265);
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
   
   TH1F *Graph_Graph265 = new TH1F("Graph_Graph265","Tagging Only",100,0,1.08557);
   Graph_Graph265->SetMinimum(0.06158332);
   Graph_Graph265->SetMaximum(1.082405);
   Graph_Graph265->SetDirectory(0);
   Graph_Graph265->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph265->SetLineColor(ci);
   Graph_Graph265->GetXaxis()->SetLabelFont(42);
   Graph_Graph265->GetXaxis()->SetTitleOffset(1);
   Graph_Graph265->GetXaxis()->SetTitleFont(42);
   Graph_Graph265->GetYaxis()->SetLabelFont(42);
   Graph_Graph265->GetYaxis()->SetTitleFont(42);
   Graph_Graph265->GetZaxis()->SetLabelFont(42);
   Graph_Graph265->GetZaxis()->SetTitleOffset(1);
   Graph_Graph265->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph265);
   
   TLatex *   tex = new TLatex(0.2466208,0.6552103,"#pm0.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(266);
      tex = new TLatex(0.3684944,0.8231265,"#pm0.2");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(267);
      tex = new TLatex(0.4774438,0.8571208,"#pm0.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(268);
      tex = new TLatex(0.540997,0.9060329,"#pm0.4");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(269);
      tex = new TLatex(0.6122923,0.9411603,"#pm0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(270);
      tex = new TLatex(0.6722408,0.9680893,"#pm0.6");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(271);
      tex = new TLatex(0.7114977,0.9818695,"#pm0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(272);
      tex = new TLatex(0.7537473,0.9899956,"#pm0.8");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(273);
      tex = new TLatex(0.7792986,0.9983715,"#pm0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(274);
      tex = new TLatex(0.8118899,1.00444,"#pm1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(275);
      tex = new TLatex(0.8395898,1.012239,"#pm1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(276);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx277[28] = {
   0.1004627,
   0.2466208,
   0.3684944,
   0.4774438,
   0.540997,
   0.6122923,
   0.6722408,
   0.7114977,
   0.7537473,
   0.7792986,
   0.8118899,
   0.8395898,
   0.8598643,
   0.8806208,
   0.9009033,
   0.9182044,
   0.9314025,
   0.9478883,
   0.9581094,
   0.9679983,
   0.9749235,
   0.9814132,
   0.9834039,
   0.9859093,
   0.9882374,
   0.9945862,
   0.9973427,
   0.9987155};
   Double_t Graph_fy277[28] = {
   0.2465711,
   0.5552103,
   0.7231265,
   0.8171208,
   0.8660329,
   0.9011603,
   0.9280893,
   0.9418695,
   0.9499956,
   0.9583715,
   0.9644398,
   0.9722389,
   0.9761295,
   0.979512,
   0.9825394,
   0.9851836,
   0.9891787,
   0.9915607,
   0.9922883,
   0.9928754,
   0.9944501,
   0.9953311,
   0.9970238,
   0.9977318,
   0.9983678,
   0.9985389,
   0.999301,
   1};
   graph = new TGraph(28,Graph_fx277,Graph_fy277);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph277 = new TH1F("Graph_Graph277","Mass-Matching Prioritized",100,0.01063744,1.088541);
   Graph_Graph277->SetMinimum(0.1712282);
   Graph_Graph277->SetMaximum(1.075343);
   Graph_Graph277->SetDirectory(0);
   Graph_Graph277->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph277->SetLineColor(ci);
   Graph_Graph277->GetXaxis()->SetLabelFont(42);
   Graph_Graph277->GetXaxis()->SetTitleOffset(1);
   Graph_Graph277->GetXaxis()->SetTitleFont(42);
   Graph_Graph277->GetYaxis()->SetLabelFont(42);
   Graph_Graph277->GetYaxis()->SetTitleFont(42);
   Graph_Graph277->GetZaxis()->SetLabelFont(42);
   Graph_Graph277->GetZaxis()->SetTitleOffset(1);
   Graph_Graph277->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph277);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx278[29] = {
   0.07577336,
   0.2148974,
   0.3135176,
   0.3967881,
   0.4704287,
   0.5323879,
   0.5839996,
   0.6339295,
   0.6770481,
   0.717337,
   0.7488526,
   0.7768806,
   0.8044563,
   0.8296144,
   0.8509189,
   0.8683402,
   0.8881418,
   0.9023568,
   0.9185372,
   0.9319161,
   0.9431029,
   0.9534926,
   0.9621148,
   0.9701111,
   0.9772705,
   0.9829243,
   0.9885563,
   0.992377,
   0.9972738};
   Double_t Graph_fy278[29] = {
   0.1415087,
   0.382789,
   0.5124544,
   0.6061569,
   0.6738887,
   0.7276707,
   0.768767,
   0.8012517,
   0.8303157,
   0.8501215,
   0.8705373,
   0.8871259,
   0.9021011,
   0.915402,
   0.9277335,
   0.9372134,
   0.9455467,
   0.9537028,
   0.9588929,
   0.9668858,
   0.9724677,
   0.9784886,
   0.9824041,
   0.9875682,
   0.9912715,
   0.9938594,
   0.9961457,
   0.9976804,
   0.999028};
   graph = new TGraph(29,Graph_fx278,Graph_fy278);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph278 = new TH1F("Graph_Graph278","Tagging Prioritized",100,0,1.089424);
   Graph_Graph278->SetMinimum(0.0557568);
   Graph_Graph278->SetMaximum(1.08478);
   Graph_Graph278->SetDirectory(0);
   Graph_Graph278->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph278->SetLineColor(ci);
   Graph_Graph278->GetXaxis()->SetLabelFont(42);
   Graph_Graph278->GetXaxis()->SetTitleOffset(1);
   Graph_Graph278->GetXaxis()->SetTitleFont(42);
   Graph_Graph278->GetYaxis()->SetLabelFont(42);
   Graph_Graph278->GetYaxis()->SetTitleFont(42);
   Graph_Graph278->GetZaxis()->SetLabelFont(42);
   Graph_Graph278->GetZaxis()->SetTitleOffset(1);
   Graph_Graph278->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph278);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.02962625, 1.044863);
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
   entry=leg->AddEntry("NULL","Intervals centered around 3.15","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_dR_HZ_17->Modified();
   ROC_dR_HZ_17->cd();
   ROC_dR_HZ_17->SetSelected(ROC_dR_HZ_17);
}
