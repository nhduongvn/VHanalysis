#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_dR_HZ_16()
{
//=========Macro generated from canvas: ROC_dR_HZ_16/ROC_dR_HZ_16
//=========  (Sun Feb 19 15:10:33 2023) by ROOT version 6.26/06
   TCanvas *ROC_dR_HZ_16 = new TCanvas("ROC_dR_HZ_16", "ROC_dR_HZ_16",0,0,600,600);
   ROC_dR_HZ_16->SetHighLightColor(2);
   ROC_dR_HZ_16->Range(-0.1668849,-0.01243448,1.211884,1.158625);
   ROC_dR_HZ_16->SetFillColor(0);
   ROC_dR_HZ_16->SetBorderMode(0);
   ROC_dR_HZ_16->SetBorderSize(2);
   ROC_dR_HZ_16->SetGridx();
   ROC_dR_HZ_16->SetGridy();
   ROC_dR_HZ_16->SetLeftMargin(0.15709);
   ROC_dR_HZ_16->SetRightMargin(0.1234783);
   ROC_dR_HZ_16->SetBottomMargin(0.12);
   ROC_dR_HZ_16->SetFrameBorderMode(0);
   ROC_dR_HZ_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx774[28] = {
   0.09520873,
   0.244571,
   0.3656225,
   0.4569891,
   0.5339825,
   0.5941535,
   0.6503726,
   0.6915379,
   0.7306079,
   0.7630576,
   0.7910495,
   0.8134482,
   0.8378821,
   0.8579849,
   0.8759396,
   0.8917793,
   0.9066872,
   0.9191918,
   0.9294904,
   0.9389387,
   0.9531034,
   0.9604492,
   0.9727404,
   0.9787501,
   0.9834257,
   0.9880175,
   0.9923979,
   0.9950487};
   Double_t Graph_fy774[28] = {
   0.1713072,
   0.3766815,
   0.5077052,
   0.5977374,
   0.6614045,
   0.7099206,
   0.7493136,
   0.7844896,
   0.8155085,
   0.8393802,
   0.8601938,
   0.8798816,
   0.8913986,
   0.9024112,
   0.9130105,
   0.9275083,
   0.9404869,
   0.9471779,
   0.9564857,
   0.9627269,
   0.9696918,
   0.9729093,
   0.9792849,
   0.9840575,
   0.9883998,
   0.9907611,
   0.9915289,
   0.9947779};
   TGraph *graph = new TGraph(28,Graph_fx774,Graph_fy774);
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
   
   TH1F *Graph_Graph774 = new TH1F("Graph_Graph774","Tagging Only",100,0.005224737,1.085033);
   Graph_Graph774->SetMinimum(0.08896008);
   Graph_Graph774->SetMaximum(1.077125);
   Graph_Graph774->SetDirectory(0);
   Graph_Graph774->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph774->SetLineColor(ci);
   Graph_Graph774->GetXaxis()->SetLabelFont(42);
   Graph_Graph774->GetXaxis()->SetTitleOffset(1);
   Graph_Graph774->GetXaxis()->SetTitleFont(42);
   Graph_Graph774->GetYaxis()->SetLabelFont(42);
   Graph_Graph774->GetYaxis()->SetTitleFont(42);
   Graph_Graph774->GetZaxis()->SetLabelFont(42);
   Graph_Graph774->GetZaxis()->SetTitleOffset(1);
   Graph_Graph774->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph774);
   
   TLatex *   tex = new TLatex(0.25142,0.6900856,"#pm0.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(775);
      tex = new TLatex(0.3660905,0.8701795,"#pm0.2");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(776);
      tex = new TLatex(0.4645084,0.8961028,"#pm0.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(777);
      tex = new TLatex(0.560653,0.9477866,"#pm0.4");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(778);
      tex = new TLatex(0.6154609,0.9724059,"#pm0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(779);
      tex = new TLatex(0.6686821,0.99341,"#pm0.6");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(780);
      tex = new TLatex(0.7141697,1.00561,"#pm0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(781);
      tex = new TLatex(0.745569,1.018591,"#pm0.8");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(782);
      tex = new TLatex(0.7793012,1.020838,"#pm0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(783);
      tex = new TLatex(0.8124857,1.022994,"#pm1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(784);
      tex = new TLatex(0.8377205,1.025945,"#pm1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(785);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx786[28] = {
   0.1096559,
   0.25142,
   0.3660905,
   0.4645084,
   0.560653,
   0.6154609,
   0.6686821,
   0.7141697,
   0.745569,
   0.7793012,
   0.8124857,
   0.8377205,
   0.8568247,
   0.8763886,
   0.8896582,
   0.905493,
   0.9195768,
   0.9284579,
   0.9335751,
   0.9415657,
   0.9498162,
   0.9551574,
   0.9847381,
   0.9866165,
   0.9886365,
   0.9918805,
   0.9953809,
   0.9965485};
   Double_t Graph_fy786[28] = {
   0.2887797,
   0.5900856,
   0.7701795,
   0.8561028,
   0.9077866,
   0.9324059,
   0.95341,
   0.96561,
   0.9785907,
   0.980838,
   0.9829939,
   0.9859452,
   0.9897929,
   0.9909147,
   0.9915259,
   0.994626,
   0.9960512,
   0.9960512,
   0.9987924,
   0.9991236,
   0.999718,
   0.999718,
   0.999718,
   0.999718,
   0.999718,
   0.999718,
   1,
   1};
   graph = new TGraph(28,Graph_fx786,Graph_fy786);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph786 = new TH1F("Graph_Graph786","Mass-Matching Prioritized",100,0.02096668,1.085238);
   Graph_Graph786->SetMinimum(0.2176577);
   Graph_Graph786->SetMaximum(1.071122);
   Graph_Graph786->SetDirectory(0);
   Graph_Graph786->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph786->SetLineColor(ci);
   Graph_Graph786->GetXaxis()->SetLabelFont(42);
   Graph_Graph786->GetXaxis()->SetTitleOffset(1);
   Graph_Graph786->GetXaxis()->SetTitleFont(42);
   Graph_Graph786->GetYaxis()->SetLabelFont(42);
   Graph_Graph786->GetYaxis()->SetTitleFont(42);
   Graph_Graph786->GetZaxis()->SetLabelFont(42);
   Graph_Graph786->GetZaxis()->SetTitleOffset(1);
   Graph_Graph786->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph786);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx787[28] = {
   0.0947937,
   0.2434572,
   0.3637823,
   0.4551216,
   0.5316012,
   0.5920932,
   0.6487202,
   0.6898299,
   0.728667,
   0.7612938,
   0.789374,
   0.812349,
   0.8373846,
   0.8578584,
   0.8757837,
   0.8915671,
   0.9065556,
   0.9190423,
   0.929315,
   0.9387718,
   0.9528816,
   0.9602899,
   0.9725208,
   0.9785171,
   0.9832203,
   0.9878595,
   0.9923274,
   0.9949887};
   Double_t Graph_fy787[28] = {
   0.1696121,
   0.3767109,
   0.5069087,
   0.5964175,
   0.6600224,
   0.7084698,
   0.7485851,
   0.7852833,
   0.8150197,
   0.8397241,
   0.8602348,
   0.8802716,
   0.8923118,
   0.9027172,
   0.9135228,
   0.9271189,
   0.9400655,
   0.947239,
   0.9562418,
   0.9623059,
   0.9691965,
   0.9728776,
   0.9791365,
   0.9842823,
   0.9890556,
   0.9913737,
   0.9921275,
   0.9953169};
   graph = new TGraph(28,Graph_fx787,Graph_fy787);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph787 = new TH1F("Graph_Graph787","Tagging Prioritized",100,0.004774196,1.085008);
   Graph_Graph787->SetMinimum(0.08704161);
   Graph_Graph787->SetMaximum(1.077887);
   Graph_Graph787->SetDirectory(0);
   Graph_Graph787->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph787->SetLineColor(ci);
   Graph_Graph787->GetXaxis()->SetLabelFont(42);
   Graph_Graph787->GetXaxis()->SetTitleOffset(1);
   Graph_Graph787->GetXaxis()->SetTitleFont(42);
   Graph_Graph787->GetYaxis()->SetLabelFont(42);
   Graph_Graph787->GetYaxis()->SetTitleFont(42);
   Graph_Graph787->GetZaxis()->SetLabelFont(42);
   Graph_Graph787->GetZaxis()->SetTitleOffset(1);
   Graph_Graph787->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph787);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.04970596, 1.041636);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_dR_HZ_16->Modified();
   ROC_dR_HZ_16->cd();
   ROC_dR_HZ_16->SetSelected(ROC_dR_HZ_16);
}
