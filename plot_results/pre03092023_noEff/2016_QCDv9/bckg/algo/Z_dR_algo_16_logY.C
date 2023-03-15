#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_16_logY()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Thu Feb 16 10:37:39 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(-1.310117,-0.6887609,7.029799,8.329977);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetFillStyle(4000);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetLogy();
   Z_dR_algo_16->SetLeftMargin(0.15709);
   Z_dR_algo_16->SetRightMargin(0.1234783);
   Z_dR_algo_16->SetBottomMargin(0.12);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.209032e+07);
   
   TH1F *st_stack_81 = new TH1F("st_stack_81","",30,0,6);
   st_stack_81->SetMinimum(2.474501);
   st_stack_81->SetMaximum(2.679805e+07);
   st_stack_81->SetDirectory(0);
   st_stack_81->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_81->SetLineColor(ci);
   st_stack_81->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_81->GetXaxis()->SetRange(1,30);
   st_stack_81->GetXaxis()->SetLabelFont(42);
   st_stack_81->GetXaxis()->SetTitleOffset(1);
   st_stack_81->GetXaxis()->SetTitleFont(42);
   st_stack_81->GetYaxis()->SetTitle("Events/0.2");
   st_stack_81->GetYaxis()->SetLabelFont(42);
   st_stack_81->GetYaxis()->SetTitleSize(0.037);
   st_stack_81->GetYaxis()->SetTitleFont(42);
   st_stack_81->GetZaxis()->SetLabelFont(42);
   st_stack_81->GetZaxis()->SetTitleOffset(1);
   st_stack_81->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_81);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,10.35694);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,101962.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,118639.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,105589.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,60708.34);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,66130.66);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,43021.85);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,47908.18);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,45853.44);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,45361.07);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,38392.83);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,28638.08);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,34726.68);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,31779.49);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,19597.71);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,13103.03);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,10980.12);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,9174.697);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,23724.98);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,3236.056);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,1926.252);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,510.1551);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,46.40753);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,47.06785);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,3.377185);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,6.808263);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,8.756279);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,7177.213);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,9366.437);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,24645.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,6212.151);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,6616.703);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,4352.471);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,5838.247);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,5785.21);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,6743.679);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,5471.668);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,3712.526);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,5170.854);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,5125.869);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,3248.631);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,3505.701);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,3434.201);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,2412);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,20597.22);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,2118.979);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,1692.186);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,312.8365);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,27.34435);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,31.17255);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,3.377185);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,6.223524);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(21684);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,1.387003);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,1095.639);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,2263.753);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,2986.836);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,3565.858);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,3997.844);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,4195.308);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,4137.554);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,3966.291);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,3675.191);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,3393.536);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,3052.89);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,2753.571);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,2529.793);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,2198.778);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,1001.998);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,500.6126);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,246.3654);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,123.4619);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,59.10112);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,28.04799);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,11.33649);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,4.646231);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,1.4718);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,0.5466703);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.1486074);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.3097715);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,8.834972);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,12.68246);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,14.55116);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,15.8871);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,16.77597);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,17.15944);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,17.00683);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,16.62285);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,15.96949);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,15.31242);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,14.49671);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,13.73777);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,13.16672);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,12.25089);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,8.272523);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,5.815014);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,4.0916);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,2.869107);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,1.98479);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,1.357584);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,0.8653273);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,0.5474944);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.3156627);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.1784008);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.1050964);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(695813);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
