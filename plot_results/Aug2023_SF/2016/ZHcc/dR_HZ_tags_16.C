#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dR_HZ_tags_16()
{
//=========Macro generated from canvas: dR_HZ_tags_16/dR_HZ_tags_16
//=========  (Fri Sep  1 13:23:32 2023) by ROOT version 6.28/04
   TCanvas *dR_HZ_tags_16 = new TCanvas("dR_HZ_tags_16", "dR_HZ_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_tags_16->SetHighLightColor(2);
   dR_HZ_tags_16->Range(-1.2,-0.0009200315,6.8,0.008280283);
   dR_HZ_tags_16->SetFillColor(0);
   dR_HZ_tags_16->SetBorderMode(0);
   dR_HZ_tags_16->SetBorderSize(2);
   dR_HZ_tags_16->SetLeftMargin(0.15);
   dR_HZ_tags_16->SetFrameBorderMode(0);
   dR_HZ_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_dR_HZ__149 = new TH1D("VbbHcc_tags_dR_HZ__149","",60,0,6);
   VbbHcc_tags_dR_HZ__149->SetBinContent(5,0.002996246);
   VbbHcc_tags_dR_HZ__149->SetBinContent(7,0.002338156);
   VbbHcc_tags_dR_HZ__149->SetBinContent(9,0.003043712);
   VbbHcc_tags_dR_HZ__149->SetBinContent(13,0.007009764);
   VbbHcc_tags_dR_HZ__149->SetBinContent(14,0.003824549);
   VbbHcc_tags_dR_HZ__149->SetBinContent(18,0.002821577);
   VbbHcc_tags_dR_HZ__149->SetBinContent(19,0.001912616);
   VbbHcc_tags_dR_HZ__149->SetBinContent(23,0.001703818);
   VbbHcc_tags_dR_HZ__149->SetBinContent(24,0.004759073);
   VbbHcc_tags_dR_HZ__149->SetBinContent(25,0.002472895);
   VbbHcc_tags_dR_HZ__149->SetBinContent(27,0.002570627);
   VbbHcc_tags_dR_HZ__149->SetBinContent(28,0.002340957);
   VbbHcc_tags_dR_HZ__149->SetBinContent(31,0.004254315);
   VbbHcc_tags_dR_HZ__149->SetBinContent(32,0.00269847);
   VbbHcc_tags_dR_HZ__149->SetBinContent(33,0.004248014);
   VbbHcc_tags_dR_HZ__149->SetBinContent(34,0.003760271);
   VbbHcc_tags_dR_HZ__149->SetBinContent(35,0.004370892);
   VbbHcc_tags_dR_HZ__149->SetBinContent(36,0.0047328);
   VbbHcc_tags_dR_HZ__149->SetBinContent(37,0.001425773);
   VbbHcc_tags_dR_HZ__149->SetBinContent(39,0.001871144);
   VbbHcc_tags_dR_HZ__149->SetBinContent(40,0.002135123);
   VbbHcc_tags_dR_HZ__149->SetBinContent(42,0.002178175);
   VbbHcc_tags_dR_HZ__149->SetBinContent(43,0.005822425);
   VbbHcc_tags_dR_HZ__149->SetBinContent(45,0.001943164);
   VbbHcc_tags_dR_HZ__149->SetBinContent(60,0.002126481);
   VbbHcc_tags_dR_HZ__149->SetBinError(5,0.002996246);
   VbbHcc_tags_dR_HZ__149->SetBinError(7,0.002338156);
   VbbHcc_tags_dR_HZ__149->SetBinError(9,0.003043712);
   VbbHcc_tags_dR_HZ__149->SetBinError(13,0.00421827);
   VbbHcc_tags_dR_HZ__149->SetBinError(14,0.002711223);
   VbbHcc_tags_dR_HZ__149->SetBinError(18,0.002821577);
   VbbHcc_tags_dR_HZ__149->SetBinError(19,0.001912616);
   VbbHcc_tags_dR_HZ__149->SetBinError(23,0.001703818);
   VbbHcc_tags_dR_HZ__149->SetBinError(24,0.00337194);
   VbbHcc_tags_dR_HZ__149->SetBinError(25,0.002472895);
   VbbHcc_tags_dR_HZ__149->SetBinError(27,0.002570627);
   VbbHcc_tags_dR_HZ__149->SetBinError(28,0.002340957);
   VbbHcc_tags_dR_HZ__149->SetBinError(31,0.003025102);
   VbbHcc_tags_dR_HZ__149->SetBinError(32,0.00269847);
   VbbHcc_tags_dR_HZ__149->SetBinError(33,0.003016355);
   VbbHcc_tags_dR_HZ__149->SetBinError(34,0.002659748);
   VbbHcc_tags_dR_HZ__149->SetBinError(35,0.003096124);
   VbbHcc_tags_dR_HZ__149->SetBinError(36,0.003372957);
   VbbHcc_tags_dR_HZ__149->SetBinError(37,0.001425773);
   VbbHcc_tags_dR_HZ__149->SetBinError(39,0.001871144);
   VbbHcc_tags_dR_HZ__149->SetBinError(40,0.002135123);
   VbbHcc_tags_dR_HZ__149->SetBinError(42,0.002178175);
   VbbHcc_tags_dR_HZ__149->SetBinError(43,0.003413309);
   VbbHcc_tags_dR_HZ__149->SetBinError(45,0.001943164);
   VbbHcc_tags_dR_HZ__149->SetBinError(60,0.002126481);
   VbbHcc_tags_dR_HZ__149->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_dR_HZ__149->SetFillColor(ci);
   VbbHcc_tags_dR_HZ__149->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_tags_dR_HZ__149->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_dR_HZ__149->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ__149->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_dR_HZ__149->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ__149->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ__149->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ__149->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ__149->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_dR_HZ__149->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ__149->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_tags_16->Modified();
   dR_HZ_tags_16->cd();
   dR_HZ_tags_16->SetSelected(dR_HZ_tags_16);
}
