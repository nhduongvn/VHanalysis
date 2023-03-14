#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_bckg_17_logY()
{
//=========Macro generated from canvas: CSV_jets_bckg_17/CSV_jets_bckg_17
//=========  (Wed Mar  1 14:06:39 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_bckg_17 = new TCanvas("CSV_jets_bckg_17", "CSV_jets_bckg_17",0,0,600,600);
   CSV_jets_bckg_17->SetHighLightColor(2);
   CSV_jets_bckg_17->Range(-0.2183529,4.081298,1.171633,15.45751);
   CSV_jets_bckg_17->SetFillColor(0);
   CSV_jets_bckg_17->SetFillStyle(4000);
   CSV_jets_bckg_17->SetBorderMode(0);
   CSV_jets_bckg_17->SetBorderSize(2);
   CSV_jets_bckg_17->SetLogy();
   CSV_jets_bckg_17->SetLeftMargin(0.15709);
   CSV_jets_bckg_17->SetRightMargin(0.1234783);
   CSV_jets_bckg_17->SetBottomMargin(0.12);
   CSV_jets_bckg_17->SetFrameFillStyle(1000);
   CSV_jets_bckg_17->SetFrameBorderMode(0);
   CSV_jets_bckg_17->SetFrameFillStyle(1000);
   CSV_jets_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1366505);
   st->SetMaximum(8.174009e+13);
   
   TH1F *st_stack_10 = new TH1F("st_stack_10","",20,0,1);
   st_stack_10->SetMinimum(279539.6);
   st_stack_10->SetMaximum(2.088758e+14);
   st_stack_10->SetDirectory(0);
   st_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_10->SetLineColor(ci);
   st_stack_10->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_10->GetXaxis()->SetRange(1,20);
   st_stack_10->GetXaxis()->SetLabelFont(42);
   st_stack_10->GetXaxis()->SetTitleOffset(1);
   st_stack_10->GetXaxis()->SetTitleFont(42);
   st_stack_10->GetYaxis()->SetTitle("Events/0.05");
   st_stack_10->GetYaxis()->SetLabelFont(42);
   st_stack_10->GetYaxis()->SetTitleSize(0.037);
   st_stack_10->GetYaxis()->SetTitleFont(42);
   st_stack_10->GetZaxis()->SetLabelFont(42);
   st_stack_10->GetZaxis()->SetTitleOffset(1);
   st_stack_10->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_10);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,8.173468e+11);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,4.804565e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,1.842798e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,1.027511e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,6.693262e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,4.860793e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,3.779155e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,3.040379e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,2.478614e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,2.124551e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,1.901899e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,1.693142e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,1.504148e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,1.410159e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,1.365363e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,1.403629e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,1.447598e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,1.563806e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,2.187893e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,1.351697e+10);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,1.07461e+08);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,2.592095e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,1.602847e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,1.196289e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,9645355);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,8215593);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,7234066);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,6482873);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,5845167);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,5402604);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,5105304);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,4810170);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,4526577);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,4374551);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,4303133);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,4358326);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,4423272);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,4582530);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,5413149);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,1.350563e+07);
   VbbHcc_jets_CSV_stack_1->SetEntries(6.322382e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_CSV_stack_2 = new TH1D("VbbHcc_jets_CSV_stack_2","",20,0,1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,5.413125e+07);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,5977250);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,2983924);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,2050781);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,1612054);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,1374294);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,1220009);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,1113837);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,1019487);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,996412.8);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,1011116);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,1020658);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,1002933);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,1057085);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,1141875);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,1325055);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,1515895);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,1835796);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,2872160);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,2.079105e+07);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,1945.167);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,641.2845);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,451.8791);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,373.9997);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,331.0108);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,305.1559);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,287.0661);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,273.8458);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,261.5608);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,258.1899);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,259.7383);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,260.5925);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,257.9481);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,264.5076);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,274.6027);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,295.4784);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,315.6885);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,347.1058);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,433.8224);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,1166.31);
   VbbHcc_jets_CSV_stack_2->SetEntries(1.751569e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CSV_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_CSV_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_bckg_17->Modified();
   CSV_jets_bckg_17->cd();
   CSV_jets_bckg_17->SetSelected(CSV_jets_bckg_17);
}
