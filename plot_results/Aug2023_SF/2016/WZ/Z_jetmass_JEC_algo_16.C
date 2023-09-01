#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_algo_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_algo_16/Z_jetmass_JEC_algo_16
//=========  (Fri Sep  1 13:23:40 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_JEC_algo_16 = new TCanvas("Z_jetmass_JEC_algo_16", "Z_jetmass_JEC_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_algo_16->SetHighLightColor(2);
   Z_jetmass_JEC_algo_16->Range(-60,-2.115986,340,19.04387);
   Z_jetmass_JEC_algo_16->SetFillColor(0);
   Z_jetmass_JEC_algo_16->SetBorderMode(0);
   Z_jetmass_JEC_algo_16->SetBorderSize(2);
   Z_jetmass_JEC_algo_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_algo_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC__715 = new TH1D("VbbHcc_algo_Z_jetmass_JEC__715","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(2,0.08642828);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(3,0.2062539);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(4,2.381136);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(5,11.21692);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(6,16.00914);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(7,16.1218);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(8,14.75752);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(9,9.014264);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(10,6.77965);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(11,4.869466);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(12,3.669027);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(13,2.651374);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(14,2.480838);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(15,2.12043);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(16,1.413445);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(17,1.921058);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(18,1.604504);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(19,0.577711);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(20,1.385493);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(21,0.104652);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(22,0.667659);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(23,0.20189);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(24,0.5070365);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(25,0.3001623);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(26,0.2234824);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(28,0.09143661);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(29,0.09076172);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(30,0.09294618);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(31,0.09908567);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(33,0.195077);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(35,0.0674637);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(36,0.191494);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(40,0.1047485);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(42,0.1160069);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(43,0.3158708);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(51,0.1675035);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinContent(59,0.1285073);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(2,0.08642828);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(3,0.1499044);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(4,0.4680015);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(5,0.9733963);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(6,1.178441);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(7,1.204771);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(8,1.164535);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(9,0.9059972);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(10,0.8002284);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(11,0.6830929);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(12,0.5951139);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(13,0.5061735);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(14,0.4819484);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(15,0.456257);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(16,0.3899332);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(17,0.4575669);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(18,0.4051787);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(19,0.2382951);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(20,0.3877295);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(21,0.104652);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(22,0.274494);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(23,0.1432296);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(24,0.2273573);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(25,0.1758334);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(26,0.1593264);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(28,0.09143661);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(29,0.09076172);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(30,0.09294618);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(31,0.09908567);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(33,0.1379734);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(35,0.0674637);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(36,0.1377165);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(40,0.1047485);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(42,0.1160069);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(43,0.1868123);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(51,0.1203655);
   VbbHcc_algo_Z_jetmass_JEC__715->SetBinError(59,0.1285073);
   VbbHcc_algo_Z_jetmass_JEC__715->SetEntries(1159);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_jetmass_JEC__715->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC__715->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_algo_Z_jetmass_JEC__715->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_Z_jetmass_JEC__715->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC__715->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC__715->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC__715->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC__715->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC__715->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC__715->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC__715->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC__715->Draw("HIST");
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
