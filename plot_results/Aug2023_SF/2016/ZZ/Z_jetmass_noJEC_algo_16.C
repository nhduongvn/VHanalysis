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
   Z_jetmass_noJEC_algo_16->Range(-60,-3.166786,340,28.50107);
   Z_jetmass_noJEC_algo_16->SetFillColor(0);
   Z_jetmass_noJEC_algo_16->SetBorderMode(0);
   Z_jetmass_noJEC_algo_16->SetBorderSize(2);
   Z_jetmass_noJEC_algo_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC__701 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC__701","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(3,0.6618592);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(4,5.664746);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(5,19.92084);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(6,21.1824);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(7,24.12789);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(8,15.63468);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(9,13.04189);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(10,8.0433);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(11,5.35771);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(12,4.213688);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(13,2.837265);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(14,3.277828);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(15,2.097847);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(16,0.9030505);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(17,0.856522);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(18,1.044158);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(19,0.2057941);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(20,0.4343802);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(21,0.2690476);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(22,0.725124);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(23,0.7634929);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(26,0.4976394);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(28,0.2137621);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(34,0.2429973);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(37,0.198683);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(38,0.7070267);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(46,0.2470683);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(47,0.2937418);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(48,0.2576367);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinContent(80,0.3141509);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(3,0.3344428);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(4,1.119209);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(5,2.0089);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(6,2.062485);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(7,2.242684);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(8,1.816356);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(9,1.67705);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(10,1.297471);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(11,1.082725);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(12,0.9614702);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(13,0.7632704);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(14,0.8504713);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(15,0.6726416);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(16,0.4535347);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(17,0.4329118);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(18,0.4729773);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(19,0.2057941);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(20,0.3082353);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(21,0.2690476);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(22,0.3892906);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(23,0.453393);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(26,0.3535174);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(28,0.2137621);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(34,0.2429973);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(37,0.198683);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(38,0.4113335);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(46,0.2470683);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(47,0.2937418);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(48,0.2576367);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetBinError(80,0.3141509);
   VbbHcc_algo_Z_jetmass_noJEC__701->SetEntries(665);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_jetmass_noJEC__701->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC__701->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_algo_Z_jetmass_noJEC__701->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_Z_jetmass_noJEC__701->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__701->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC__701->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__701->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__701->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__701->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__701->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC__701->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__701->Draw("HIST");
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
