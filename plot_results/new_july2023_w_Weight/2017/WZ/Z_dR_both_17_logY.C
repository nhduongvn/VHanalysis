void Z_dR_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_both_17/Z_dR_both_17
//=========  (Thu Aug 10 12:21:32 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_17 = new TCanvas("Z_dR_both_17", "Z_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_17->SetHighLightColor(2);
   Z_dR_both_17->Range(-1.2,-1.186872,6.8,0.5818458);
   Z_dR_both_17->SetFillColor(0);
   Z_dR_both_17->SetBorderMode(0);
   Z_dR_both_17->SetBorderSize(2);
   Z_dR_both_17->SetLogy();
   Z_dR_both_17->SetLeftMargin(0.15);
   Z_dR_both_17->SetFrameBorderMode(0);
   Z_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_stack_7 = new TH1D("VbbHcc_both_Z_dR_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(3,1.340989);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(4,0.8521563);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(5,0.1954472);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(6,0.4750702);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(7,0.77973);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(8,0.2572919);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(10,0.2655071);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(14,0.6199659);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(15,0.294848);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(16,0.302748);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(17,0.2715318);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(19,0.584361);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(23,0.2861422);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(24,0.3136654);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(28,0.2900543);
   VbbHcc_both_Z_dR_stack_7->SetBinError(3,0.6103554);
   VbbHcc_both_Z_dR_stack_7->SetBinError(4,0.5065196);
   VbbHcc_both_Z_dR_stack_7->SetBinError(5,0.1954472);
   VbbHcc_both_Z_dR_stack_7->SetBinError(6,0.34375);
   VbbHcc_both_Z_dR_stack_7->SetBinError(7,0.4569943);
   VbbHcc_both_Z_dR_stack_7->SetBinError(8,0.2572919);
   VbbHcc_both_Z_dR_stack_7->SetBinError(10,0.2655071);
   VbbHcc_both_Z_dR_stack_7->SetBinError(14,0.438445);
   VbbHcc_both_Z_dR_stack_7->SetBinError(15,0.294848);
   VbbHcc_both_Z_dR_stack_7->SetBinError(16,0.302748);
   VbbHcc_both_Z_dR_stack_7->SetBinError(17,0.2715318);
   VbbHcc_both_Z_dR_stack_7->SetBinError(19,0.4139108);
   VbbHcc_both_Z_dR_stack_7->SetBinError(23,0.2861422);
   VbbHcc_both_Z_dR_stack_7->SetBinError(24,0.3136654);
   VbbHcc_both_Z_dR_stack_7->SetBinError(28,0.2900543);
   VbbHcc_both_Z_dR_stack_7->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_stack_7->SetFillColor(ci);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->Draw("HIST");
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
