#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_18()
{
//=========Macro generated from canvas: Z_dR_seljet_18/Z_dR_seljet_18
//=========  (Tue Feb 14 16:10:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_18 = new TCanvas("Z_dR_seljet_18", "Z_dR_seljet_18",0,0,600,600);
   Z_dR_seljet_18->SetHighLightColor(2);
   Z_dR_seljet_18->Range(-1.310117,-5.036755e+08,7.029799,3.693621e+09);
   Z_dR_seljet_18->SetFillColor(0);
   Z_dR_seljet_18->SetFillStyle(4000);
   Z_dR_seljet_18->SetBorderMode(0);
   Z_dR_seljet_18->SetBorderSize(2);
   Z_dR_seljet_18->SetLeftMargin(0.15709);
   Z_dR_seljet_18->SetRightMargin(0.1234783);
   Z_dR_seljet_18->SetBottomMargin(0.12);
   Z_dR_seljet_18->SetFrameFillStyle(1000);
   Z_dR_seljet_18->SetFrameBorderMode(0);
   Z_dR_seljet_18->SetFrameFillStyle(1000);
   Z_dR_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.273891e+09);
   
   TH1F *st_stack_275 = new TH1F("st_stack_275","",30,0,6);
   st_stack_275->SetMinimum(0);
   st_stack_275->SetMaximum(3.273891e+09);
   st_stack_275->SetDirectory(0);
   st_stack_275->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_275->SetLineColor(ci);
   st_stack_275->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_275->GetXaxis()->SetRange(1,30);
   st_stack_275->GetXaxis()->SetLabelFont(42);
   st_stack_275->GetXaxis()->SetTitleOffset(1);
   st_stack_275->GetXaxis()->SetTitleFont(42);
   st_stack_275->GetYaxis()->SetTitle("Events/0.2");
   st_stack_275->GetYaxis()->SetLabelFont(42);
   st_stack_275->GetYaxis()->SetTitleSize(0.037);
   st_stack_275->GetYaxis()->SetTitleFont(42);
   st_stack_275->GetZaxis()->SetLabelFont(42);
   st_stack_275->GetZaxis()->SetTitleOffset(1);
   st_stack_275->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_275);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,727578.4);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,7.07042e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,1.260515e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,1.040419e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,1.016028e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,1.055807e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,1.105683e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,1.167585e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,1.274477e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,1.399274e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,1.553886e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,1.734952e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,1.922946e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,2.10529e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,2.179954e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,1.413756e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,1.010871e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,7.473556e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,5.547283e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,4.082414e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,2.940064e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,1.992778e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,1.27521e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,7.330333e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,3.700154e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,1.642021e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,4980032);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(29,319084.3);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,50424.53);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,2213831);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,3233919);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,2978561);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,3018494);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,3226555);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,3367389);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,3371465);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,3436936);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,3662828);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,3955726);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,4253108);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,4397074);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,4638427);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,4779093);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,3965853);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,3350536);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,2786613);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,2435045);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,2082030);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,2043945);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,1470683);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,1180050);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,910707.8);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,747232.3);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,429618.2);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,287593.3);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(29,58810.49);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(6.787727e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,605.9376);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,565313.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,1106858);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,1345369);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,1650263);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,1909542);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,2103784);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,2238639);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,2331094);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,2409451);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,2489663);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,2575853);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,2665783);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,2753376);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,2639896);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,1429172);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,873715.6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,570934.2);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,378841.7);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,249986.9);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,160950.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,99983.52);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,58227.28);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,30697.96);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,14490.37);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,5708.422);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,1484.594);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,90.80003);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,7.851696);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,231.0262);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,322.8601);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,357.3096);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,396.282);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,426.0065);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,447.1188);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,461.017);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,470.7883);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,478.9569);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,487.1827);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,495.8043);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,505.0113);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,514.0925);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,503.8388);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,370.4934);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,288.5364);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,233.286);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,189.6474);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,154.2309);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,122.9951);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,96.87094);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,73.5699);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,53.0926);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,36.65374);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,23.11694);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,11.96069);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,2.743134);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(4.294316e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_seljet_18->Modified();
   Z_dR_seljet_18->cd();
   Z_dR_seljet_18->SetSelected(Z_dR_seljet_18);
}
