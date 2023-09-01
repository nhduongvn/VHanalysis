#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_algo_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_algo_16/Z_jetmass_JEC_algo_16
//=========  (Fri Sep  1 13:23:41 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_JEC_algo_16 = new TCanvas("Z_jetmass_JEC_algo_16", "Z_jetmass_JEC_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_algo_16->SetHighLightColor(2);
   Z_jetmass_JEC_algo_16->Range(-60,-0.02096067,340,0.188646);
   Z_jetmass_JEC_algo_16->SetFillColor(0);
   Z_jetmass_JEC_algo_16->SetBorderMode(0);
   Z_jetmass_JEC_algo_16->SetBorderSize(2);
   Z_jetmass_JEC_algo_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_algo_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC__719 = new TH1D("VbbHcc_algo_Z_jetmass_JEC__719","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(4,0.01710964);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(5,0.05794514);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(6,0.1597003);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(7,0.1003752);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(8,0.09001557);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(9,0.104925);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(10,0.06773961);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(11,0.047725);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(12,0.01276996);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(13,0.02132222);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(14,0.01416549);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(15,0.01300296);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(16,0.00930363);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(17,0.002388994);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(18,0.005642651);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(20,0.00428192);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(21,0.006808607);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(22,0.004825231);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(24,0.005343256);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(25,0.004674434);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(29,0.002447819);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(43,0.00219101);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(44,0.001943164);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinContent(47,0.002606182);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(4,0.005915772);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(5,0.01062965);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(6,0.01856381);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(7,0.01453171);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(8,0.01433882);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(9,0.01526216);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(10,0.01224087);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(11,0.01074826);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(12,0.006870377);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(13,0.007132036);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(14,0.005795953);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(15,0.005638587);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(16,0.004712288);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(17,0.002388994);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(18,0.003433728);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(20,0.003027901);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(21,0.003907525);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(22,0.003440988);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(24,0.00377826);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(25,0.003315833);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(29,0.002447819);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(43,0.00219101);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(44,0.001943164);
   VbbHcc_algo_Z_jetmass_JEC__719->SetBinError(47,0.002606182);
   VbbHcc_algo_Z_jetmass_JEC__719->SetEntries(376);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_JEC__719->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC__719->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_algo_Z_jetmass_JEC__719->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_Z_jetmass_JEC__719->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC__719->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC__719->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC__719->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC__719->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC__719->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC__719->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC__719->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC__719->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_algo_16->Modified();
   Z_jetmass_JEC_algo_16->cd();
   Z_jetmass_JEC_algo_16->SetSelected(Z_jetmass_JEC_algo_16);
}
