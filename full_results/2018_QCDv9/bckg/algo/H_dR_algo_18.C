#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_18()
{
//=========Macro generated from canvas: H_dR_algo_18/H_dR_algo_18
//=========  (Tue Feb 14 16:10:10 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_18 = new TCanvas("H_dR_algo_18", "H_dR_algo_18",0,0,600,600);
   H_dR_algo_18->SetHighLightColor(2);
   H_dR_algo_18->Range(-1.353788,-182365.5,7.264125,1337347);
   H_dR_algo_18->SetFillColor(0);
   H_dR_algo_18->SetFillStyle(4000);
   H_dR_algo_18->SetBorderMode(0);
   H_dR_algo_18->SetBorderSize(2);
   H_dR_algo_18->SetLeftMargin(0.15709);
   H_dR_algo_18->SetRightMargin(0.1234783);
   H_dR_algo_18->SetBottomMargin(0.12);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1185376);
   
   TH1F *st_stack_87 = new TH1F("st_stack_87","",30,0,6);
   st_stack_87->SetMinimum(0);
   st_stack_87->SetMaximum(1185376);
   st_stack_87->SetDirectory(0);
   st_stack_87->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_87->SetLineColor(ci);
   st_stack_87->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_87->GetXaxis()->SetRange(1,31);
   st_stack_87->GetXaxis()->SetLabelFont(42);
   st_stack_87->GetXaxis()->SetTitleOffset(1);
   st_stack_87->GetXaxis()->SetTitleFont(42);
   st_stack_87->GetYaxis()->SetTitle("Events/0.2");
   st_stack_87->GetYaxis()->SetLabelFont(42);
   st_stack_87->GetYaxis()->SetTitleSize(0.037);
   st_stack_87->GetYaxis()->SetTitleFont(42);
   st_stack_87->GetZaxis()->SetLabelFont(42);
   st_stack_87->GetZaxis()->SetTitleOffset(1);
   st_stack_87->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_87);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,442194.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,675510.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,467467.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,467556.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,500256.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,436134.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,604005.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,651606.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,594004.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,526167.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,638235.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,778088.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,652717.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,468210.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,368370.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,222228.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,149978);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,113559.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,36779.12);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,13368.66);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,9721.078);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,7337.407);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,1156.118);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,949.0557);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,465.5248);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,43915.54);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,89644.09);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,68779.13);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,66358.73);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,68268.68);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,49591.75);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,74811.13);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,79143.79);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,68170.62);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,59488.36);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,73289.52);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,89068.36);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,76253.99);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,40462.67);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,62423.06);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,40822.5);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,40752.45);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,42185.75);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,7425.19);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,3901.778);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,3711.309);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,3067.98);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,600.7937);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,587.4489);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,393.5413);
   VbbHcc_algo_H_dR_stack_1->SetEntries(36309);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,2.016816);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,3689.515);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,8091.593);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,11730.68);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,15321.26);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,16757.18);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,16511.14);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,15681.79);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,15010.08);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,14737.05);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,14225.24);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,13394.81);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,12161.75);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,10974.4);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,9631.244);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,5707.174);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,3510.531);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,2145.614);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,1252.077);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,692.5923);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,363.7792);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,191.2379);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,86.71422);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,33.37393);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,12.92964);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,3.562492);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.7251632);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.4210644);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,18.2774);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,26.92299);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,32.31245);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,36.96502);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,38.53459);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,39.03393);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,37.51796);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,37.52264);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,37.49306);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,36.29889);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,35.04644);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,33.50311);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,31.57486);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,29.09817);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,23.1338);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,18.00228);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,14.23281);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,10.29772);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,7.586735);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,5.410875);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,3.976337);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,2.79701);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,1.696516);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,1.008985);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.550994);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.2234852);
   VbbHcc_algo_H_dR_stack_2->SetEntries(2592187);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   H_dR_algo_18->Modified();
   H_dR_algo_18->cd();
   H_dR_algo_18->SetSelected(H_dR_algo_18);
}
