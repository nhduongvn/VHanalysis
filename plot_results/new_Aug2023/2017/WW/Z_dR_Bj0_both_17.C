void Z_dR_Bj0_both_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_17/Z_dR_Bj0_both_17
//=========  (Tue Aug 22 09:23:08 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_17 = new TCanvas("Z_dR_Bj0_both_17", "Z_dR_Bj0_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_17->SetHighLightColor(2);
   Z_dR_Bj0_both_17->Range(-1.2,-0.0827678,6.8,0.7449102);
   Z_dR_Bj0_both_17->SetFillColor(0);
   Z_dR_Bj0_both_17->SetBorderMode(0);
   Z_dR_Bj0_both_17->SetBorderSize(2);
   Z_dR_Bj0_both_17->SetLeftMargin(0.15);
   Z_dR_Bj0_both_17->SetFrameBorderMode(0);
   Z_dR_Bj0_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(3,0.6306118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(5,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(7,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(3,0.4459099);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(5,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(7,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(11,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetEntries(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetFillColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_both_17->Modified();
   Z_dR_Bj0_both_17->cd();
   Z_dR_Bj0_both_17->SetSelected(Z_dR_Bj0_both_17);
}
