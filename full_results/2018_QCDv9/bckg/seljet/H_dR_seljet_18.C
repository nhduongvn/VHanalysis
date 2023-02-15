#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_18()
{
//=========Macro generated from canvas: H_dR_seljet_18/H_dR_seljet_18
//=========  (Tue Feb 14 16:10:13 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_18 = new TCanvas("H_dR_seljet_18", "H_dR_seljet_18",0,0,600,600);
   H_dR_seljet_18->SetHighLightColor(2);
   H_dR_seljet_18->Range(-1.353788,-9.13699e+08,7.264125,6.700459e+09);
   H_dR_seljet_18->SetFillColor(0);
   H_dR_seljet_18->SetFillStyle(4000);
   H_dR_seljet_18->SetBorderMode(0);
   H_dR_seljet_18->SetBorderSize(2);
   H_dR_seljet_18->SetLeftMargin(0.15709);
   H_dR_seljet_18->SetRightMargin(0.1234783);
   H_dR_seljet_18->SetBottomMargin(0.12);
   H_dR_seljet_18->SetFrameFillStyle(1000);
   H_dR_seljet_18->SetFrameBorderMode(0);
   H_dR_seljet_18->SetFrameFillStyle(1000);
   H_dR_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.939043e+09);
   
   TH1F *st_stack_279 = new TH1F("st_stack_279","",30,0,6);
   st_stack_279->SetMinimum(0);
   st_stack_279->SetMaximum(5.939043e+09);
   st_stack_279->SetDirectory(0);
   st_stack_279->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_279->SetLineColor(ci);
   st_stack_279->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_279->GetXaxis()->SetRange(1,31);
   st_stack_279->GetXaxis()->SetLabelFont(42);
   st_stack_279->GetXaxis()->SetTitleOffset(1);
   st_stack_279->GetXaxis()->SetTitleFont(42);
   st_stack_279->GetYaxis()->SetTitle("Events/0.2");
   st_stack_279->GetYaxis()->SetLabelFont(42);
   st_stack_279->GetYaxis()->SetTitleSize(0.037);
   st_stack_279->GetYaxis()->SetTitleFont(42);
   st_stack_279->GetZaxis()->SetLabelFont(42);
   st_stack_279->GetZaxis()->SetTitleOffset(1);
   st_stack_279->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_279);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,247491.2);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,1.865398e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,2.853209e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,2.426161e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,2.559959e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,2.915456e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,3.477948e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,4.428757e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,5.934354e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,8.221513e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,1.175263e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,1.68727e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,2.397716e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,3.29353e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,3.954524e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,2.511552e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,1.749974e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,1.279121e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,9.416842e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,6.833193e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,4.849411e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,3.330623e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,2.143514e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,1.299278e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,6.796435e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,3.049615e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,8424983);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(29,720970.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,47556.21);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,1808685);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,1915769);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,1751970);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,1819112);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,2221334);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,2143291);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,2323284);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,2572233);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,2968310);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,3484951);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,4070756);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,4723833);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,5647763);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,6014784);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,4731471);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,3980341);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,3582251);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,3051222);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,2742955);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,2235121);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,1795858);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,1442571);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,1175746);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,849568.7);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,561534.2);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,286308.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(29,105990);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(6.787727e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_stack_2 = new TH1D("VbbHcc_seljet_H_dR_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(2,196.2353);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,233961.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,524604.3);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,711109.6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,854410.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,944151.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,1027112);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,1161947);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,1382058);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,1716768);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,2193216);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,2831561);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,3620735);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,4487744);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,4838018);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,2500624);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,1436298);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,877869.7);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,542357.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,332755.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,200649.6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,117813.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,66003.3);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,34366.85);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,15808.65);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,6043.831);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,1499.718);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(29,90.25388);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(2,4.30344);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,147.3052);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,221.165);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,257.0013);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,282.1453);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,296.3168);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,308.9591);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,330.5434);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,360.755);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,402.4311);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,456.1898);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,519.659);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,588.9371);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,657.0532);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,683.0246);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,491.2392);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,371.3732);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,290.1209);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,228.5641);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,178.0739);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,137.623);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,105.5009);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,78.60534);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,56.88905);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,38.38697);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,23.82552);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,11.75249);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(29,3.036482);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(4.294316e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_1","QCD","F");

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
   H_dR_seljet_18->Modified();
   H_dR_seljet_18->cd();
   H_dR_seljet_18->SetSelected(H_dR_seljet_18);
}
