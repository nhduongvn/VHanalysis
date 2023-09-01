#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dPhi_both_16()
{
//=========Macro generated from canvas: Z_dPhi_both_16/Z_dPhi_both_16
//=========  (Fri Sep  1 13:23:43 2023) by ROOT version 6.28/04
   TCanvas *Z_dPhi_both_16 = new TCanvas("Z_dPhi_both_16", "Z_dPhi_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_both_16->SetHighLightColor(2);
   Z_dPhi_both_16->Range(-0.8,-0.0005741102,4.533333,0.005166992);
   Z_dPhi_both_16->SetFillColor(0);
   Z_dPhi_both_16->SetBorderMode(0);
   Z_dPhi_both_16->SetBorderSize(2);
   Z_dPhi_both_16->SetLeftMargin(0.15);
   Z_dPhi_both_16->SetFrameBorderMode(0);
   Z_dPhi_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dPhi__824 = new TH1D("VbbHcc_both_Z_dPhi__824","",120,0,4);
   VbbHcc_both_Z_dPhi__824->SetBinContent(0,0.04578181);
   VbbHcc_both_Z_dPhi__824->SetBinContent(1,0.001516135);
   VbbHcc_both_Z_dPhi__824->SetBinContent(6,0.004374173);
   VbbHcc_both_Z_dPhi__824->SetBinContent(9,0.001871144);
   VbbHcc_both_Z_dPhi__824->SetBinContent(10,0.002352597);
   VbbHcc_both_Z_dPhi__824->SetBinContent(15,0.002338156);
   VbbHcc_both_Z_dPhi__824->SetBinContent(16,0.003452329);
   VbbHcc_both_Z_dPhi__824->SetBinContent(18,0.002135123);
   VbbHcc_both_Z_dPhi__824->SetBinContent(24,0.002126481);
   VbbHcc_both_Z_dPhi__824->SetBinContent(27,0.003776169);
   VbbHcc_both_Z_dPhi__824->SetBinContent(31,0.002570627);
   VbbHcc_both_Z_dPhi__824->SetBinContent(41,0.002664007);
   VbbHcc_both_Z_dPhi__824->SetBinContent(54,0.00269847);
   VbbHcc_both_Z_dPhi__824->SetBinContent(60,0.001703818);
   VbbHcc_both_Z_dPhi__824->SetBinError(0,0.01042885);
   VbbHcc_both_Z_dPhi__824->SetBinError(1,0.001516135);
   VbbHcc_both_Z_dPhi__824->SetBinError(6,0.003098578);
   VbbHcc_both_Z_dPhi__824->SetBinError(9,0.001871144);
   VbbHcc_both_Z_dPhi__824->SetBinError(10,0.002352597);
   VbbHcc_both_Z_dPhi__824->SetBinError(15,0.002338156);
   VbbHcc_both_Z_dPhi__824->SetBinError(16,0.002456283);
   VbbHcc_both_Z_dPhi__824->SetBinError(18,0.002135123);
   VbbHcc_both_Z_dPhi__824->SetBinError(24,0.002126481);
   VbbHcc_both_Z_dPhi__824->SetBinError(27,0.002671291);
   VbbHcc_both_Z_dPhi__824->SetBinError(31,0.002570627);
   VbbHcc_both_Z_dPhi__824->SetBinError(41,0.002664007);
   VbbHcc_both_Z_dPhi__824->SetBinError(54,0.00269847);
   VbbHcc_both_Z_dPhi__824->SetBinError(60,0.001703818);
   VbbHcc_both_Z_dPhi__824->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dPhi__824->SetFillColor(ci);
   VbbHcc_both_Z_dPhi__824->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_both_Z_dPhi__824->GetXaxis()->SetRange(1,120);
   VbbHcc_both_Z_dPhi__824->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi__824->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dPhi__824->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi__824->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi__824->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi__824->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi__824->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dPhi__824->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi__824->Draw("HIST");
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
