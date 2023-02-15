#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_16/Z_dR_Bj1_both_16
//=========  (Tue Feb 14 15:57:11 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_both_16 = new TCanvas("Z_dR_Bj1_both_16", "Z_dR_Bj1_both_16",0,0,600,600);
   Z_dR_Bj1_both_16->SetHighLightColor(2);
   Z_dR_Bj1_both_16->Range(-1.310117,-0.6033406,7.029799,4.424498);
   Z_dR_Bj1_both_16->SetFillColor(0);
   Z_dR_Bj1_both_16->SetFillStyle(4000);
   Z_dR_Bj1_both_16->SetBorderMode(0);
   Z_dR_Bj1_both_16->SetBorderSize(2);
   Z_dR_Bj1_both_16->SetLeftMargin(0.15709);
   Z_dR_Bj1_both_16->SetRightMargin(0.1234783);
   Z_dR_Bj1_both_16->SetBottomMargin(0.12);
   Z_dR_Bj1_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
   Z_dR_Bj1_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.921714);
   
   TH1F *st_stack_181 = new TH1F("st_stack_181","",30,0,6);
   st_stack_181->SetMinimum(0);
   st_stack_181->SetMaximum(3.921714);
   st_stack_181->SetDirectory(0);
   st_stack_181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_181->SetLineColor(ci);
   st_stack_181->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_181->GetXaxis()->SetRange(1,30);
   st_stack_181->GetXaxis()->SetLabelFont(42);
   st_stack_181->GetXaxis()->SetTitleOffset(1);
   st_stack_181->GetXaxis()->SetTitleFont(42);
   st_stack_181->GetYaxis()->SetTitle("Events/0.2");
   st_stack_181->GetYaxis()->SetLabelFont(42);
   st_stack_181->GetYaxis()->SetTitleSize(0.037);
   st_stack_181->GetYaxis()->SetTitleFont(42);
   st_stack_181->GetZaxis()->SetLabelFont(42);
   st_stack_181->GetZaxis()->SetTitleOffset(1);
   st_stack_181->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_181);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,0.3911061);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,1.545279);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,1.936385);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,1.627329);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,1.159643);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,0.8752024);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,0.6208467);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,0.5005064);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,0.352816);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,0.3172609);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,0.2215356);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,0.1996555);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,0.1504254);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,0.1476904);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,0.1558954);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,0.1531604);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,0.08205022);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,0.05743516);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,0.01367504);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,0.005470015);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,0.01641004);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,0.008205022);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,0.01641004);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,0.03270593);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,0.06501039);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,0.07277382);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,0.066714);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,0.05631725);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,0.0489253);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,0.04120704);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,0.0369985);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,0.03106371);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,0.02945693);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,0.02461507);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,0.02336791);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,0.02028336);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,0.02009812);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,0.02064885);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,0.02046692);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,0.01498025);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,0.01253338);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,0.006115663);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,0.003867885);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,0.006699373);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,0.004737172);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,0.006699373);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(3861);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,0.1725594);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,0.6448649);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,0.6780906);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,0.5087466);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,0.3404744);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,0.2186467);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,0.1346892);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,0.106108);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,0.07716942);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,0.06609418);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,0.05501894);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,0.06430785);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,0.05251808);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,0.0418001);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,0.03965651);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,0.03644112);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,0.02107868);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,0.01143251);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,0.006788051);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,0.005001722);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,0.002858127);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,0.001429063);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(28,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,0.007851725);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,0.01517854);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,0.01556466);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,0.01348176);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,0.01102905);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,0.008838269);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,0.006936848);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,0.006157008);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,0.005250714);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,0.004859341);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,0.004433553);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,0.004793224);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,0.004331618);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,0.003864421);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,0.003764029);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,0.003608208);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,0.002744211);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,0.002021001);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,0.001557286);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,0.001336766);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,0.0010105);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(28,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(9203);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   Z_dR_Bj1_both_16->Modified();
   Z_dR_Bj1_both_16->cd();
   Z_dR_Bj1_both_16->SetSelected(Z_dR_Bj1_both_16);
}
