#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_pt_16()
{
//=========Macro generated from canvas: ROC_Z_pt_16/ROC_Z_pt_16
//=========  (Wed Mar  1 15:31:59 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_pt_16 = new TCanvas("ROC_Z_pt_16", "ROC_Z_pt_16",0,0,600,600);
   ROC_Z_pt_16->SetHighLightColor(2);
   ROC_Z_pt_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_pt_16->SetFillColor(0);
   ROC_Z_pt_16->SetBorderMode(0);
   ROC_Z_pt_16->SetBorderSize(2);
   ROC_Z_pt_16->SetGridx();
   ROC_Z_pt_16->SetGridy();
   ROC_Z_pt_16->SetLeftMargin(0.15709);
   ROC_Z_pt_16->SetRightMargin(0.1234783);
   ROC_Z_pt_16->SetBottomMargin(0.12);
   ROC_Z_pt_16->SetFrameBorderMode(0);
   ROC_Z_pt_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx220[41] = {
   0,
   3.513985e-07,
   7.211285e-07,
   1.314941e-06,
   2.028244e-06,
   2.595725e-06,
   3.813056e-06,
   5.144074e-06,
   7.035198e-06,
   9.349832e-06,
   1.248244e-05,
   1.657046e-05,
   2.333755e-05,
   3.095164e-05,
   4.00451e-05,
   5.277781e-05,
   7.067829e-05,
   9.417834e-05,
   0.0001270023,
   0.0001679892,
   0.0002266303,
   0.0003038712,
   0.0004134108,
   0.0005649732,
   0.0007744767,
   0.001070888,
   0.001484082,
   0.002087736,
   0.002942282,
   0.004219706,
   0.00629344,
   0.009629192,
   0.01517624,
   0.02497697,
   0.04339097,
   0.07800653,
   0.1513505,
   0.309068,
   0.6238254,
   0.8627426,
   1};
   Double_t Graph_fy220[41] = {
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
   7.082937e-05,
   7.082937e-05,
   0.0001419829,
   0.0001419829,
   0.0002616898,
   0.0002616898,
   0.0003299843,
   0.0003869914,
   0.0005261868,
   0.0006038684,
   0.001704629,
   0.003547353,
   0.008682404,
   0.01210087,
   0.0197053,
   0.04376388,
   0.08425821,
   0.159665,
   0.2803017,
   0.4757137,
   0.7326168,
   0.9113901,
   1};
   TGraph *graph = new TGraph(41,Graph_fx220,Graph_fy220);
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
   
   TH1F *Graph_Graph220 = new TH1F("Graph_Graph220","Tagging Only",100,0,1.1);
   Graph_Graph220->SetMinimum(0);
   Graph_Graph220->SetMaximum(1.1);
   Graph_Graph220->SetDirectory(0);
   Graph_Graph220->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph220->SetLineColor(ci);
   Graph_Graph220->GetXaxis()->SetLabelFont(42);
   Graph_Graph220->GetXaxis()->SetTitleOffset(1);
   Graph_Graph220->GetXaxis()->SetTitleFont(42);
   Graph_Graph220->GetYaxis()->SetLabelFont(42);
   Graph_Graph220->GetYaxis()->SetTitleFont(42);
   Graph_Graph220->GetZaxis()->SetLabelFont(42);
   Graph_Graph220->GetZaxis()->SetTitleOffset(1);
   Graph_Graph220->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph220);
   
   TLatex *   tex = new TLatex(0.1563367,0.4059984,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(221);
      tex = new TLatex(0.3316612,0.6234755,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(222);
      tex = new TLatex(0.6870248,0.9057133,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(223);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx224[41] = {
   0,
   4.856046e-07,
   9.694659e-07,
   1.622862e-06,
   2.138638e-06,
   3.306023e-06,
   4.297772e-06,
   6.306552e-06,
   8.054408e-06,
   1.069412e-05,
   1.332045e-05,
   1.784005e-05,
   2.470746e-05,
   3.495564e-05,
   4.511492e-05,
   5.858533e-05,
   7.632933e-05,
   0.0001010669,
   0.0001312045,
   0.000167517,
   0.0002268803,
   0.0003043601,
   0.0004221061,
   0.0005667699,
   0.0007673687,
   0.00109063,
   0.001459519,
   0.00199228,
   0.002797313,
   0.003994004,
   0.00594394,
   0.009246513,
   0.01492792,
   0.02439112,
   0.04282512,
   0.07747915,
   0.1563367,
   0.3316612,
   0.6870248,
   0.9104612,
   1};
   Double_t Graph_fy224[41] = {
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
   0,
   0,
   0,
   0,
   0.002349115,
   0.002639945,
   0.007071612,
   0.009995414,
   0.02187961,
   0.0511566,
   0.09362767,
   0.1655888,
   0.3059984,
   0.5234755,
   0.8657133,
   0.98483,
   1};
   graph = new TGraph(41,Graph_fx224,Graph_fy224);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph224 = new TH1F("Graph_Graph224","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph224->SetMinimum(0);
   Graph_Graph224->SetMaximum(1.1);
   Graph_Graph224->SetDirectory(0);
   Graph_Graph224->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph224->SetLineColor(ci);
   Graph_Graph224->GetXaxis()->SetLabelFont(42);
   Graph_Graph224->GetXaxis()->SetTitleOffset(1);
   Graph_Graph224->GetXaxis()->SetTitleFont(42);
   Graph_Graph224->GetYaxis()->SetLabelFont(42);
   Graph_Graph224->GetYaxis()->SetTitleFont(42);
   Graph_Graph224->GetZaxis()->SetLabelFont(42);
   Graph_Graph224->GetZaxis()->SetTitleOffset(1);
   Graph_Graph224->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph224);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx225[41] = {
   0,
   3.448806e-07,
   7.077526e-07,
   1.290551e-06,
   1.99972e-06,
   2.567505e-06,
   3.936713e-06,
   5.302297e-06,
   7.170296e-06,
   9.493116e-06,
   1.271988e-05,
   1.684477e-05,
   2.375949e-05,
   3.153723e-05,
   4.093314e-05,
   5.409178e-05,
   7.233844e-05,
   9.661304e-05,
   0.000130548,
   0.000172609,
   0.0002329554,
   0.0003125708,
   0.0004250786,
   0.0005793708,
   0.0007940776,
   0.001096833,
   0.00151957,
   0.0021377,
   0.003006383,
   0.004300356,
   0.006399986,
   0.009776508,
   0.01536405,
   0.02524485,
   0.04379298,
   0.07860686,
   0.1519908,
   0.3099853,
   0.6241006,
   0.8624285,
   1};
   Double_t Graph_fy225[41] = {
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
   6.953318e-05,
   6.953318e-05,
   0.0001393846,
   0.0001393846,
   0.0002569009,
   0.0002569009,
   0.0003239455,
   0.0003799094,
   0.0005165575,
   0.0005928176,
   0.001673434,
   0.003482436,
   0.009086929,
   0.01192478,
   0.01953768,
   0.04344136,
   0.08425681,
   0.1596035,
   0.281365,
   0.4755419,
   0.7351493,
   0.9136876,
   1};
   graph = new TGraph(41,Graph_fx225,Graph_fy225);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph225 = new TH1F("Graph_Graph225","Tagging Prioritized",100,0,1.1);
   Graph_Graph225->SetMinimum(0);
   Graph_Graph225->SetMaximum(1.1);
   Graph_Graph225->SetDirectory(0);
   Graph_Graph225->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph225->SetLineColor(ci);
   Graph_Graph225->GetXaxis()->SetLabelFont(42);
   Graph_Graph225->GetXaxis()->SetTitleOffset(1);
   Graph_Graph225->GetXaxis()->SetTitleFont(42);
   Graph_Graph225->GetYaxis()->SetLabelFont(42);
   Graph_Graph225->GetYaxis()->SetTitleFont(42);
   Graph_Graph225->GetZaxis()->SetLabelFont(42);
   Graph_Graph225->GetZaxis()->SetTitleOffset(1);
   Graph_Graph225->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph225);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_pt_16->Modified();
   ROC_Z_pt_16->cd();
   ROC_Z_pt_16->SetSelected(ROC_Z_pt_16);
}
