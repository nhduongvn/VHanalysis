void Z_dPhi_both_16_logY()
{
//=========Macro generated from canvas: Z_dPhi_both_16/Z_dPhi_both_16
//=========  (Thu Aug 10 12:32:47 2023) by ROOT version 6.14/09
   TCanvas *Z_dPhi_both_16 = new TCanvas("Z_dPhi_both_16", "Z_dPhi_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_both_16->SetHighLightColor(2);
   Z_dPhi_both_16->Range(-0.8,-2.974023,4.533333,-1.874511);
   Z_dPhi_both_16->SetFillColor(0);
   Z_dPhi_both_16->SetBorderMode(0);
   Z_dPhi_both_16->SetBorderSize(2);
   Z_dPhi_both_16->SetLogy();
   Z_dPhi_both_16->SetLeftMargin(0.15);
   Z_dPhi_both_16->SetFrameBorderMode(0);
   Z_dPhi_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dPhi_stack_11 = new TH1D("VbbHcc_both_Z_dPhi_stack_11","",120,0,4);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(0,0.05470015);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(6,0.005470015);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(16,0.005470015);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(24,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(27,0.005470015);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(31,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(41,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(54,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(60,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(0,0.01223133);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(1,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(6,0.003867885);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(9,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(10,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(15,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(16,0.003867885);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(18,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(24,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(27,0.003867885);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(31,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(41,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(54,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(60,0.002735007);
   VbbHcc_both_Z_dPhi_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dPhi_stack_11->SetFillColor(ci);
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetRange(1,120);
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dPhi_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_both_16->Modified();
   Z_dPhi_both_16->cd();
   Z_dPhi_both_16->SetSelected(Z_dPhi_both_16);
}
