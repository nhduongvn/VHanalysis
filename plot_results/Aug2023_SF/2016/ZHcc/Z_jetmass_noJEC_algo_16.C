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
   Z_jetmass_noJEC_algo_16->Range(-60,-0.02092158,340,0.1882942);
   Z_jetmass_noJEC_algo_16->SetFillColor(0);
   Z_jetmass_noJEC_algo_16->SetBorderMode(0);
   Z_jetmass_noJEC_algo_16->SetBorderSize(2);
   Z_jetmass_noJEC_algo_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC__704 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC__704","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(3,0.001692767);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(4,0.01743606);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(5,0.08358606);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(6,0.1594025);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(7,0.1084383);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(8,0.08709921);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(9,0.08820061);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(10,0.0588843);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(11,0.04643893);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(12,0.009355942);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(13,0.01893127);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(14,0.01140457);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(15,0.01362397);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(16,0.01374007);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(18,0.004877933);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(19,0.001018859);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(20,0.00428192);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(21,0.01163384);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(23,0.002523738);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(24,0.002676922);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(25,0.00481703);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(29,0.002447819);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(42,0.001943164);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(43,0.00219101);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinContent(47,0.002606182);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(3,0.001692767);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(4,0.006034421);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(5,0.01297539);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(6,0.01825793);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(7,0.01542722);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(8,0.01415831);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(9,0.01400856);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(10,0.01151342);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(11,0.01055368);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(12,0.005491287);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(13,0.007427584);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(14,0.005120908);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(15,0.005886231);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(16,0.005662634);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(18,0.003449943);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(19,0.001018859);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(20,0.003027901);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(21,0.005206645);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(23,0.002523738);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(24,0.002676922);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(25,0.003425614);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(29,0.002447819);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(42,0.001943164);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(43,0.00219101);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetBinError(47,0.002606182);
   VbbHcc_algo_Z_jetmass_noJEC__704->SetEntries(376);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_noJEC__704->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC__704->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_algo_Z_jetmass_noJEC__704->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_Z_jetmass_noJEC__704->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__704->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC__704->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__704->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__704->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__704->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__704->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC__704->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC__704->Draw("HIST");
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
