#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_all()
{
//=========Macro generated from canvas: H_dR_seljet_all/H_dR_seljet_all
//=========  (Mon Dec 19 11:11:49 2022) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_all = new TCanvas("H_dR_seljet_all", "H_dR_seljet_all",0,0,600,600);
   H_dR_seljet_all->SetHighLightColor(2);
   H_dR_seljet_all->Range(-1.353788,-2.475651e+09,7.264125,1.815478e+10);
   H_dR_seljet_all->SetFillColor(0);
   H_dR_seljet_all->SetFillStyle(4000);
   H_dR_seljet_all->SetBorderMode(0);
   H_dR_seljet_all->SetBorderSize(2);
   H_dR_seljet_all->SetLeftMargin(0.15709);
   H_dR_seljet_all->SetRightMargin(0.1234783);
   H_dR_seljet_all->SetBottomMargin(0.12);
   H_dR_seljet_all->SetFrameFillStyle(1000);
   H_dR_seljet_all->SetFrameBorderMode(0);
   H_dR_seljet_all->SetFrameFillStyle(1000);
   H_dR_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.609173e+10);
   
   TH1F *st_stack_248 = new TH1F("st_stack_248","",30,0,6);
   st_stack_248->SetMinimum(0);
   st_stack_248->SetMaximum(1.609173e+10);
   st_stack_248->SetDirectory(0);
   st_stack_248->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_248->SetLineColor(ci);
   st_stack_248->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_248->GetXaxis()->SetRange(1,31);
   st_stack_248->GetXaxis()->SetLabelFont(42);
   st_stack_248->GetXaxis()->SetTitleOffset(1);
   st_stack_248->GetXaxis()->SetTitleFont(42);
   st_stack_248->GetYaxis()->SetTitle("Events/0.2");
   st_stack_248->GetYaxis()->SetLabelFont(42);
   st_stack_248->GetYaxis()->SetTitleSize(0.037);
   st_stack_248->GetYaxis()->SetTitleFont(42);
   st_stack_248->GetZaxis()->SetLabelFont(42);
   st_stack_248->GetZaxis()->SetTitleOffset(1);
   st_stack_248->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_248);
   
   
   TH1D *VbbHcc_seljet_H_dR_all_stack_1 = new TH1D("VbbHcc_seljet_H_dR_all_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(2,650055.8);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(3,5.305836e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(4,8.661201e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(5,7.582965e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(6,7.966271e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(7,8.914907e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(8,1.064404e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(9,1.333272e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(10,1.727961e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(11,2.345519e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(12,3.266485e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(13,4.621637e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(14,6.497198e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(15,8.888712e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(16,1.071686e+10);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(17,6.783776e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(18,4.755315e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(19,3.483106e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(20,2.567371e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(21,1.865533e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(22,1.322919e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(23,9.093594e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(24,5.918203e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(25,3.519188e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(26,1.850923e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(27,8.365289e+07);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(28,2.389406e+07);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(29,1585621);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(2,86427.53);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(3,2331609);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(4,3286290);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(5,3084176);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(6,3132758);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(7,3343650);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(8,3592858);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(9,3963639);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(10,4372626);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(11,4920933);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(12,5740397);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(13,6691258);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(14,7571595);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(15,8854209);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(16,9513384);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(17,7653039);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(18,6533363);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(19,5737503);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(20,4898852);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(21,4255536);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(22,3507626);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(23,2917358);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(24,2337912);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(25,1818934);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(26,1302879);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(27,901720.2);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(28,488375.7);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(29,141972.8);
   VbbHcc_seljet_H_dR_all_stack_1->SetEntries(2.185414e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_all_stack_2 = new TH1D("VbbHcc_seljet_H_dR_all_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(2,450.057);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(3,522331.3);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(4,1177727);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(5,1601722);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(6,1930725);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(7,2140185);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(8,2336529);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(9,2645127);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(10,3147649);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(11,3906593);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(12,4985472);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(13,6429741);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(14,8213563);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(15,1.017453e+07);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(16,1.096298e+07);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(17,5652922);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(18,3240838);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(19,1977113);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(20,1218363);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(21,745383.4);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(22,448792.9);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(23,262503.7);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(24,146406.2);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(25,75644.41);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(26,34700.02);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(27,13147.17);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(28,3208.392);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(29,185.6931);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(2,6.849643);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(3,203.2784);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(4,306.5551);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(5,357.8881);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(6,393.3039);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(7,414.3364);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(8,434.0116);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(9,463.6445);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(10,507.1734);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(11,566.3173);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(12,642.3736);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(13,731.8266);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(14,830.151);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(15,926.2667);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(16,963.1873);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(17,690.7043);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(18,521.1818);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(19,406.2106);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(20,318.5883);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(21,247.7556);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(22,191.3972);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(23,145.8778);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(24,108.4988);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(25,77.42515);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(26,52.24035);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(27,32.33053);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(28,15.84889);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(29,3.882995);
   VbbHcc_seljet_H_dR_all_stack_2->SetEntries(1.056999e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_seljet_all->Modified();
   H_dR_seljet_all->cd();
   H_dR_seljet_all->SetSelected(H_dR_seljet_all);
}
