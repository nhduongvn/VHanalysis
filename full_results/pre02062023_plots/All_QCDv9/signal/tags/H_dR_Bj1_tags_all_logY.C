#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_all/H_dR_Bj1_tags_all
//=========  (Wed Jan 18 11:42:13 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_tags_all = new TCanvas("H_dR_Bj1_tags_all", "H_dR_Bj1_tags_all",0,0,600,600);
   H_dR_Bj1_tags_all->SetHighLightColor(2);
   H_dR_Bj1_tags_all->Range(-1.310117,0.398364,7.029799,3.145585);
   H_dR_Bj1_tags_all->SetFillColor(0);
   H_dR_Bj1_tags_all->SetFillStyle(4000);
   H_dR_Bj1_tags_all->SetBorderMode(0);
   H_dR_Bj1_tags_all->SetBorderSize(2);
   H_dR_Bj1_tags_all->SetLogy();
   H_dR_Bj1_tags_all->SetLeftMargin(0.15709);
   H_dR_Bj1_tags_all->SetRightMargin(0.1234783);
   H_dR_Bj1_tags_all->SetBottomMargin(0.12);
   H_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_all->SetFrameBorderMode(0);
   H_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(550.9368);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",30,0,6);
   st_stack_48->SetMinimum(5.346019);
   st_stack_48->SetMaximum(742.7842);
   st_stack_48->SetDirectory(0);
   st_stack_48->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_48->SetLineColor(ci);
   st_stack_48->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_48->GetXaxis()->SetRange(1,30);
   st_stack_48->GetXaxis()->SetLabelFont(42);
   st_stack_48->GetXaxis()->SetTitleOffset(1);
   st_stack_48->GetXaxis()->SetTitleFont(42);
   st_stack_48->GetYaxis()->SetTitle("Events/0.2");
   st_stack_48->GetYaxis()->SetLabelFont(42);
   st_stack_48->GetYaxis()->SetTitleSize(0.037);
   st_stack_48->GetYaxis()->SetTitleFont(42);
   st_stack_48->GetZaxis()->SetLabelFont(42);
   st_stack_48->GetZaxis()->SetTitleOffset(1);
   st_stack_48->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_48);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(1,0.7617159);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(2,2.943498);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(3,4.08322);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(4,3.869565);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(5,3.220849);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(6,2.791797);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(7,2.268664);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(8,1.900704);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(9,1.475746);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(10,1.298956);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(11,1.08984);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(12,0.8870073);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(13,0.8861383);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(14,0.8073941);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(15,0.6505597);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(16,0.6362939);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(17,0.3218192);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(18,0.2416257);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(19,0.1539169);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(20,0.08490987);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(21,0.05815831);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(22,0.0192276);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(23,0.02546152);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(24,0.01675774);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(25,0.00996595);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(26,0.004614803);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(27,0.002323422);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(28,0.001440646);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(1,0.03831766);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(2,0.07451062);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(3,0.08785701);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(4,0.08524583);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(5,0.07798134);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(6,0.07281437);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(7,0.06550063);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(8,0.05986763);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(9,0.05308186);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(10,0.0498141);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(11,0.04520161);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(12,0.04071246);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(13,0.040892);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(14,0.03895407);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(15,0.03489626);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(16,0.03483843);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(17,0.024238);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(18,0.02150047);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(19,0.0170638);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(20,0.01265);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(21,0.01052247);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(22,0.005917377);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(23,0.006952032);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(24,0.005401268);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(25,0.0041359);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(26,0.002667039);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(27,0.002323422);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(28,0.001440646);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetEntries(16887);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(1,0.3286905);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(2,1.173926);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(3,1.426148);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(4,1.270313);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(5,1.019429);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(6,0.8131274);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(7,0.6438794);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(8,0.4714901);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(9,0.3869786);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(10,0.3109822);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(11,0.2694524);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(12,0.2377743);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(13,0.210436);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(14,0.199786);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(15,0.1787427);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(16,0.1729802);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(17,0.08233353);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(18,0.06160085);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(19,0.04059055);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(20,0.02086075);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(21,0.0176001);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(22,0.01147758);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(23,0.007350249);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(24,0.004059998);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(25,0.002815685);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(26,0.002979783);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(27,0.00104834);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(31,0.0003441339);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(1,0.009352568);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(2,0.01766243);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(3,0.01949747);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(4,0.01842443);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(5,0.0164652);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(6,0.01476496);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(7,0.01318033);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(8,0.01122824);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(9,0.01012053);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(10,0.009080927);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(11,0.008434564);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(12,0.007909689);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(13,0.007451669);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(14,0.00720027);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(15,0.006814814);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(16,0.006759076);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(17,0.004618562);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(18,0.004048841);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(19,0.003302182);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(20,0.002372704);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(21,0.002181244);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(22,0.001759501);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(23,0.001310002);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(24,0.0009963984);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(25,0.0008439887);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(26,0.0008934943);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(27,0.000549256);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(31,0.0003441339);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetEntries(38012);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_tags_all->Modified();
   H_dR_Bj1_tags_all->cd();
   H_dR_Bj1_tags_all->SetSelected(H_dR_Bj1_tags_all);
}
