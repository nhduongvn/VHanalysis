#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_16()
{
//=========Macro generated from canvas: Z_dR_seljet_16/Z_dR_seljet_16
//=========  (Tue Feb 14 16:10:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_16 = new TCanvas("Z_dR_seljet_16", "Z_dR_seljet_16",0,0,600,600);
   Z_dR_seljet_16->SetHighLightColor(2);
   Z_dR_seljet_16->Range(-1.310117,-2.884202e+08,7.029799,2.115081e+09);
   Z_dR_seljet_16->SetFillColor(0);
   Z_dR_seljet_16->SetFillStyle(4000);
   Z_dR_seljet_16->SetBorderMode(0);
   Z_dR_seljet_16->SetBorderSize(2);
   Z_dR_seljet_16->SetLeftMargin(0.15709);
   Z_dR_seljet_16->SetRightMargin(0.1234783);
   Z_dR_seljet_16->SetBottomMargin(0.12);
   Z_dR_seljet_16->SetFrameFillStyle(1000);
   Z_dR_seljet_16->SetFrameBorderMode(0);
   Z_dR_seljet_16->SetFrameFillStyle(1000);
   Z_dR_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.874731e+09);
   
   TH1F *st_stack_273 = new TH1F("st_stack_273","",30,0,6);
   st_stack_273->SetMinimum(0);
   st_stack_273->SetMaximum(1.874731e+09);
   st_stack_273->SetDirectory(0);
   st_stack_273->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_273->SetLineColor(ci);
   st_stack_273->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_273->GetXaxis()->SetRange(1,30);
   st_stack_273->GetXaxis()->SetLabelFont(42);
   st_stack_273->GetXaxis()->SetTitleOffset(1);
   st_stack_273->GetXaxis()->SetTitleFont(42);
   st_stack_273->GetYaxis()->SetTitle("Events/0.2");
   st_stack_273->GetYaxis()->SetLabelFont(42);
   st_stack_273->GetYaxis()->SetTitleSize(0.037);
   st_stack_273->GetYaxis()->SetTitleFont(42);
   st_stack_273->GetZaxis()->SetLabelFont(42);
   st_stack_273->GetZaxis()->SetTitleOffset(1);
   st_stack_273->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_273);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,582810.7);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,4.08057e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,7.133128e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,5.920555e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,5.776616e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,5.943467e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,6.241358e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,6.637205e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,7.198849e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,7.932609e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,8.782649e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,9.831835e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,1.090124e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,1.200554e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,1.248349e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,8.025999e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,5.744971e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,4.26307e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,3.191226e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,2.325716e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,1.690765e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,1.1728e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,7.648939e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,4.259856e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,2.234456e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,1.008351e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,2626413);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(29,145012.4);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,59384.18);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,1484587);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,2157103);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,2007904);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,1981432);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,2011683);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,2106005);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,2176470);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,2282127);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,2412922);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,2541389);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,2730909);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,2896954);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,3092768);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,3220851);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,2563318);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,2164218);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,1872403);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,1633128);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,1386237);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,1205750);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,1018995);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,834355.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,606794.4);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,447007.4);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,307056.7);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,145650);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(29,35790.2);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(6.330104e+07);

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
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,386.4226);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,315174.8);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,612961.6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,747932.6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,918349.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,1063107);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,1171301);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,1246306);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,1297594);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,1341004);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,1386627);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,1434701);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,1485597);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,1535364);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,1472184);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,796231.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,486976.9);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,318078.9);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,210938.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,139175.2);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,89773.1);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,55929.9);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,32739.46);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,17275.2);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,8272.477);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,3320.775);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,861.7517);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,53.00553);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,5.058049);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,145.9633);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,204.4479);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,226.6452);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,251.3558);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,270.4195);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,283.7438);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,292.5919);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,298.5748);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,303.695);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,309.1333);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,314.8372);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,320.8263);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,326.5766);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,320.0513);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,234.8555);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,183.1636);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,147.5691);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,119.7534);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,96.94153);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,77.55684);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,60.98499);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,46.47474);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,33.66521);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,23.20529);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,14.626);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,7.408123);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,1.842138);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(2.795724e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_seljet_16->Modified();
   Z_dR_seljet_16->cd();
   Z_dR_seljet_16->SetSelected(Z_dR_seljet_16);
}
