#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_17()
{
//=========Macro generated from canvas: H_dR_tags_17/H_dR_tags_17
//=========  (Thu Mar  9 13:18:49 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_17 = new TCanvas("H_dR_tags_17", "H_dR_tags_17",0,0,600,600);
   H_dR_tags_17->SetHighLightColor(2);
   H_dR_tags_17->Range(-1.353788,-153652,7.264125,1126781);
   H_dR_tags_17->SetFillColor(0);
   H_dR_tags_17->SetFillStyle(4000);
   H_dR_tags_17->SetBorderMode(0);
   H_dR_tags_17->SetBorderSize(2);
   H_dR_tags_17->SetLeftMargin(0.15709);
   H_dR_tags_17->SetRightMargin(0.1234783);
   H_dR_tags_17->SetBottomMargin(0.12);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(998737.9);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",30,0,6);
   st_stack_22->SetMinimum(0);
   st_stack_22->SetMaximum(998737.9);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_22->GetXaxis()->SetRange(1,31);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetTitleOffset(1);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Event/0.2");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetTitleSize(0.037);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetTitleOffset(1);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,773.9061);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,364114.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,349969.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,325140.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,297577.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,294228.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,316880.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,343819);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,376726.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,456777.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,399487);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,456663.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,568294);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,623664.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,720518.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,434781.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,342283.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,258383.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,190321.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,174269.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,107876.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,87993.81);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,72802.43);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,37903.31);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,15229.58);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,5100.963);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,1563.246);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,12.47485);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,472.0352);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,21588.67);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,12563.64);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,20878.65);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,21683.25);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,24234.18);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,23978.34);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,30062.58);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,28761.17);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,35936.17);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,21241.55);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,16121.33);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,36828.29);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,27308.19);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,40514.76);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,22785.95);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,26812.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,17612.74);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,9213.625);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,22979.47);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,7053.487);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,12447.43);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,21132.89);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,16725.53);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,1964.937);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,1291.877);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,540.7823);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,8.617644);
   VbbHcc_tags_H_dR_stack_1->SetEntries(268271);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,21.72887);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,26327.91);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,46913.36);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,55281.35);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,59501.1);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,57343.29);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,53754.45);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,52734.43);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,55509.65);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,61878.48);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,71045.25);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,82102.56);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,94232.3);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,106416.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,108433.8);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,61701.51);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,38572.94);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,25380.96);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,16796.25);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,11042.65);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,7022.931);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,4390.14);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,2572.103);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,1357.502);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,637.4844);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,252.8794);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,62.19059);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,4.707352);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,1.257695);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,44.33435);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,59.1454);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,64.13043);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,66.49017);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,65.29955);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,63.30239);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,62.79444);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,64.54346);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,68.26144);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,73.24286);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,78.84816);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,84.62204);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,90.02654);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,90.93386);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,68.34781);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,53.80554);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,43.41721);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,35.10797);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,28.28265);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,22.40992);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,17.57388);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,13.36057);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,9.611128);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,6.551337);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,4.058199);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,1.973482);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.5247447);
   VbbHcc_tags_H_dR_stack_2->SetEntries(1.634337e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_17->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->SetSelected(H_dR_tags_17);
}
