#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_16/Z_dR_Bj1_both_16
//=========  (Wed Jan 18 11:40:25 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_both_16 = new TCanvas("Z_dR_Bj1_both_16", "Z_dR_Bj1_both_16",0,0,600,600);
   Z_dR_Bj1_both_16->SetHighLightColor(2);
   Z_dR_Bj1_both_16->Range(-1.310117,-0.4081002,7.029799,2.992735);
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
   st->SetMaximum(2.652651);
   
   TH1F *st_stack_181 = new TH1F("st_stack_181","",30,0,6);
   st_stack_181->SetMinimum(0);
   st_stack_181->SetMaximum(2.652651);
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
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,0.2593163);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,1.027181);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,1.210143);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,1.187092);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,0.98108);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,0.6886288);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,0.492701);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,0.394737);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,0.2924512);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,0.2607569);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,0.2002498);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,0.1743182);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,0.1599117);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,0.1469459);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,0.1195736);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,0.1195736);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,0.05762585);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,0.04898197);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,0.01584711);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,0.0187284);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,0.01296582);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,0.002881292);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,0.004321938);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,0.004321938);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,0.002881292);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(27,0.001440646);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(29,0.001440646);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(30,0.001440646);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(31,0.001440646);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,0.0193283);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,0.03846822);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,0.04175389);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,0.04135432);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,0.03759507);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,0.03149715);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,0.02664222);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,0.02384694);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,0.02052605);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,0.01938191);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,0.01698497);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,0.01584711);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,0.01517815);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,0.01454981);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,0.01312491);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,0.01312491);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,0.009111446);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,0.008400338);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,0.004778083);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,0.005194323);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,0.004321938);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,0.002037381);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,0.002495272);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,0.002495272);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,0.002037381);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(27,0.001440646);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(29,0.001440646);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(30,0.001440646);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(31,0.001440646);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(5476);

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
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,0.1818363);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,0.5041007);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,0.5582915);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,0.4486496);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,0.2963392);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,0.215503);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,0.1409681);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,0.1029806);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,0.08605718);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,0.06355269);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,0.06427283);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,0.05617122);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,0.05041007);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,0.04230845);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,0.0390678);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,0.03672733);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,0.02268453);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,0.01224244);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,0.007741546);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,0.002880575);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,0.005581114);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,0.002160431);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,0.001440288);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,0.001080216);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,0.0005401079);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,0.0007201438);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(27,0.0005401079);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(28,0.000180036);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(29,0.0003600719);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,0.005721632);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,0.009526607);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,0.01002559);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,0.008987383);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,0.007304225);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,0.006228828);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,0.005037791);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,0.004305834);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,0.003936164);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,0.003382568);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,0.003401679);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,0.003180069);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,0.003012578);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,0.002759899);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,0.002652095);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,0.002571428);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,0.002020899);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,0.001484614);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,0.001180575);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,0.0007201438);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,0.001002398);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,0.0006236628);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.0005092186);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.0004409962);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.0003118314);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,0.0003600719);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(27,0.0003118314);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(28,0.000180036);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(29,0.0002546093);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(16360);

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
