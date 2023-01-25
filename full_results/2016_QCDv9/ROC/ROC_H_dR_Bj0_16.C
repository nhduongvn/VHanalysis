#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj0_16()
{
//=========Macro generated from canvas: ROC_H_dR_Bj0_16/ROC_H_dR_Bj0_16
//=========  (Tue Jan 24 15:01:32 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_Bj0_16 = new TCanvas("ROC_H_dR_Bj0_16", "ROC_H_dR_Bj0_16",0,0,600,600);
   ROC_H_dR_Bj0_16->SetHighLightColor(2);
   ROC_H_dR_Bj0_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_dR_Bj0_16->SetFillColor(0);
   ROC_H_dR_Bj0_16->SetBorderMode(0);
   ROC_H_dR_Bj0_16->SetBorderSize(2);
   ROC_H_dR_Bj0_16->SetGridx();
   ROC_H_dR_Bj0_16->SetGridy();
   ROC_H_dR_Bj0_16->SetLeftMargin(0.15709);
   ROC_H_dR_Bj0_16->SetRightMargin(0.1234783);
   ROC_H_dR_Bj0_16->SetBottomMargin(0.12);
   ROC_H_dR_Bj0_16->SetFrameBorderMode(0);
   ROC_H_dR_Bj0_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1943[30] = {
   0,
   0.03053624,
   0.1452388,
   0.2656428,
   0.3689899,
   0.4569858,
   0.5323899,
   0.5936758,
   0.6452001,
   0.6927097,
   0.7374405,
   0.7772224,
   0.8134266,
   0.8447937,
   0.8731381,
   0.898786,
   0.9227529,
   0.9410608,
   0.9563431,
   0.9673859,
   0.9768235,
   0.9828661,
   0.9873333,
   0.99091,
   0.9932034,
   0.9955117,
   0.9974863,
   0.9988059,
   0.9994599,
   0.9999412};
   Double_t Graph_fy1943[30] = {
   0,
   0.0312267,
   0.1498739,
   0.3017902,
   0.429481,
   0.5300452,
   0.6182868,
   0.6845432,
   0.7384567,
   0.7829678,
   0.8157358,
   0.849184,
   0.8784312,
   0.906658,
   0.927543,
   0.951909,
   0.9675326,
   0.9784352,
   0.9870172,
   0.9917182,
   0.9944588,
   0.9966393,
   0.9978196,
   0.9984997,
   0.9989398,
   0.9993999,
   0.9996399,
   0.99992,
   0.99994,
   0.99998};
   TGraph *graph = new TGraph(30,Graph_fx1943,Graph_fy1943);
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
   
   TH1F *Graph_Graph1943 = new TH1F("Graph_Graph1943","Tagging Only",100,0,1.099935);
   Graph_Graph1943->SetMinimum(0);
   Graph_Graph1943->SetMaximum(1.099978);
   Graph_Graph1943->SetDirectory(0);
   Graph_Graph1943->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1943->SetLineColor(ci);
   Graph_Graph1943->GetXaxis()->SetLabelFont(42);
   Graph_Graph1943->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1943->GetXaxis()->SetTitleFont(42);
   Graph_Graph1943->GetYaxis()->SetLabelFont(42);
   Graph_Graph1943->GetYaxis()->SetTitleFont(42);
   Graph_Graph1943->GetZaxis()->SetLabelFont(42);
   Graph_Graph1943->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1943->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1943);
   
   TLatex *   tex = new TLatex(0.1452388,0.2098739,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1944);
      tex = new TLatex(0.2656428,0.3617902,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1945);
      tex = new TLatex(0.3689899,0.489481,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1946);
      tex = new TLatex(0.4569858,0.5900452,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1947);
      tex = new TLatex(0.5323899,0.6782868,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1948);
      tex = new TLatex(0.5936758,0.7445432,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1949);
      tex = new TLatex(0.6452001,0.7984567,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1950);
      tex = new TLatex(0.6927097,0.8429678,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1951);
      tex = new TLatex(0.7374405,0.8757358,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1952);
      tex = new TLatex(0.7772224,0.909184,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1953);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx1954[30] = {
   0,
   0.09805852,
   0.3531894,
   0.5702993,
   0.684787,
   0.7775067,
   0.8322935,
   0.8702782,
   0.913009,
   0.9343269,
   0.9460443,
   0.9747382,
   0.9863029,
   0.9915122,
   0.9927824,
   0.9971262,
   0.9977513,
   0.998631,
   0.9990424,
   0.9994261,
   0.9997157,
   0.9999824,
   0.9999857,
   0.9999869,
   0.9999939,
   0.9999946,
   0.9999994,
   0.9999997,
   0.9999998,
   0.9999999};
   Double_t Graph_fy1954[30] = {
   0,
   0.0870744,
   0.3592938,
   0.6354246,
   0.8145764,
   0.8864731,
   0.936465,
   0.9620969,
   0.9771856,
   0.9887292,
   0.9912742,
   0.9937284,
   0.9968188,
   0.9978186,
   0.9988184,
   0.9995456,
   0.9998183,
   0.9999091,
   0.9999091,
   0.9999091,
   0.9999091,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx1954,Graph_fy1954);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1954 = new TH1F("Graph_Graph1954","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph1954->SetMinimum(0);
   Graph_Graph1954->SetMaximum(1.1);
   Graph_Graph1954->SetDirectory(0);
   Graph_Graph1954->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1954->SetLineColor(ci);
   Graph_Graph1954->GetXaxis()->SetLabelFont(42);
   Graph_Graph1954->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1954->GetXaxis()->SetTitleFont(42);
   Graph_Graph1954->GetYaxis()->SetLabelFont(42);
   Graph_Graph1954->GetYaxis()->SetTitleFont(42);
   Graph_Graph1954->GetZaxis()->SetLabelFont(42);
   Graph_Graph1954->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1954->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1954);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx1955[30] = {
   0,
   0.03046899,
   0.1447449,
   0.2646561,
   0.3681112,
   0.4558741,
   0.5310256,
   0.5917293,
   0.6429926,
   0.6907939,
   0.7367996,
   0.7761889,
   0.812089,
   0.8435687,
   0.8717804,
   0.8976909,
   0.9219273,
   0.9404632,
   0.955971,
   0.9672405,
   0.9766185,
   0.9829584,
   0.9874321,
   0.9910331,
   0.993291,
   0.9955709,
   0.9974968,
   0.9987898,
   0.9994348,
   0.9999356};
   Double_t Graph_fy1955[30] = {
   0,
   0.03039791,
   0.1472714,
   0.2950764,
   0.422256,
   0.5226932,
   0.6107985,
   0.6746046,
   0.7282226,
   0.7723834,
   0.8067877,
   0.84194,
   0.8723721,
   0.901408,
   0.9231142,
   0.948045,
   0.9661945,
   0.9780282,
   0.9864381,
   0.9911415,
   0.9942827,
   0.9965763,
   0.99764,
   0.9982715,
   0.99882,
   0.9992189,
   0.9995513,
   0.9999169,
   0.9999501,
   0.9999834};
   graph = new TGraph(30,Graph_fx1955,Graph_fy1955);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1955 = new TH1F("Graph_Graph1955","Tagging Prioritized",100,0,1.099929);
   Graph_Graph1955->SetMinimum(0);
   Graph_Graph1955->SetMaximum(1.099982);
   Graph_Graph1955->SetDirectory(0);
   Graph_Graph1955->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1955->SetLineColor(ci);
   Graph_Graph1955->GetXaxis()->SetLabelFont(42);
   Graph_Graph1955->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1955->GetXaxis()->SetTitleFont(42);
   Graph_Graph1955->GetYaxis()->SetLabelFont(42);
   Graph_Graph1955->GetYaxis()->SetTitleFont(42);
   Graph_Graph1955->GetZaxis()->SetLabelFont(42);
   Graph_Graph1955->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1955->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1955);
   
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
   ROC_H_dR_Bj0_16->Modified();
   ROC_H_dR_Bj0_16->cd();
   ROC_H_dR_Bj0_16->SetSelected(ROC_H_dR_Bj0_16);
}
