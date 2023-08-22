void H_dPhi_both_17_logY()
{
//=========Macro generated from canvas: H_dPhi_both_17/H_dPhi_both_17
//=========  (Tue Aug 22 09:18:24 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_both_17 = new TCanvas("H_dPhi_both_17", "H_dPhi_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_both_17->SetHighLightColor(2);
   H_dPhi_both_17->Range(-0.8,-1.176343,4.533333,0.1668224);
   H_dPhi_both_17->SetFillColor(0);
   H_dPhi_both_17->SetBorderMode(0);
   H_dPhi_both_17->SetBorderSize(2);
   H_dPhi_both_17->SetLogy();
   H_dPhi_both_17->SetLeftMargin(0.15);
   H_dPhi_both_17->SetFrameBorderMode(0);
   H_dPhi_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dPhi_stack_7 = new TH1D("VbbHcc_both_H_dPhi_stack_7","",120,0,4);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(0,2.524884);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(3,0.2774426);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(10,0.181553);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(11,0.2167551);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(12,0.2734067);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(21,0.2673569);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(61,0.2364404);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(64,0.2275793);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(67,0.2557154);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(73,0.5687965);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(84,0.2454468);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(85,0.3388179);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(87,0.2849003);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(92,0.3176054);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(94,0.2962674);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(0,0.7821738);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(3,0.2774426);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(10,0.181553);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(11,0.2167551);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(12,0.2734067);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(21,0.2673569);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(61,0.2364404);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(64,0.2275793);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(67,0.2557154);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(73,0.4046569);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(84,0.2454468);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(85,0.3388179);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(87,0.2849003);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(92,0.3176054);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(94,0.2962674);
   VbbHcc_both_H_dPhi_stack_7->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dPhi_stack_7->SetFillColor(ci);
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetRange(1,120);
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dPhi_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_both_17->Modified();
   H_dPhi_both_17->cd();
   H_dPhi_both_17->SetSelected(H_dPhi_both_17);
}
