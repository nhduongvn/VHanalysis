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
   Z_jetmass_noJEC_algo_16->Range(-60,-1.27103,340,11.43927);
   Z_jetmass_noJEC_algo_16->SetFillColor(0);
   Z_jetmass_noJEC_algo_16->SetBorderMode(0);
   Z_jetmass_noJEC_algo_16->SetBorderSize(2);
   Z_jetmass_noJEC_algo_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC__699 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC__699","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(3,0.5701557);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(4,2.028848);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(5,5.472026);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(6,7.805014);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(7,9.684035);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(8,6.876589);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(9,6.375967);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(10,2.850628);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(11,3.808029);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(12,2.290192);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(13,1.610058);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(14,1.551078);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(15,1.642762);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(16,0.8107843);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(17,0.9308566);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(18,0.6375562);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(19,0.5194985);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(20,0.7816841);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(21,0.8373047);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(22,0.3465867);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(23,0.7094302);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(25,0.2521075);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(26,0.919444);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(27,0.3121181);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(28,0.4679477);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(29,0.1335872);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(30,0.189379);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(31,0.252761);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(32,0.1613143);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(33,0.1887559);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(34,0.2968476);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(35,0.2303118);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(36,0.1194824);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(37,0.2251751);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(39,0.1241487);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(40,0.2368994);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(42,0.1144466);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(43,0.1363788);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinContent(63,0.1170244);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(3,0.2340239);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(4,0.4578658);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(5,0.7526691);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(6,0.9006076);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(7,1.022739);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(8,0.8915984);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(9,0.8530724);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(10,0.5597626);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(11,0.6670555);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(12,0.5273494);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(13,0.4207558);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(14,0.4418735);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(15,0.4322724);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(16,0.3381243);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(17,0.3709039);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(18,0.260858);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(19,0.2608124);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(20,0.3200888);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(21,0.3463796);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(22,0.2025829);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(23,0.3185382);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(25,0.1789115);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(26,0.3308146);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(27,0.2226578);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(28,0.2770794);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(29,0.1335872);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(30,0.189379);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(31,0.1795477);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(32,0.1613143);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(33,0.1887559);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(34,0.210351);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(35,0.1628888);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(36,0.1194824);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(37,0.159223);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(39,0.1241487);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(40,0.16836);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(42,0.1144466);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(43,0.1363788);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetBinError(63,0.1170244);
   VbbHcc_algo_Z_jetmass_noJEC__699->SetEntries(573);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_jetmass_noJEC__699->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC__699->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_algo_Z_jetmass_noJEC__699->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_Z_jetmass_noJEC__699->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__699->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC__699->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__699->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__699->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__699->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__699->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC__699->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__699->Draw("HIST");
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
