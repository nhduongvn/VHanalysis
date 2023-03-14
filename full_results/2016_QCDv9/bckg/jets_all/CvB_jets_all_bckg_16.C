#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all_bckg_16()
{
//=========Macro generated from canvas: CvB_jets_all_bckg_16/CvB_jets_all_bckg_16
//=========  (Thu Mar  9 13:30:52 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_all_bckg_16 = new TCanvas("CvB_jets_all_bckg_16", "CvB_jets_all_bckg_16",0,0,600,600);
   CvB_jets_all_bckg_16->SetHighLightColor(2);
   CvB_jets_all_bckg_16->Range(-0.2183529,-1.468532e+11,1.171633,1.076923e+12);
   CvB_jets_all_bckg_16->SetFillColor(0);
   CvB_jets_all_bckg_16->SetFillStyle(4000);
   CvB_jets_all_bckg_16->SetBorderMode(0);
   CvB_jets_all_bckg_16->SetBorderSize(2);
   CvB_jets_all_bckg_16->SetLeftMargin(0.15709);
   CvB_jets_all_bckg_16->SetRightMargin(0.1234783);
   CvB_jets_all_bckg_16->SetBottomMargin(0.12);
   CvB_jets_all_bckg_16->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_16->SetFrameBorderMode(0);
   CvB_jets_all_bckg_16->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.545457e+11);
   
   TH1F *st_stack_176 = new TH1F("st_stack_176","",20,0,1);
   st_stack_176->SetMinimum(0);
   st_stack_176->SetMaximum(9.545457e+11);
   st_stack_176->SetDirectory(0);
   st_stack_176->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_176->SetLineColor(ci);
   st_stack_176->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_176->GetXaxis()->SetRange(1,20);
   st_stack_176->GetXaxis()->SetLabelFont(42);
   st_stack_176->GetXaxis()->SetTitleOffset(1);
   st_stack_176->GetXaxis()->SetTitleFont(42);
   st_stack_176->GetYaxis()->SetTitle("Event/0.05");
   st_stack_176->GetYaxis()->SetLabelFont(42);
   st_stack_176->GetYaxis()->SetTitleSize(0.037);
   st_stack_176->GetYaxis()->SetTitleFont(42);
   st_stack_176->GetZaxis()->SetLabelFont(42);
   st_stack_176->GetZaxis()->SetTitleOffset(1);
   st_stack_176->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_176);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,2.45472e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,7.527948e+09);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,6.787002e+09);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,8.094341e+09);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,1.120257e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,1.657476e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,2.505916e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,3.822817e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,5.959035e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,1.051519e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,2.220788e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,7.3041e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,7.922488e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,5.366926e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,5.131231e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,5.490074e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,6.249512e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,5.991519e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,2.581693e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,1.517831e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,2.18993e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,1.224696e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,1.166461e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,1.277285e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,1.506403e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,1.835601e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,2.259821e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,2.793378e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,3.487534e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,4.632538e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,6.74342e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,1.225862e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,1.27554e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,1.049764e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,1.026686e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,1.060199e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,1.12798e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,1.091137e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,7.108295e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,1.640782e+07);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(1.401422e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvB_stack_2 = new TH1D("VbbHcc_jets_all_CvB_stack_2","",20,0,1);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,1.987952e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,3917661);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,2720099);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,2532488);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,2583990);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,2611036);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,2812186);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,3358399);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,4275585);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,5608483);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,8874360);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,2.180461e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,2.408229e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,1.885714e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,1.940509e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,2.10523e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,2.391803e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,2.449773e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,1.773967e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,2392499);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,1117.822);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,495.6327);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,412.6693);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,396.9638);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,400.6813);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,403.0173);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,418.1078);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,454.5869);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,510.8341);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,588.3588);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,741.8161);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,1160.861);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,1219.831);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,1082.961);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,1104.76);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,1159.892);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,1240.158);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,1268.997);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,1092.088);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,401.2163);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(3.981859e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_all_bckg_16->Modified();
   CvB_jets_all_bckg_16->cd();
   CvB_jets_all_bckg_16->SetSelected(CvB_jets_all_bckg_16);
}
