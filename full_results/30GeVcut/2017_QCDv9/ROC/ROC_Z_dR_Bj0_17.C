#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj0_17()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj0_17/ROC_Z_dR_Bj0_17
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj0_17 = new TCanvas("ROC_Z_dR_Bj0_17", "ROC_Z_dR_Bj0_17",0,0,600,600);
   ROC_Z_dR_Bj0_17->SetHighLightColor(2);
   ROC_Z_dR_Bj0_17->Range(-0.2901881,-0.1615385,1.238796,1.184615);
   ROC_Z_dR_Bj0_17->SetFillColor(0);
   ROC_Z_dR_Bj0_17->SetBorderMode(0);
   ROC_Z_dR_Bj0_17->SetBorderSize(2);
   ROC_Z_dR_Bj0_17->SetGridx();
   ROC_Z_dR_Bj0_17->SetGridy();
   ROC_Z_dR_Bj0_17->SetLeftMargin(0.15709);
   ROC_Z_dR_Bj0_17->SetRightMargin(0.1234783);
   ROC_Z_dR_Bj0_17->SetBottomMargin(0.12);
   ROC_Z_dR_Bj0_17->SetFrameBorderMode(0);
   ROC_Z_dR_Bj0_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx151[30] = {
   0,
   0.04134835,
   0.208641,
   0.3695702,
   0.4923763,
   0.5827686,
   0.6559274,
   0.7112268,
   0.7550058,
   0.7939208,
   0.8295301,
   0.8565465,
   0.8811897,
   0.9042146,
   0.9266378,
   0.9431064,
   0.9596726,
   0.9710438,
   0.9796158,
   0.9863,
   0.9904233,
   0.9931127,
   0.9960364,
   0.9975154,
   0.9988997,
   0.9993499,
   0.9995709,
   0.9997588,
   0.9998521,
   0.999983};
   Double_t Graph_fy151[30] = {
   0,
   0.04533484,
   0.2175786,
   0.3984662,
   0.5522141,
   0.6596736,
   0.7351261,
   0.7909189,
   0.8301031,
   0.8630629,
   0.887741,
   0.9080065,
   0.9258528,
   0.9410413,
   0.9544925,
   0.9688042,
   0.9806978,
   0.9878776,
   0.9923659,
   0.9949682,
   0.9972796,
   0.9979005,
   0.9985785,
   0.9991344,
   0.9994073,
   0.9997373,
   0.9997576,
   0.9998452,
   0.9999226,
   1};
   TGraph *graph = new TGraph(30,Graph_fx151,Graph_fy151);
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
   
   TH1F *Graph_Graph151 = new TH1F("Graph_Graph151","Tagging Only",100,0,1.099981);
   Graph_Graph151->SetMinimum(0);
   Graph_Graph151->SetMaximum(1.1);
   Graph_Graph151->SetDirectory(0);
   Graph_Graph151->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph151->SetLineColor(ci);
   Graph_Graph151->GetXaxis()->SetLabelFont(42);
   Graph_Graph151->GetXaxis()->SetTitleOffset(1);
   Graph_Graph151->GetXaxis()->SetTitleFont(42);
   Graph_Graph151->GetYaxis()->SetLabelFont(42);
   Graph_Graph151->GetYaxis()->SetTitleFont(42);
   Graph_Graph151->GetZaxis()->SetLabelFont(42);
   Graph_Graph151->GetZaxis()->SetTitleOffset(1);
   Graph_Graph151->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph151);
   
   TLatex *   tex = new TLatex(0.3388346,0.4993349,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(152);
      tex = new TLatex(0.5576744,0.7832062,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(153);
      tex = new TLatex(0.7164016,0.8774867,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(154);
      tex = new TLatex(0.8043296,0.9569469,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(155);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx156[30] = {
   0,
   0.06112838,
   0.3388346,
   0.5576744,
   0.7164016,
   0.8043296,
   0.8649354,
   0.9135713,
   0.9393353,
   0.9580075,
   0.9722862,
   0.9787604,
   0.9824886,
   0.9882347,
   0.9929768,
   0.9945957,
   0.995194,
   0.9957411,
   0.9957712,
   0.9963841,
   0.9965877,
   0.9993093,
   0.9993185,
   0.999367,
   0.999565,
   0.9999948,
   0.9999989,
   0.9999994,
   0.9999997,
   0.9999999};
   Double_t Graph_fy156[30] = {
   0,
   0.07190278,
   0.3993349,
   0.6832062,
   0.8374867,
   0.9169469,
   0.9590403,
   0.9770648,
   0.9861957,
   0.9934551,
   0.9954689,
   0.9969793,
   0.9983947,
   0.9984896,
   0.998632,
   0.9987268,
   0.9991829,
   0.999544,
   0.9995914,
   0.9995914,
   0.9995914,
   0.9995914,
   0.9995914,
   0.9999526,
   0.9999526,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx156,Graph_fy156);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph156 = new TH1F("Graph_Graph156","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph156->SetMinimum(0);
   Graph_Graph156->SetMaximum(1.1);
   Graph_Graph156->SetDirectory(0);
   Graph_Graph156->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph156->SetLineColor(ci);
   Graph_Graph156->GetXaxis()->SetLabelFont(42);
   Graph_Graph156->GetXaxis()->SetTitleOffset(1);
   Graph_Graph156->GetXaxis()->SetTitleFont(42);
   Graph_Graph156->GetYaxis()->SetLabelFont(42);
   Graph_Graph156->GetYaxis()->SetTitleFont(42);
   Graph_Graph156->GetZaxis()->SetLabelFont(42);
   Graph_Graph156->GetZaxis()->SetTitleOffset(1);
   Graph_Graph156->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph156);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx157[30] = {
   0,
   0.04142592,
   0.2076894,
   0.3687946,
   0.4918718,
   0.5830637,
   0.6559117,
   0.7113661,
   0.7556177,
   0.7942617,
   0.8299245,
   0.856823,
   0.8816297,
   0.9043019,
   0.9265409,
   0.9430507,
   0.9595507,
   0.9707908,
   0.9792498,
   0.9861897,
   0.9903626,
   0.9930876,
   0.9960312,
   0.9974901,
   0.9988901,
   0.999359,
   0.9995775,
   0.9997622,
   0.9998543,
   0.9999829};
   Double_t Graph_fy157[30] = {
   0,
   0.04555213,
   0.218647,
   0.4006226,
   0.5540149,
   0.6622537,
   0.7375233,
   0.7925141,
   0.8317327,
   0.8643285,
   0.8888682,
   0.908915,
   0.9266466,
   0.9414984,
   0.9549349,
   0.9692768,
   0.9811139,
   0.9881861,
   0.992576,
   0.9951911,
   0.9973811,
   0.9979214,
   0.9985929,
   0.9991355,
   0.9994117,
   0.9997337,
   0.9997635,
   0.9998489,
   0.9999245,
   1};
   graph = new TGraph(30,Graph_fx157,Graph_fy157);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph157 = new TH1F("Graph_Graph157","Tagging Prioritized",100,0,1.099981);
   Graph_Graph157->SetMinimum(0);
   Graph_Graph157->SetMaximum(1.1);
   Graph_Graph157->SetDirectory(0);
   Graph_Graph157->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph157->SetLineColor(ci);
   Graph_Graph157->GetXaxis()->SetLabelFont(42);
   Graph_Graph157->GetXaxis()->SetTitleOffset(1);
   Graph_Graph157->GetXaxis()->SetTitleFont(42);
   Graph_Graph157->GetYaxis()->SetLabelFont(42);
   Graph_Graph157->GetYaxis()->SetTitleFont(42);
   Graph_Graph157->GetZaxis()->SetLabelFont(42);
   Graph_Graph157->GetZaxis()->SetTitleOffset(1);
   Graph_Graph157->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph157);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999999, 1.05);
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
   ROC_Z_dR_Bj0_17->Modified();
   ROC_Z_dR_Bj0_17->cd();
   ROC_Z_dR_Bj0_17->SetSelected(ROC_Z_dR_Bj0_17);
}
