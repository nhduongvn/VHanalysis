#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_both_16()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_16/Z_jetmass_noJEC_both_16
//=========  (Fri Sep  1 13:23:46 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_noJEC_both_16 = new TCanvas("Z_jetmass_noJEC_both_16", "Z_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_16->SetHighLightColor(2);
   Z_jetmass_noJEC_both_16->Range(-60,-0.002749905,340,0.02474915);
   Z_jetmass_noJEC_both_16->SetFillColor(0);
   Z_jetmass_noJEC_both_16->SetBorderMode(0);
   Z_jetmass_noJEC_both_16->SetBorderSize(2);
   Z_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC__1064 = new TH1D("VbbHcc_both_Z_jetmass_noJEC__1064","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinContent(4,0.007749462);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinContent(5,0.01408457);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinContent(6,0.02095166);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinContent(7,0.01398995);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinContent(8,0.004355027);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinContent(9,0.001901718);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinContent(10,0.004688507);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinContent(11,0.002472895);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinContent(13,0.004883123);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinContent(23,0.002340957);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinContent(37,0.001943164);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinError(4,0.004520073);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinError(5,0.005460496);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinError(6,0.006725464);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinError(7,0.005866556);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinError(8,0.003080315);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinError(9,0.001901718);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinError(10,0.003315476);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinError(11,0.002472895);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinError(13,0.003455181);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinError(23,0.002340957);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetBinError(37,0.001943164);
   VbbHcc_both_Z_jetmass_noJEC__1064->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_jetmass_noJEC__1064->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC__1064->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC__1064->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC__1064->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1064->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_noJEC__1064->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1064->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1064->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1064->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1064->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_noJEC__1064->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1064->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_16->Modified();
   Z_jetmass_noJEC_both_16->cd();
   Z_jetmass_noJEC_both_16->SetSelected(Z_jetmass_noJEC_both_16);
}
