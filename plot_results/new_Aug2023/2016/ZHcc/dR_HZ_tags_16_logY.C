void dR_HZ_tags_16_logY()
{
//=========Macro generated from canvas: dR_HZ_tags_16/dR_HZ_tags_16
//=========  (Tue Aug 22 09:16:16 2023) by ROOT version 6.14/09
   TCanvas *dR_HZ_tags_16 = new TCanvas("dR_HZ_tags_16", "dR_HZ_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_tags_16->SetHighLightColor(2);
   dR_HZ_tags_16->Range(-1.2,-3.194514,6.8,-1.79002);
   dR_HZ_tags_16->SetFillColor(0);
   dR_HZ_tags_16->SetBorderMode(0);
   dR_HZ_tags_16->SetBorderSize(2);
   dR_HZ_tags_16->SetLogy();
   dR_HZ_tags_16->SetLeftMargin(0.15);
   dR_HZ_tags_16->SetFrameBorderMode(0);
   dR_HZ_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_dR_HZ_stack_11 = new TH1D("VbbHcc_tags_dR_HZ_stack_11","",60,0,6);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(5,0.002209336);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(7,0.002251171);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(9,0.002477054);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(13,0.006134853);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(14,0.004050496);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(18,0.003126194);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(19,0.002036349);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(23,0.002082123);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(24,0.004477456);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(25,0.002381752);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(27,0.002108704);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(28,0.002369166);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(31,0.004559548);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(32,0.002332089);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(33,0.00442519);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(34,0.003891831);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(35,0.004430249);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(36,0.004068652);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(37,0.001765897);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(39,0.00193606);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(40,0.001982459);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(42,0.002083618);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(43,0.006194151);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(45,0.002067091);
   VbbHcc_tags_dR_HZ_stack_11->SetBinContent(60,0.002155655);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(5,0.002209336);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(7,0.002251171);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(9,0.002477054);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(13,0.003590567);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(14,0.002864241);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(18,0.003126194);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(19,0.002036349);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(23,0.002082123);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(24,0.003170202);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(25,0.002381752);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(27,0.002108704);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(28,0.002369166);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(31,0.003233101);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(32,0.002332089);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(33,0.003129302);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(34,0.002762945);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(35,0.00313292);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(36,0.00287993);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(37,0.001765897);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(39,0.00193606);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(40,0.001982459);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(42,0.002083618);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(43,0.003599112);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(45,0.002067091);
   VbbHcc_tags_dR_HZ_stack_11->SetBinError(60,0.002155655);
   VbbHcc_tags_dR_HZ_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_dR_HZ_stack_11->SetFillColor(ci);
   VbbHcc_tags_dR_HZ_stack_11->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_tags_dR_HZ_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_dR_HZ_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_dR_HZ_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_11->Draw("HIST");
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
