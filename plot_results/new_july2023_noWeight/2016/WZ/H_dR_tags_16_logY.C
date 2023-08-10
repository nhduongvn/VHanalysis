void H_dR_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Thu Aug 10 12:31:15 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.2,-1.432961,6.8,0.2629515);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLogy();
   H_dR_tags_16->SetLeftMargin(0.15);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_stack_7 = new TH1D("VbbHcc_tags_H_dR_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(3,0.6543518);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(4,0.4362346);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,0.4362346);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,0.3271759);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(9,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(10,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,0.3271759);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(15,0.2181173);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,0.2181173);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,0.4362346);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,0.2181173);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,0.5452932);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,0.2181173);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(21,0.2181173);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(24,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(26,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(27,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(28,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(30,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(3,0.267138);
   VbbHcc_tags_H_dR_stack_7->SetBinError(4,0.2181173);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,0.2181173);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,0.1888951);
   VbbHcc_tags_H_dR_stack_7->SetBinError(9,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(10,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,0.1888951);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(14,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(15,0.1542322);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,0.1542322);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,0.2181173);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,0.1542322);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,0.2438625);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,0.1542322);
   VbbHcc_tags_H_dR_stack_7->SetBinError(21,0.1542322);
   VbbHcc_tags_H_dR_stack_7->SetBinError(24,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(26,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(27,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(28,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(30,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
