#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_all()
{
//=========Macro generated from canvas: Z_dR_seljet_all/Z_dR_seljet_all
//=========  (Tue Feb 14 16:10:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_all = new TCanvas("Z_dR_seljet_all", "Z_dR_seljet_all",0,0,600,600);
   Z_dR_seljet_all->SetHighLightColor(2);
   Z_dR_seljet_all->Range(-1.310117,-1.149729e+09,7.029799,8.431343e+09);
   Z_dR_seljet_all->SetFillColor(0);
   Z_dR_seljet_all->SetFillStyle(4000);
   Z_dR_seljet_all->SetBorderMode(0);
   Z_dR_seljet_all->SetBorderSize(2);
   Z_dR_seljet_all->SetLeftMargin(0.15709);
   Z_dR_seljet_all->SetRightMargin(0.1234783);
   Z_dR_seljet_all->SetBottomMargin(0.12);
   Z_dR_seljet_all->SetFrameFillStyle(1000);
   Z_dR_seljet_all->SetFrameBorderMode(0);
   Z_dR_seljet_all->SetFrameFillStyle(1000);
   Z_dR_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(7.473236e+09);
   
   TH1F *st_stack_276 = new TH1F("st_stack_276","",30,0,6);
   st_stack_276->SetMinimum(0);
   st_stack_276->SetMaximum(7.473236e+09);
   st_stack_276->SetDirectory(0);
   st_stack_276->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_276->SetLineColor(ci);
   st_stack_276->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_276->GetXaxis()->SetRange(1,30);
   st_stack_276->GetXaxis()->SetLabelFont(42);
   st_stack_276->GetXaxis()->SetTitleOffset(1);
   st_stack_276->GetXaxis()->SetTitleFont(42);
   st_stack_276->GetYaxis()->SetTitle("Events/0.2");
   st_stack_276->GetYaxis()->SetLabelFont(42);
   st_stack_276->GetYaxis()->SetTitleSize(0.037);
   st_stack_276->GetYaxis()->SetTitleFont(42);
   st_stack_276->GetZaxis()->SetLabelFont(42);
   st_stack_276->GetZaxis()->SetTitleOffset(1);
   st_stack_276->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_276);
   
   
   TH1D *VbbHcc_seljet_Z_dR_all_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(2,1763237);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(3,1.594273e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(4,2.862974e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(5,2.367619e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(6,2.319561e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(7,2.395973e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(8,2.510348e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(9,2.668915e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(10,2.900453e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(11,3.1823e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(12,3.533511e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(13,3.94272e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(14,4.373375e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(15,4.806849e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(16,4.976249e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(17,3.219172e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(18,2.300872e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(19,1.706845e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(20,1.272135e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(21,9.34989e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(22,6.713196e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(23,4.587085e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(24,2.931601e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(25,1.684786e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(26,8.550678e+07);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(27,3.796863e+07);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(28,1.068299e+07);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(29,640097.9);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(2,86480.57);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(3,3037991);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(4,4462449);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(5,4125257);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(6,4145791);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(7,4327278);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(8,4509374);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(9,4597760);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(10,4741939);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(11,5021157);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(12,5373303);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(13,5756689);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(14,6032710);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(15,6392906);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(16,6603124);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(17,5385025);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(18,4551254);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(19,3858764);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(20,3369627);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(21,2886325);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(22,2665934);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(23,2050568);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(24,1648747);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(25,1260914);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(26,969937.5);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(27,604577.6);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(28,354085.8);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(29,73989.44);
   VbbHcc_seljet_Z_dR_all_stack_1->SetEntries(2.02983e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_all_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(2,1359.155);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(3,1255701);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(4,2471540);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(5,3007075);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(6,3689349);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(7,4269698);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(8,4704331);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(9,5006600);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(10,5213849);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(11,5389605);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(12,5571112);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(13,5764112);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(14,5965837);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(15,6163164);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(16,5908672);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(17,3196940);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(18,1953998);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(19,1276197);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(20,846359.5);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(21,557652.6);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(22,359098.7);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(23,222957.6);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(24,129905.3);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(25,68413.07);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(26,32410.93);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(27,12841.94);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(28,3334.23);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(29,199.9183);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(2,10.60407);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(3,317.6676);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(4,446.2871);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(5,494.1711);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(6,548.0316);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(7,589.3563);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(8,618.4855);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(9,637.7894);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(10,651.1328);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(11,662.4428);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(12,674.0741);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(13,686.3083);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(14,699.172);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(15,711.7442);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(16,697.5162);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(17,512.2927);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(18,399.0826);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(19,322.0238);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(20,261.4962);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(21,212.0145);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(22,169.2525);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(23,133.0474);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(24,101.0974);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(25,73.01746);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(26,50.27471);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(27,31.61789);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(28,16.18102);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(29,3.811007);
   VbbHcc_seljet_Z_dR_all_stack_2->SetEntries(1.051192e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_all_stack_1","QCD","F");

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
   Z_dR_seljet_all->Modified();
   Z_dR_seljet_all->cd();
   Z_dR_seljet_all->SetSelected(Z_dR_seljet_all);
}
