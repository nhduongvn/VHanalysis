#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_bckg_17()
{
//=========Macro generated from canvas: CSV_jets_bckg_17/CSV_jets_bckg_17
//=========  (Fri Mar 10 12:13:58 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_bckg_17 = new TCanvas("CSV_jets_bckg_17", "CSV_jets_bckg_17",0,0,600,600);
   CSV_jets_bckg_17->SetHighLightColor(2);
   CSV_jets_bckg_17->Range(-0.2183529,-1.515107e+11,1.171633,1.111079e+12);
   CSV_jets_bckg_17->SetFillColor(0);
   CSV_jets_bckg_17->SetFillStyle(4000);
   CSV_jets_bckg_17->SetBorderMode(0);
   CSV_jets_bckg_17->SetBorderSize(2);
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
   st->SetMaximum(9.848196e+11);
   
   TH1F *st_stack_10 = new TH1F("st_stack_10","",20,0,1);
   st_stack_10->SetMinimum(0);
   st_stack_10->SetMaximum(9.848196e+11);
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
   st_stack_10->GetYaxis()->SetTitle("Event/0.05");
   st_stack_10->GetYaxis()->SetLabelFont(42);
   st_stack_10->GetYaxis()->SetTitleSize(0.037);
   st_stack_10->GetYaxis()->SetTitleFont(42);
   st_stack_10->GetZaxis()->SetLabelFont(42);
   st_stack_10->GetZaxis()->SetTitleOffset(1);
   st_stack_10->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_10);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,8.173462e+11);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,4.804597e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,1.842777e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,1.027535e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,6.693189e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,4.860524e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,3.77904e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,3.040276e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,2.478356e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,2.124627e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,1.901863e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,1.692967e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,1.504166e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,1.410109e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,1.365272e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,1.40378e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,1.447544e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,1.563798e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,2.187642e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,1.351685e+10);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,1.074976e+08);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,2.59301e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,1.603408e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,1.196719e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,9648734);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,8218421);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,7236743);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,6485257);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,5847176);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,5404642);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,5107257);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,4812091);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,4528319);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,4376273);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,4304677);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,4360237);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,4425117);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,4584485);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,5415276);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,1.351095e+07);
   VbbHcc_jets_CSV_stack_1->SetEntries(6.274349e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CSV_stack_1->SetFillColor(ci);
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
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,5.413136e+07);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,5977260);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,2983971);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,2050803);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,1612064);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,1374281);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,1220031);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,1113833);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,1019483);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,996399.4);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,1011102);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,1020675);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,1002928);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,1057093);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,1141897);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,1325030);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,1515874);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,1835800);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,2872116);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,2.079099e+07);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,1949.102);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,642.5667);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,452.7822);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,374.7456);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,331.667);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,305.7577);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,287.6339);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,274.3833);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,262.0727);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,258.6929);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,260.2426);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,261.1012);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,258.4488);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,265.0212);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,275.1369);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,296.0453);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,316.2953);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,347.7751);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,434.6542);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,1168.549);
   VbbHcc_jets_CSV_stack_2->SetEntries(1.745238e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CSV_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_bckg_17->Modified();
   CSV_jets_bckg_17->cd();
   CSV_jets_bckg_17->SetSelected(CSV_jets_bckg_17);
}
