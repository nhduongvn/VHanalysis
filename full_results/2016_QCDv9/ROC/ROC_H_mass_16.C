#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_16()
{
//=========Macro generated from canvas: ROC_H_mass_16/ROC_H_mass_16
//=========  (Tue Jan 24 15:01:26 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_16 = new TCanvas("ROC_H_mass_16", "ROC_H_mass_16",0,0,600,600);
   ROC_H_mass_16->SetHighLightColor(2);
   ROC_H_mass_16->Range(-0.2896371,-0.1612033,1.236444,1.182158);
   ROC_H_mass_16->SetFillColor(0);
   ROC_H_mass_16->SetBorderMode(0);
   ROC_H_mass_16->SetBorderSize(2);
   ROC_H_mass_16->SetGridx();
   ROC_H_mass_16->SetGridy();
   ROC_H_mass_16->SetLeftMargin(0.15709);
   ROC_H_mass_16->SetRightMargin(0.1234783);
   ROC_H_mass_16->SetBottomMargin(0.12);
   ROC_H_mass_16->SetFrameBorderMode(0);
   ROC_H_mass_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx58[40] = {
   0,
   0,
   0.0009512491,
   0.02359191,
   0.07000137,
   0.1143072,
   0.1593091,
   0.2098038,
   0.2820694,
   0.3523014,
   0.4150971,
   0.4721517,
   0.5306691,
   0.5784772,
   0.6236824,
   0.6601543,
   0.6974771,
   0.7287376,
   0.7572122,
   0.7788747,
   0.8027983,
   0.8224539,
   0.8423971,
   0.859328,
   0.8747475,
   0.8882226,
   0.900122,
   0.9122441,
   0.9239344,
   0.9336423,
   0.9429136,
   0.9521015,
   0.9595083,
   0.9676858,
   0.9739138,
   0.9791859,
   0.9833759,
   0.9872327,
   0.9919958,
   0.9958653};
   Double_t Graph_fy58[40] = {
   0,
   0,
   7.443006e-05,
   0.003545114,
   0.01444469,
   0.03145396,
   0.05366514,
   0.08246005,
   0.1227965,
   0.1774724,
   0.2536679,
   0.353235,
   0.4742686,
   0.600386,
   0.6843807,
   0.7272276,
   0.7605717,
   0.7831822,
   0.8065626,
   0.8267093,
   0.8427693,
   0.8599554,
   0.8755759,
   0.8895544,
   0.9003699,
   0.9109489,
   0.9212277,
   0.931558,
   0.9399136,
   0.947256,
   0.9547447,
   0.9602576,
   0.9653388,
   0.9714834,
   0.9766347,
   0.9821983,
   0.9864459,
   0.9900762,
   0.9938946,
   0.9971422};
   TGraph *graph = new TGraph(40,Graph_fx58,Graph_fy58);
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
   
   TH1F *Graph_Graph58 = new TH1F("Graph_Graph58","Tagging Only",100,0,1.095452);
   Graph_Graph58->SetMinimum(0);
   Graph_Graph58->SetMaximum(1.096856);
   Graph_Graph58->SetDirectory(0);
   Graph_Graph58->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph58->SetLineColor(ci);
   Graph_Graph58->GetXaxis()->SetLabelFont(42);
   Graph_Graph58->GetXaxis()->SetTitleOffset(1);
   Graph_Graph58->GetXaxis()->SetTitleFont(42);
   Graph_Graph58->GetYaxis()->SetLabelFont(42);
   Graph_Graph58->GetYaxis()->SetTitleFont(42);
   Graph_Graph58->GetZaxis()->SetLabelFont(42);
   Graph_Graph58->GetZaxis()->SetTitleOffset(1);
   Graph_Graph58->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph58);
   
   TLatex *   tex = new TLatex(0.07000137,0.07444469,"45.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(59);
      tex = new TLatex(0.1143072,0.09145396,"55.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(60);
      tex = new TLatex(0.1593091,0.1136651,"65.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(61);
      tex = new TLatex(0.2098038,0.1424601,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(62);
      tex = new TLatex(0.2820694,0.1827965,"85.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(63);
      tex = new TLatex(0.3523014,0.2374724,"95.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(64);
      tex = new TLatex(0.4150971,0.3136679,"105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(65);
      tex = new TLatex(0.4721517,0.413235,"115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(66);
      tex = new TLatex(0.5306691,0.5342686,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(67);
      tex = new TLatex(0.5784772,0.660386,"135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(68);
      tex = new TLatex(0.6236824,0.7443807,"145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(69);
      tex = new TLatex(0.6601543,0.7872276,"155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(70);
      tex = new TLatex(0.6974771,0.8205717,"165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(71);
      tex = new TLatex(0.7287376,0.8431822,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(72);
      tex = new TLatex(0.7572122,0.8665626,"185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(73);
      tex = new TLatex(0.7788747,0.8867093,"195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(74);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx75[40] = {
   0,
   0,
   3.210036e-08,
   0.01177685,
   0.05965386,
   0.1147946,
   0.187691,
   0.2427428,
   0.2960653,
   0.3381471,
   0.4066848,
   0.4630989,
   0.5300328,
   0.5809834,
   0.6241037,
   0.6638519,
   0.7164421,
   0.7655163,
   0.7963017,
   0.8167346,
   0.8499544,
   0.8694755,
   0.8941005,
   0.9103738,
   0.9205949,
   0.9303784,
   0.9392572,
   0.949467,
   0.9552918,
   0.961177,
   0.9689663,
   0.9731587,
   0.9799198,
   0.9840504,
   0.9867132,
   0.9890741,
   0.9914615,
   0.9937414,
   0.9959355,
   0.998101};
   Double_t Graph_fy75[40] = {
   0,
   0,
   0,
   0,
   0.004435684,
   0.009717714,
   0.02194606,
   0.04070879,
   0.07027537,
   0.1008293,
   0.1748315,
   0.2981225,
   0.4813253,
   0.6645362,
   0.8066311,
   0.8495921,
   0.8781697,
   0.8977472,
   0.9106184,
   0.9240143,
   0.9327195,
   0.9427361,
   0.9476003,
   0.9534277,
   0.9594835,
   0.9645874,
   0.9691499,
   0.9726759,
   0.9754635,
   0.9780236,
   0.9812359,
   0.9847738,
   0.9863524,
   0.9885079,
   0.9913694,
   0.993379,
   0.9938691,
   0.9961639,
   0.9976368,
   0.9979253};
   graph = new TGraph(40,Graph_fx75,Graph_fy75);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph75 = new TH1F("Graph_Graph75","Mass-Matching Prioritized",100,0,1.097911);
   Graph_Graph75->SetMinimum(0);
   Graph_Graph75->SetMaximum(1.097718);
   Graph_Graph75->SetDirectory(0);
   Graph_Graph75->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph75->SetLineColor(ci);
   Graph_Graph75->GetXaxis()->SetLabelFont(42);
   Graph_Graph75->GetXaxis()->SetTitleOffset(1);
   Graph_Graph75->GetXaxis()->SetTitleFont(42);
   Graph_Graph75->GetYaxis()->SetLabelFont(42);
   Graph_Graph75->GetYaxis()->SetTitleFont(42);
   Graph_Graph75->GetZaxis()->SetLabelFont(42);
   Graph_Graph75->GetZaxis()->SetTitleOffset(1);
   Graph_Graph75->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph75);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx76[40] = {
   0,
   0,
   0.0009607432,
   0.02326944,
   0.06916166,
   0.1129328,
   0.1577129,
   0.2078129,
   0.2801162,
   0.350803,
   0.4136363,
   0.4714924,
   0.5301003,
   0.5783357,
   0.6238031,
   0.6601644,
   0.6971848,
   0.7286696,
   0.7574619,
   0.7790866,
   0.8036236,
   0.8232157,
   0.842978,
   0.8598279,
   0.8752141,
   0.8882981,
   0.9001919,
   0.9123761,
   0.9239916,
   0.9337214,
   0.9429252,
   0.9520628,
   0.9594856,
   0.9676405,
   0.973816,
   0.979149,
   0.9833694,
   0.9872369,
   0.9919609,
   0.9958713};
   Double_t Graph_fy76[40] = {
   0,
   0,
   0.0002336057,
   0.003700968,
   0.01438326,
   0.0301056,
   0.05376097,
   0.08200878,
   0.1211642,
   0.1773444,
   0.2496853,
   0.3464595,
   0.4601473,
   0.5785751,
   0.6585038,
   0.7010773,
   0.735822,
   0.762207,
   0.7878346,
   0.8101652,
   0.829137,
   0.8463087,
   0.8618931,
   0.8776799,
   0.8909041,
   0.9020781,
   0.9135825,
   0.9244736,
   0.9344557,
   0.942017,
   0.9498621,
   0.9558768,
   0.9622868,
   0.9687568,
   0.9745993,
   0.9804533,
   0.9855862,
   0.9894137,
   0.9932803,
   0.9969344};
   graph = new TGraph(40,Graph_fx76,Graph_fy76);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph76 = new TH1F("Graph_Graph76","Tagging Prioritized",100,0,1.095458);
   Graph_Graph76->SetMinimum(0);
   Graph_Graph76->SetMaximum(1.096628);
   Graph_Graph76->SetDirectory(0);
   Graph_Graph76->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph76->SetLineColor(ci);
   Graph_Graph76->GetXaxis()->SetLabelFont(42);
   Graph_Graph76->GetXaxis()->SetTitleOffset(1);
   Graph_Graph76->GetXaxis()->SetTitleFont(42);
   Graph_Graph76->GetYaxis()->SetLabelFont(42);
   Graph_Graph76->GetYaxis()->SetTitleFont(42);
   Graph_Graph76->GetZaxis()->SetLabelFont(42);
   Graph_Graph76->GetZaxis()->SetTitleOffset(1);
   Graph_Graph76->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph76);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04990505, 1.048006);
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
   ROC_H_mass_16->Modified();
   ROC_H_mass_16->cd();
   ROC_H_mass_16->SetSelected(ROC_H_mass_16);
}
