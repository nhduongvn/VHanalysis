#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_algo_16()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_algo_16/Z_jetmass_noJEC_algo_16
//=========  (Fri Sep  1 13:23:40 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_noJEC_algo_16 = new TCanvas("Z_jetmass_noJEC_algo_16", "Z_jetmass_noJEC_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_algo_16->SetHighLightColor(2);
   Z_jetmass_noJEC_algo_16->Range(-60,-0.007616069,340,0.06854461);
   Z_jetmass_noJEC_algo_16->SetFillColor(0);
   Z_jetmass_noJEC_algo_16->SetBorderMode(0);
   Z_jetmass_noJEC_algo_16->SetBorderSize(2);
   Z_jetmass_noJEC_algo_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC__705 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC__705","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(3,0.001275423);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(4,0.01208062);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(5,0.03252627);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(6,0.05802719);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(7,0.05099099);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(8,0.04354957);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(9,0.03700929);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(10,0.02339515);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(11,0.01427107);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(12,0.01035486);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(13,0.009133379);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(14,0.005256182);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(15,0.005029801);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(16,0.002649457);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(17,0.001519344);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(18,0.001794486);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(19,0.001176949);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(20,0.0005973017);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(21,0.0003397624);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(22,0.0003165277);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(23,0.0002508469);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(25,0.0004071765);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(26,0.001061326);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(29,0.0001845226);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(31,0.0003041355);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(32,0.0003202683);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(33,0.0003816022);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(37,0.0003155047);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinContent(47,0.0003125668);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(3,0.0005884585);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(4,0.001800623);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(5,0.002957478);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(6,0.003988065);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(7,0.003831911);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(8,0.003546704);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(9,0.00333286);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(10,0.002609843);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(11,0.002039);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(12,0.001763376);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(13,0.001696915);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(14,0.001247522);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(15,0.00122949);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(16,0.000954382);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(17,0.0006798114);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(18,0.0007333352);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(19,0.0006076094);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(20,0.0004248912);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(21,0.0003397624);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(22,0.0003165277);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(23,0.0002508469);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(25,0.0003212874);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(26,0.0006273068);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(29,0.0001845226);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(31,0.0003041355);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(32,0.0003202683);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(33,0.0003816022);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(37,0.0003155047);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetBinError(47,0.0003125668);
   VbbHcc_algo_Z_jetmass_noJEC__705->SetEntries(1132);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_jetmass_noJEC__705->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC__705->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_algo_Z_jetmass_noJEC__705->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_Z_jetmass_noJEC__705->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__705->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC__705->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__705->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__705->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__705->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__705->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC__705->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__705->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_algo_16->Modified();
   Z_jetmass_noJEC_algo_16->cd();
   Z_jetmass_noJEC_algo_16->SetSelected(Z_jetmass_noJEC_algo_16);
}
