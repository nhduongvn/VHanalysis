#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_both_17/Z_dR_both_17
//=========  (Wed Jan 18 11:42:15 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_17 = new TCanvas("Z_dR_both_17", "Z_dR_both_17",0,0,600,600);
   Z_dR_both_17->SetHighLightColor(2);
   Z_dR_both_17->Range(-1.310117,0.5787509,7.029799,2.435003);
   Z_dR_both_17->SetFillColor(0);
   Z_dR_both_17->SetFillStyle(4000);
   Z_dR_both_17->SetBorderMode(0);
   Z_dR_both_17->SetBorderSize(2);
   Z_dR_both_17->SetLogy();
   Z_dR_both_17->SetLeftMargin(0.15709);
   Z_dR_both_17->SetRightMargin(0.1234783);
   Z_dR_both_17->SetBottomMargin(0.12);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(144.1613);
   
   TH1F *st_stack_146 = new TH1F("st_stack_146","",30,0,6);
   st_stack_146->SetMinimum(6.331421);
   st_stack_146->SetMaximum(177.5735);
   st_stack_146->SetDirectory(0);
   st_stack_146->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_146->SetLineColor(ci);
   st_stack_146->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_146->GetXaxis()->SetRange(1,30);
   st_stack_146->GetXaxis()->SetLabelFont(42);
   st_stack_146->GetXaxis()->SetTitleOffset(1);
   st_stack_146->GetXaxis()->SetTitleFont(42);
   st_stack_146->GetYaxis()->SetTitle("Events/0.2");
   st_stack_146->GetYaxis()->SetLabelFont(42);
   st_stack_146->GetYaxis()->SetTitleSize(0.037);
   st_stack_146->GetYaxis()->SetTitleFont(42);
   st_stack_146->GetZaxis()->SetLabelFont(42);
   st_stack_146->GetZaxis()->SetTitleOffset(1);
   st_stack_146->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_146);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,0.3553527);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,0.602481);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,0.8738611);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,1.016262);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,0.9246338);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,0.9064433);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,0.8613815);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,0.7518601);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,0.7397459);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,0.6657442);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,0.6688331);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,0.7278676);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,0.6752857);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,0.6836697);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,0.2834514);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,0.1178813);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,0.04740606);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,0.04233353);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,0.01455834);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,0.01527674);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,0.01062894);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,0.005865016);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,0.00514705);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,0.02566706);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,0.03272073);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,0.03992297);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,0.04319769);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,0.04117686);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,0.04081807);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,0.03968804);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,0.03692291);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,0.03675126);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,0.0350344);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,0.03494656);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,0.03636528);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,0.03474155);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,0.03560177);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,0.02221785);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,0.01488877);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,0.008737352);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,0.008720069);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,0.004909182);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,0.004916016);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,0.00427903);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,0.003081434);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,0.002998255);
   VbbHcc_both_Z_dR_stack_1->SetEntries(7351);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,0.1112792);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,0.2453595);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,0.3807506);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,0.4253506);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,0.3537498);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,0.2440499);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,0.181435);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,0.1523725);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,0.1450117);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,0.1325621);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,0.1404403);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,0.1490355);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,0.1554006);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,0.1472776);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,0.07239917);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,0.04220391);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,0.02833255);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,0.01190698);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,0.009933305);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,0.004911138);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,0.004148803);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,0.001612999);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,0.0007062636);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,0.0002349844);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,0.0002588714);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,0.005223349);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,0.007758049);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,0.009651164);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,0.01018222);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,0.009346395);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,0.007725794);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,0.00663888);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,0.006126796);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,0.005952435);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,0.005714236);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,0.005839287);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,0.006032675);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,0.006126968);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,0.005965424);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,0.004220302);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,0.003187813);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,0.002633673);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,0.001635518);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,0.001576642);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,0.001056858);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,0.0009885663);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,0.0006161884);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,0.0004047268);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,0.0002349844);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,0.0002588714);
   VbbHcc_both_Z_dR_stack_2->SetEntries(14825);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_17->Modified();
   Z_dR_both_17->cd();
   Z_dR_both_17->SetSelected(Z_dR_both_17);
}
