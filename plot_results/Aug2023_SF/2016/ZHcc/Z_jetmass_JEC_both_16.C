#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_both_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_16/Z_jetmass_JEC_both_16
//=========  (Fri Sep  1 13:23:46 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_JEC_both_16 = new TCanvas("Z_jetmass_JEC_both_16", "Z_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_16->SetHighLightColor(2);
   Z_jetmass_JEC_both_16->Range(-60,-0.002040869,340,0.01836782);
   Z_jetmass_JEC_both_16->SetFillColor(0);
   Z_jetmass_JEC_both_16->SetBorderMode(0);
   Z_jetmass_JEC_both_16->SetBorderSize(2);
   Z_jetmass_JEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC__1079 = new TH1D("VbbHcc_both_Z_jetmass_JEC__1079","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinContent(4,0.00561434);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinContent(5,0.01470356);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinContent(6,0.01554947);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinContent(7,0.0138545);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinContent(8,0.01118403);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinContent(9,0.004444891);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinContent(11,0.004842991);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinContent(12,0.002530526);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinContent(14,0.002352597);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinContent(22,0.002340957);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinContent(36,0.001943164);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinError(4,0.003984007);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinError(5,0.005663665);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinError(6,0.005580671);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinError(7,0.005757188);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinError(8,0.005122582);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinError(9,0.003145941);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinError(11,0.003425283);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinError(12,0.002530526);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinError(14,0.002352597);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinError(22,0.002340957);
   VbbHcc_both_Z_jetmass_JEC__1079->SetBinError(36,0.001943164);
   VbbHcc_both_Z_jetmass_JEC__1079->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_jetmass_JEC__1079->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC__1079->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC__1079->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC__1079->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC__1079->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_JEC__1079->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC__1079->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC__1079->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC__1079->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC__1079->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_JEC__1079->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC__1079->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_16->Modified();
   Z_jetmass_JEC_both_16->cd();
   Z_jetmass_JEC_both_16->SetSelected(Z_jetmass_JEC_both_16);
}
