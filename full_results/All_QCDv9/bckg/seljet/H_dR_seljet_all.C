#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_all()
{
//=========Macro generated from canvas: H_dR_seljet_all/H_dR_seljet_all
//=========  (Thu Feb 16 10:35:37 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_all = new TCanvas("H_dR_seljet_all", "H_dR_seljet_all",0,0,600,600);
   H_dR_seljet_all->SetHighLightColor(2);
   H_dR_seljet_all->Range(-1.353788,-3.597004e+08,7.264125,2.637803e+09);
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
   st->SetMaximum(2.338053e+09);
   
   TH1F *st_stack_280 = new TH1F("st_stack_280","",30,0,6);
   st_stack_280->SetMinimum(0);
   st_stack_280->SetMaximum(2.338053e+09);
   st_stack_280->SetDirectory(0);
   st_stack_280->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_280->SetLineColor(ci);
   st_stack_280->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_280->GetXaxis()->SetRange(1,31);
   st_stack_280->GetXaxis()->SetLabelFont(42);
   st_stack_280->GetXaxis()->SetTitleOffset(1);
   st_stack_280->GetXaxis()->SetTitleFont(42);
   st_stack_280->GetYaxis()->SetTitle("Events/0.2");
   st_stack_280->GetYaxis()->SetLabelFont(42);
   st_stack_280->GetYaxis()->SetTitleSize(0.037);
   st_stack_280->GetYaxis()->SetTitleFont(42);
   st_stack_280->GetZaxis()->SetLabelFont(42);
   st_stack_280->GetZaxis()->SetTitleOffset(1);
   st_stack_280->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_280);
   
   
   TH1D *VbbHcc_seljet_H_dR_all_stack_1 = new TH1D("VbbHcc_seljet_H_dR_all_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(2,110440.6);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(3,8.136547e+07);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(4,1.076801e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(5,9.339598e+07);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(6,9.64234e+07);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(7,1.089784e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(8,1.337785e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(9,1.720667e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(10,2.32446e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(11,3.218188e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(12,4.609707e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(13,6.6197e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(14,9.431195e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(15,1.298675e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(16,1.55265e+09);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(17,9.768515e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(18,6.743182e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(19,4.873823e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(20,3.532663e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(21,2.535798e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(22,1.755397e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(23,1.179727e+08);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(24,7.524001e+07);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(25,4.47549e+07);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(26,2.305864e+07);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(27,9803810);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(28,2620073);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(29,240535.6);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(2,10399.59);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(3,486004.2);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(4,614092.4);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(5,586347.6);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(6,577094);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(7,584285.2);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(8,648503);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(9,701628.7);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(10,777154.6);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(11,862881.8);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(12,994262.8);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(13,1198986);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(14,1359452);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(15,1566608);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(16,1750178);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(17,1393371);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(18,1158288);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(19,988593.7);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(20,875079.1);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(21,746140.3);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(22,620472.9);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(23,505441.4);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(24,413823.4);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(25,326160.9);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(26,239406.8);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(27,162475.9);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(28,78260.84);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(29,44131.73);
   VbbHcc_seljet_H_dR_all_stack_1->SetEntries(1.25316e+08);

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
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(2,266.1619);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(3,311126);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(4,688473.7);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(5,866259.1);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(6,936424.3);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(7,962242.2);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(8,1015071);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(9,1147981);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(10,1395807);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(11,1798895);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(12,2398839);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(13,3231226);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(14,4291190);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(15,5490936);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(16,6051836);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(17,3172181);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(18,1830324);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(19,1119536);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(20,690923.7);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(21,423559);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(22,255510.1);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(23,149530.5);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(24,83447.16);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(25,43055.67);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(26,19587.65);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(27,7349.591);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(28,1778.571);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(29,101.0237);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(2,5.686449);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(3,157.9366);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(4,236.2712);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(5,265.1038);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(6,276.1656);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(7,279.5832);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(8,286.8418);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(9,306.186);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(10,337.4206);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(11,382.9695);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(12,442.6193);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(13,515.2271);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(14,594.6279);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(15,674.0351);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(16,708.5408);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(17,512.6009);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(18,388.6859);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(19,303.0533);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(20,237.6715);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(21,185.5844);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(22,143.3965);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(23,109.5079);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(24,81.41285);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(25,58.34716);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(26,39.29517);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(27,24.38165);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(28,11.94145);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(29,2.966372);
   VbbHcc_seljet_H_dR_all_stack_2->SetEntries(5.413184e+08);

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
