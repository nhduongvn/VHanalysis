void H_dR_both_16_logY()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Tue Aug 22 09:18:17 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-1.65995,6.8,0.298208);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLogy();
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_7 = new TH1D("VbbHcc_both_H_dR_stack_7","",30,0,6);
   VbbHcc_both_H_dR_stack_7->SetBinContent(3,0.6681028);
   VbbHcc_both_H_dR_stack_7->SetBinContent(4,0.26109);
   VbbHcc_both_H_dR_stack_7->SetBinContent(5,0.1827233);
   VbbHcc_both_H_dR_stack_7->SetBinContent(6,0.1584265);
   VbbHcc_both_H_dR_stack_7->SetBinContent(7,0.177352);
   VbbHcc_both_H_dR_stack_7->SetBinContent(8,0.1943154);
   VbbHcc_both_H_dR_stack_7->SetBinContent(10,0.1730083);
   VbbHcc_both_H_dR_stack_7->SetBinContent(11,0.2720608);
   VbbHcc_both_H_dR_stack_7->SetBinContent(12,0.1759776);
   VbbHcc_both_H_dR_stack_7->SetBinContent(13,0.3584957);
   VbbHcc_both_H_dR_stack_7->SetBinContent(14,0.3449823);
   VbbHcc_both_H_dR_stack_7->SetBinContent(15,0.2667138);
   VbbHcc_both_H_dR_stack_7->SetBinContent(16,0.5513148);
   VbbHcc_both_H_dR_stack_7->SetBinContent(17,0.2419888);
   VbbHcc_both_H_dR_stack_7->SetBinContent(18,0.1772511);
   VbbHcc_both_H_dR_stack_7->SetBinContent(22,0.09353649);
   VbbHcc_both_H_dR_stack_7->SetBinContent(25,0.0686903);
   VbbHcc_both_H_dR_stack_7->SetBinError(3,0.2537862);
   VbbHcc_both_H_dR_stack_7->SetBinError(4,0.1507716);
   VbbHcc_both_H_dR_stack_7->SetBinError(5,0.1292113);
   VbbHcc_both_H_dR_stack_7->SetBinError(6,0.1120588);
   VbbHcc_both_H_dR_stack_7->SetBinError(7,0.1254595);
   VbbHcc_both_H_dR_stack_7->SetBinError(8,0.137456);
   VbbHcc_both_H_dR_stack_7->SetBinError(10,0.1229465);
   VbbHcc_both_H_dR_stack_7->SetBinError(11,0.1578516);
   VbbHcc_both_H_dR_stack_7->SetBinError(12,0.1251979);
   VbbHcc_both_H_dR_stack_7->SetBinError(13,0.1793222);
   VbbHcc_both_H_dR_stack_7->SetBinError(14,0.17314);
   VbbHcc_both_H_dR_stack_7->SetBinError(15,0.1547797);
   VbbHcc_both_H_dR_stack_7->SetBinError(16,0.2256159);
   VbbHcc_both_H_dR_stack_7->SetBinError(17,0.1480706);
   VbbHcc_both_H_dR_stack_7->SetBinError(18,0.1259673);
   VbbHcc_both_H_dR_stack_7->SetBinError(22,0.09353649);
   VbbHcc_both_H_dR_stack_7->SetBinError(25,0.0686903);
   VbbHcc_both_H_dR_stack_7->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_stack_7->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
