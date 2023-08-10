void H_dPhi_both_16_logY()
{
//=========Macro generated from canvas: H_dPhi_both_16/H_dPhi_both_16
//=========  (Thu Aug 10 12:32:49 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_both_16 = new TCanvas("H_dPhi_both_16", "H_dPhi_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_both_16->SetHighLightColor(2);
   H_dPhi_both_16->Range(-0.8,-2.974023,4.533333,-1.874511);
   H_dPhi_both_16->SetFillColor(0);
   H_dPhi_both_16->SetBorderMode(0);
   H_dPhi_both_16->SetBorderSize(2);
   H_dPhi_both_16->SetLogy();
   H_dPhi_both_16->SetLeftMargin(0.15);
   H_dPhi_both_16->SetFrameBorderMode(0);
   H_dPhi_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dPhi_stack_11 = new TH1D("VbbHcc_both_H_dPhi_stack_11","",120,0,4);
   VbbHcc_both_H_dPhi_stack_11->SetBinContent(0,0.06017016);
   VbbHcc_both_H_dPhi_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinContent(3,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinContent(17,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinContent(19,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinContent(22,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinContent(34,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinContent(50,0.005470015);
   VbbHcc_both_H_dPhi_stack_11->SetBinContent(51,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinContent(54,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinContent(55,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinContent(56,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinContent(75,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinContent(81,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinError(0,0.01282832);
   VbbHcc_both_H_dPhi_stack_11->SetBinError(1,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinError(3,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinError(17,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinError(19,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinError(22,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinError(34,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinError(50,0.003867885);
   VbbHcc_both_H_dPhi_stack_11->SetBinError(51,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinError(54,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinError(55,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinError(56,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinError(75,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetBinError(81,0.002735007);
   VbbHcc_both_H_dPhi_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dPhi_stack_11->SetFillColor(ci);
   VbbHcc_both_H_dPhi_stack_11->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_both_H_dPhi_stack_11->GetXaxis()->SetRange(1,120);
   VbbHcc_both_H_dPhi_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dPhi_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_both_16->Modified();
   H_dPhi_both_16->cd();
   H_dPhi_both_16->SetSelected(H_dPhi_both_16);
}
