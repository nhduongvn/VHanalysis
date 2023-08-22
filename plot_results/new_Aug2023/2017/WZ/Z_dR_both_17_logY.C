void Z_dR_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_both_17/Z_dR_both_17
//=========  (Tue Aug 22 09:18:16 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_17 = new TCanvas("Z_dR_both_17", "Z_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_17->SetHighLightColor(2);
   Z_dR_both_17->Range(-1.2,-1.327368,6.8,0.5954964);
   Z_dR_both_17->SetFillColor(0);
   Z_dR_both_17->SetBorderMode(0);
   Z_dR_both_17->SetBorderSize(2);
   Z_dR_both_17->SetLogy();
   Z_dR_both_17->SetLeftMargin(0.15);
   Z_dR_both_17->SetFrameBorderMode(0);
   Z_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_stack_7 = new TH1D("VbbHcc_both_Z_dR_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(3,1.335553);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(4,0.7396079);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(5,0.1465374);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(6,0.4237883);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(7,0.6717148);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(8,0.2275793);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(10,0.2711943);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(14,0.5182622);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(15,0.2529144);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(16,0.3092329);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(17,0.2329143);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(19,0.5645121);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(23,0.2454468);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(24,0.2774426);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(28,0.2962674);
   VbbHcc_both_Z_dR_stack_7->SetBinError(3,0.6113885);
   VbbHcc_both_Z_dR_stack_7->SetBinError(4,0.4377645);
   VbbHcc_both_Z_dR_stack_7->SetBinError(5,0.1465374);
   VbbHcc_both_Z_dR_stack_7->SetBinError(6,0.3060047);
   VbbHcc_both_Z_dR_stack_7->SetBinError(7,0.3933135);
   VbbHcc_both_Z_dR_stack_7->SetBinError(8,0.2275793);
   VbbHcc_both_Z_dR_stack_7->SetBinError(10,0.2711943);
   VbbHcc_both_Z_dR_stack_7->SetBinError(14,0.3682743);
   VbbHcc_both_Z_dR_stack_7->SetBinError(15,0.2529144);
   VbbHcc_both_Z_dR_stack_7->SetBinError(16,0.3092329);
   VbbHcc_both_Z_dR_stack_7->SetBinError(17,0.2329143);
   VbbHcc_both_Z_dR_stack_7->SetBinError(19,0.401993);
   VbbHcc_both_Z_dR_stack_7->SetBinError(23,0.2454468);
   VbbHcc_both_Z_dR_stack_7->SetBinError(24,0.2774426);
   VbbHcc_both_Z_dR_stack_7->SetBinError(28,0.2962674);
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
