void H_dR_Bj1_both_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_both_16/H_dR_Bj1_both_16
//=========  (Tue Aug 22 09:18:36 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_16 = new TCanvas("H_dR_Bj1_both_16", "H_dR_Bj1_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_16->SetHighLightColor(2);
   H_dR_Bj1_both_16->Range(-1.2,-1.231683,6.8,-0.1321716);
   H_dR_Bj1_both_16->SetFillColor(0);
   H_dR_Bj1_both_16->SetBorderMode(0);
   H_dR_Bj1_both_16->SetBorderSize(2);
   H_dR_Bj1_both_16->SetLogy();
   H_dR_Bj1_both_16->SetLeftMargin(0.15);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(2,0.1511118);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(3,0.3022236);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(5,0.3022236);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(8,0.1511118);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(10,0.3022236);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(14,0.1511118);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(15,0.1511118);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(2,0.1511118);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(3,0.2137044);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(5,0.2137044);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(8,0.1511118);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(10,0.2137044);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(14,0.1511118);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(15,0.1511118);
   VbbHcc_both_H_dR_Bj1_stack_6->SetEntries(10);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj1_stack_6->SetFillColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_both_16->Modified();
   H_dR_Bj1_both_16->cd();
   H_dR_Bj1_both_16->SetSelected(H_dR_Bj1_both_16);
}
