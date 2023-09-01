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
   Z_jetmass_JEC_algo_16->Range(-60,-0.007839529,340,0.07055575);
   Z_jetmass_JEC_algo_16->SetFillColor(0);
   Z_jetmass_JEC_algo_16->SetBorderMode(0);
   Z_jetmass_JEC_algo_16->SetBorderSize(2);
   Z_jetmass_JEC_algo_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_algo_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC__720 = new TH1D("VbbHcc_algo_Z_jetmass_JEC__720","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(3,0.0008568483);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(4,0.005541407);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(5,0.02801143);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(6,0.05372548);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(7,0.05972974);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(8,0.04630274);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(9,0.03688026);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(10,0.02555249);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(11,0.01676268);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(12,0.01043718);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(13,0.008637445);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(14,0.005916651);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(15,0.003734916);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(16,0.003573806);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(17,0.00170271);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(18,0.000609283);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(19,0.001884304);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(20,0.0001643821);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(21,0.0006562901);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(22,0.0006136002);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(23,0.0002508469);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(25,0.000304408);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(26,0.001061326);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(28,0.0001027685);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(29,0.0001845226);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(32,0.0003202683);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(33,0.0006857378);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(36,0.0003155047);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinContent(45,0.0003125668);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(3,0.0004959248);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(4,0.001204486);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(5,0.002734333);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(6,0.003848942);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(7,0.004120729);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(8,0.00366121);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(9,0.003306408);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(10,0.002733792);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(11,0.002221218);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(12,0.001774878);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(13,0.001624878);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(14,0.00134855);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(15,0.001104398);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(16,0.001033287);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(17,0.0006991621);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(18,0.0004316987);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(19,0.0007722653);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(20,0.0001643821);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(21,0.0004643579);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(22,0.0004352758);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(23,0.0002508469);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(25,0.000304408);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(26,0.0006273068);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(28,0.0001027685);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(29,0.0001845226);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(32,0.0003202683);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(33,0.0004879741);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(36,0.0003155047);
   VbbHcc_algo_Z_jetmass_JEC__720->SetBinError(45,0.0003125668);
   VbbHcc_algo_Z_jetmass_JEC__720->SetEntries(1132);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_jetmass_JEC__720->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC__720->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_algo_Z_jetmass_JEC__720->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_Z_jetmass_JEC__720->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC__720->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC__720->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC__720->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC__720->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC__720->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC__720->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC__720->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC__720->Draw("HIST");
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
