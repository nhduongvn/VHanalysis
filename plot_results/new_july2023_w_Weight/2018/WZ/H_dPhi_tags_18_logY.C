void H_dPhi_tags_18_logY()
{
//=========Macro generated from canvas: H_dPhi_tags_18/H_dPhi_tags_18
//=========  (Thu Aug 10 12:20:07 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_tags_18 = new TCanvas("H_dPhi_tags_18", "H_dPhi_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_tags_18->SetHighLightColor(2);
   H_dPhi_tags_18->Range(-0.8,-0.8616967,4.533333,0.3919359);
   H_dPhi_tags_18->SetFillColor(0);
   H_dPhi_tags_18->SetBorderMode(0);
   H_dPhi_tags_18->SetBorderSize(2);
   H_dPhi_tags_18->SetLogy();
   H_dPhi_tags_18->SetLeftMargin(0.15);
   H_dPhi_tags_18->SetFrameBorderMode(0);
   H_dPhi_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dPhi_stack_7 = new TH1D("VbbHcc_tags_H_dPhi_stack_7","",120,0,4);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(0,8.955609);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(3,0.3767055);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(10,0.5144501);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(13,0.975043);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(15,0.5166625);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(17,0.3941116);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(18,0.4604326);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(31,0.3816532);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(43,0.5166625);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(51,0.975043);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(73,0.3670258);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(0,2.143385);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(3,0.3767055);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(10,0.5144501);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(13,0.6895725);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(15,0.5166625);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(17,0.3941116);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(18,0.4604326);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(31,0.3816532);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(43,0.5166625);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(51,0.6895725);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(73,0.3670258);
   VbbHcc_tags_H_dPhi_stack_7->SetEntries(32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dPhi_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dPhi_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_tags_18->Modified();
   H_dPhi_tags_18->cd();
   H_dPhi_tags_18->SetSelected(H_dPhi_tags_18);
}
