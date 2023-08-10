void H_dR_Bj0_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_16/H_dR_Bj0_tags_16
//=========  (Thu Aug 10 12:20:11 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_tags_16 = new TCanvas("H_dR_Bj0_tags_16", "H_dR_Bj0_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tags_16->SetHighLightColor(2);
   H_dR_Bj0_tags_16->Range(-1.2,-3.066568,6.8,-1.041603);
   H_dR_Bj0_tags_16->SetFillColor(0);
   H_dR_Bj0_tags_16->SetBorderMode(0);
   H_dR_Bj0_tags_16->SetBorderSize(2);
   H_dR_Bj0_tags_16->SetLogy();
   H_dR_Bj0_tags_16->SetLeftMargin(0.15);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(2,0.01641004);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(3,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(4,0.03008508);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(5,0.008205022);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(6,0.008205022);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(7,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(9,0.005470015);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(16,0.008205022);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(1,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(2,0.006699373);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(3,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(4,0.009070994);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(5,0.004737172);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(6,0.004737172);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(7,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(9,0.003867885);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(10,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(13,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(14,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(15,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(16,0.004737172);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(18,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_tags_16->Modified();
   H_dR_Bj0_tags_16->cd();
   H_dR_Bj0_tags_16->SetSelected(H_dR_Bj0_tags_16);
}
