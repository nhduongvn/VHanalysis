void Z_dPhi_both_18_logY()
{
//=========Macro generated from canvas: Z_dPhi_both_18/Z_dPhi_both_18
//=========  (Thu Aug 10 10:43:06 2023) by ROOT version 6.14/09
   TCanvas *Z_dPhi_both_18 = new TCanvas("Z_dPhi_both_18", "Z_dPhi_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_both_18->SetHighLightColor(2);
   Z_dPhi_both_18->Range(-0.8,-1.014729,4.533333,0.0895255);
   Z_dPhi_both_18->SetFillColor(0);
   Z_dPhi_both_18->SetBorderMode(0);
   Z_dPhi_both_18->SetBorderSize(2);
   Z_dPhi_both_18->SetLogy();
   Z_dPhi_both_18->SetLeftMargin(0.15);
   Z_dPhi_both_18->SetFrameBorderMode(0);
   Z_dPhi_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dPhi_stack_6 = new TH1D("VbbHcc_both_Z_dPhi_stack_6","",120,0,4);
   VbbHcc_both_Z_dPhi_stack_6->SetBinContent(0,1.152131);
   VbbHcc_both_Z_dPhi_stack_6->SetBinContent(11,0.2493026);
   VbbHcc_both_Z_dPhi_stack_6->SetBinContent(12,0.3743199);
   VbbHcc_both_Z_dPhi_stack_6->SetBinContent(20,0.5029805);
   VbbHcc_both_Z_dPhi_stack_6->SetBinError(0,0.8232768);
   VbbHcc_both_Z_dPhi_stack_6->SetBinError(11,0.2493026);
   VbbHcc_both_Z_dPhi_stack_6->SetBinError(12,0.3743199);
   VbbHcc_both_Z_dPhi_stack_6->SetBinError(20,0.5029805);
   VbbHcc_both_Z_dPhi_stack_6->SetEntries(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dPhi_stack_6->SetFillColor(ci);
   VbbHcc_both_Z_dPhi_stack_6->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_both_Z_dPhi_stack_6->GetXaxis()->SetRange(1,120);
   VbbHcc_both_Z_dPhi_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dPhi_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_both_18->Modified();
   Z_dPhi_both_18->cd();
   Z_dPhi_both_18->SetSelected(Z_dPhi_both_18);
}
