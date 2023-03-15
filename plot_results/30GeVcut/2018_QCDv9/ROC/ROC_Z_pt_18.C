#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_pt_18()
{
//=========Macro generated from canvas: ROC_Z_pt_18/ROC_Z_pt_18
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_pt_18 = new TCanvas("ROC_Z_pt_18", "ROC_Z_pt_18",0,0,600,600);
   ROC_Z_pt_18->SetHighLightColor(2);
   ROC_Z_pt_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_pt_18->SetFillColor(0);
   ROC_Z_pt_18->SetBorderMode(0);
   ROC_Z_pt_18->SetBorderSize(2);
   ROC_Z_pt_18->SetGridx();
   ROC_Z_pt_18->SetGridy();
   ROC_Z_pt_18->SetLeftMargin(0.15709);
   ROC_Z_pt_18->SetRightMargin(0.1234783);
   ROC_Z_pt_18->SetBottomMargin(0.12);
   ROC_Z_pt_18->SetFrameBorderMode(0);
   ROC_Z_pt_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx219[41] = {
   0,
   7.103948e-08,
   1.471261e-07,
   2.617319e-07,
   3.961676e-07,
   5.285364e-07,
   7.888311e-07,
   1.063928e-06,
   1.43774e-06,
   1.939417e-06,
   2.592142e-06,
   3.431043e-06,
   4.621796e-06,
   6.227554e-06,
   8.175923e-06,
   1.060124e-05,
   1.416317e-05,
   1.88002e-05,
   2.51677e-05,
   3.352993e-05,
   4.542745e-05,
   6.148442e-05,
   8.444161e-05,
   0.0001157631,
   0.0001602915,
   0.0002233567,
   0.0003188528,
   0.000466372,
   0.0006835622,
   0.001026477,
   0.001591544,
   0.002493602,
   0.004025667,
   0.006750975,
   0.01215798,
   0.02390661,
   0.05197135,
   0.124387,
   0.3433545,
   0.7777599,
   1};
   Double_t Graph_fy219[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   8.778763e-06,
   8.778763e-06,
   1.94797e-05,
   1.94797e-05,
   0.0003381533,
   0.0004836867,
   0.0005837519,
   0.0009435051,
   0.001055617,
   0.00172504,
   0.002533332,
   0.00562768,
   0.01078026,
   0.02406539,
   0.04475031,
   0.08294992,
   0.1527791,
   0.2827753,
   0.520683,
   0.8409916,
   1};
   TGraph *graph = new TGraph(41,Graph_fx219,Graph_fy219);
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
   
   TH1F *Graph_Graph219 = new TH1F("Graph_Graph219","Tagging Only",100,0,1.1);
   Graph_Graph219->SetMinimum(0);
   Graph_Graph219->SetMaximum(1.1);
   Graph_Graph219->SetDirectory(0);
   Graph_Graph219->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph219->SetLineColor(ci);
   Graph_Graph219->GetXaxis()->SetLabelFont(42);
   Graph_Graph219->GetXaxis()->SetTitleOffset(1);
   Graph_Graph219->GetXaxis()->SetTitleFont(42);
   Graph_Graph219->GetYaxis()->SetLabelFont(42);
   Graph_Graph219->GetYaxis()->SetTitleFont(42);
   Graph_Graph219->GetZaxis()->SetLabelFont(42);
   Graph_Graph219->GetZaxis()->SetTitleOffset(1);
   Graph_Graph219->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph219);
   
   TLatex *   tex = new TLatex(0.3541839,0.7477113,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(220);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx221[41] = {
   0,
   1.09447e-07,
   1.738185e-07,
   3.576748e-07,
   4.231058e-07,
   5.986816e-07,
   8.512585e-07,
   1.308806e-06,
   1.654843e-06,
   2.047146e-06,
   2.610023e-06,
   3.409538e-06,
   4.601682e-06,
   6.466588e-06,
   8.52534e-06,
   1.095383e-05,
   1.40359e-05,
   1.826694e-05,
   2.381394e-05,
   3.073361e-05,
   4.177843e-05,
   5.596927e-05,
   7.786342e-05,
   0.000106059,
   0.000143658,
   0.000203631,
   0.0002772799,
   0.0004009538,
   0.0005892587,
   0.0008800726,
   0.00137976,
   0.002227622,
   0.003651714,
   0.006110198,
   0.01093995,
   0.02147431,
   0.04674836,
   0.1123447,
   0.3541839,
   0.8629646,
   1};
   Double_t Graph_fy221[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.001463085,
   0.001463085,
   0.001463085,
   0.001463085,
   0.002342207,
   0.002733729,
   0.004372992,
   0.00661111,
   0.01249079,
   0.02576388,
   0.04958223,
   0.097078,
   0.177488,
   0.3420407,
   0.6477113,
   0.9377282,
   1};
   graph = new TGraph(41,Graph_fx221,Graph_fy221);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph221 = new TH1F("Graph_Graph221","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph221->SetMinimum(0);
   Graph_Graph221->SetMaximum(1.1);
   Graph_Graph221->SetDirectory(0);
   Graph_Graph221->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph221->SetLineColor(ci);
   Graph_Graph221->GetXaxis()->SetLabelFont(42);
   Graph_Graph221->GetXaxis()->SetTitleOffset(1);
   Graph_Graph221->GetXaxis()->SetTitleFont(42);
   Graph_Graph221->GetYaxis()->SetLabelFont(42);
   Graph_Graph221->GetYaxis()->SetTitleFont(42);
   Graph_Graph221->GetZaxis()->SetLabelFont(42);
   Graph_Graph221->GetZaxis()->SetTitleOffset(1);
   Graph_Graph221->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph221);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx222[41] = {
   0,
   7.406149e-08,
   1.486494e-07,
   2.665846e-07,
   4.11894e-07,
   5.537317e-07,
   8.314413e-07,
   1.1106e-06,
   1.487644e-06,
   2.001403e-06,
   2.678755e-06,
   3.526488e-06,
   4.756576e-06,
   6.396766e-06,
   8.397357e-06,
   1.090651e-05,
   1.456223e-05,
   1.93766e-05,
   2.600051e-05,
   3.458688e-05,
   4.684817e-05,
   6.343122e-05,
   8.711896e-05,
   0.0001190592,
   0.0001646796,
   0.0002293429,
   0.0003273722,
   0.0004785665,
   0.0007013593,
   0.001050118,
   0.00162347,
   0.002543966,
   0.004100774,
   0.006870353,
   0.01234092,
   0.02422741,
   0.05249504,
   0.125127,
   0.3444642,
   0.7787348,
   1};
   Double_t Graph_fy222[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   8.565344e-06,
   1.856862e-05,
   2.900942e-05,
   2.900942e-05,
   0.0004215129,
   0.0005635082,
   0.0007371113,
   0.001183423,
   0.001385457,
   0.00206989,
   0.002872613,
   0.00589763,
   0.01096264,
   0.02425962,
   0.04485364,
   0.0834447,
   0.1532746,
   0.283435,
   0.5224282,
   0.8412437,
   1};
   graph = new TGraph(41,Graph_fx222,Graph_fy222);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph222 = new TH1F("Graph_Graph222","Tagging Prioritized",100,0,1.1);
   Graph_Graph222->SetMinimum(0);
   Graph_Graph222->SetMaximum(1.1);
   Graph_Graph222->SetDirectory(0);
   Graph_Graph222->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph222->SetLineColor(ci);
   Graph_Graph222->GetXaxis()->SetLabelFont(42);
   Graph_Graph222->GetXaxis()->SetTitleOffset(1);
   Graph_Graph222->GetXaxis()->SetTitleFont(42);
   Graph_Graph222->GetYaxis()->SetLabelFont(42);
   Graph_Graph222->GetYaxis()->SetTitleFont(42);
   Graph_Graph222->GetZaxis()->SetLabelFont(42);
   Graph_Graph222->GetZaxis()->SetTitleOffset(1);
   Graph_Graph222->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph222);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_pt_18->Modified();
   ROC_Z_pt_18->cd();
   ROC_Z_pt_18->SetSelected(ROC_Z_pt_18);
}
