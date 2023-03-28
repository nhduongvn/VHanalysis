#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_16/Z_dR_Bj0_both_16
//=========  (Mon Mar 27 11:09:52 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_both_16 = new TCanvas("Z_dR_Bj0_both_16", "Z_dR_Bj0_both_16",0,0,600,600);
   Z_dR_Bj0_both_16->SetHighLightColor(2);
   Z_dR_Bj0_both_16->Range(-1.310117,-0.1017686,7.029799,0.7463033);
   Z_dR_Bj0_both_16->SetFillColor(0);
   Z_dR_Bj0_both_16->SetFillStyle(4000);
   Z_dR_Bj0_both_16->SetBorderMode(0);
   Z_dR_Bj0_both_16->SetBorderSize(2);
   Z_dR_Bj0_both_16->SetLeftMargin(0.15709);
   Z_dR_Bj0_both_16->SetRightMargin(0.1234783);
   Z_dR_Bj0_both_16->SetBottomMargin(0.12);
   Z_dR_Bj0_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   Z_dR_Bj0_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.6614961);
   
   TH1F *st_stack_241 = new TH1F("st_stack_241","",30,0,6);
   st_stack_241->SetMinimum(0);
   st_stack_241->SetMaximum(0.6614961);
   st_stack_241->SetDirectory(0);
   st_stack_241->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_241->SetLineColor(ci);
   st_stack_241->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_241->GetXaxis()->SetRange(1,30);
   st_stack_241->GetXaxis()->SetLabelFont(42);
   st_stack_241->GetXaxis()->SetTitleOffset(1);
   st_stack_241->GetXaxis()->SetTitleFont(42);
   st_stack_241->GetYaxis()->SetTitle("Event/0.2");
   st_stack_241->GetYaxis()->SetLabelFont(42);
   st_stack_241->GetYaxis()->SetTitleSize(0.037);
   st_stack_241->GetYaxis()->SetTitleFont(42);
   st_stack_241->GetZaxis()->SetLabelFont(42);
   st_stack_241->GetZaxis()->SetTitleOffset(1);
   st_stack_241->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_241);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,0.1148703);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,0.355551);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,0.374696);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,0.2324756);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,0.1476904);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,0.0738452);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,0.07111019);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,0.04376012);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,0.0382901);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,0.04102511);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,0.03008508);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,0.02461507);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,0.04376012);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,0.02735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,0.01641004);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,0.01367504);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,0.01094003);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,0.01772487);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,0.03118388);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,0.03201244);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,0.02521552);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,0.02009812);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,0.01421152);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,0.01394586);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,0.01094003);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,0.01023346);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,0.01059264);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,0.009070994);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,0.008205022);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,0.01094003);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,0.008648853);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,0.006699373);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,0.006115663);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,0.005470015);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(610);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,0.03394026);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,0.1664859);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,0.1743457);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,0.1136105);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,0.06073519);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,0.03215393);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,0.02286501);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,0.01964962);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,0.01429063);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,0.01536243);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,0.01071798);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,0.01071798);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,0.01107524);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,0.006430785);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,0.007859849);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,0.006430785);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,0.001786329);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,0.003572658);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,0.001786329);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,0.001786329);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,0.003482197);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,0.00771231);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,0.007892261);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,0.006370963);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,0.004658177);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,0.003389321);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,0.002858127);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,0.002649554);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,0.002259548);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,0.002342749);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,0.001956826);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,0.001956826);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,0.001989172);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,0.001515751);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,0.001675725);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,0.001515751);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,0.0007988707);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,0.001129774);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,0.0007988707);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,0.0007988707);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(2006);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   Z_dR_Bj0_both_16->Modified();
   Z_dR_Bj0_both_16->cd();
   Z_dR_Bj0_both_16->SetSelected(Z_dR_Bj0_both_16);
}
