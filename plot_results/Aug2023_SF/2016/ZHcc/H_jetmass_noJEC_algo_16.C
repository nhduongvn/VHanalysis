#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_algo_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_algo_16/H_jetmass_noJEC_algo_16
//=========  (Fri Sep  1 13:23:39 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_noJEC_algo_16 = new TCanvas("H_jetmass_noJEC_algo_16", "H_jetmass_noJEC_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_algo_16->SetHighLightColor(2);
   H_jetmass_noJEC_algo_16->Range(-60,-0.01569912,340,0.141292);
   H_jetmass_noJEC_algo_16->SetFillColor(0);
   H_jetmass_noJEC_algo_16->SetBorderMode(0);
   H_jetmass_noJEC_algo_16->SetBorderSize(2);
   H_jetmass_noJEC_algo_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_jetmass_noJEC__644 = new TH1D("VbbHcc_algo_H_jetmass_noJEC__644","",150,0,300);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(4,0.006040328);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(5,0.02629177);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(6,0.08885227);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(7,0.1196123);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(8,0.08782961);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(9,0.0786405);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(10,0.06370321);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(11,0.05637709);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(12,0.03113321);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(13,0.02739325);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(14,0.0246086);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(15,0.01561421);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(16,0.01395262);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(17,0.01892441);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(18,0.01687035);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(19,0.01504119);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(20,0.009537317);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(21,0.007696387);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(22,0.00854886);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(23,0.005881542);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(25,0.004594473);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(26,0.002261131);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(28,0.00219101);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(29,0.004898173);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(30,0.001018859);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(31,0.002447819);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(33,0.002394248);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(37,0.006937416);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(43,0.002570041);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(46,6.47547e-05);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(47,0.004659709);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinContent(50,0.002666334);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(4,0.003074797);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(5,0.007053639);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(6,0.0135753);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(7,0.01556343);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(8,0.01397767);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(9,0.01349484);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(10,0.01205829);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(11,0.01178714);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(12,0.00894738);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(13,0.008090909);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(14,0.00744158);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(15,0.005940376);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(16,0.005824384);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(17,0.006705797);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(18,0.006122705);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(19,0.005733676);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(20,0.004802338);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(21,0.004445705);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(22,0.004485637);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(23,0.003406813);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(25,0.003250432);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(26,0.002261131);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(28,0.00219101);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(29,0.00346514);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(30,0.001018859);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(31,0.002447819);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(33,0.002394248);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(37,0.004039272);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(43,0.002570041);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(46,6.47547e-05);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(47,0.003304639);
   VbbHcc_algo_H_jetmass_noJEC__644->SetBinError(50,0.002666334);
   VbbHcc_algo_H_jetmass_noJEC__644->SetEntries(376);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_jetmass_noJEC__644->SetFillColor(ci);
   VbbHcc_algo_H_jetmass_noJEC__644->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_algo_H_jetmass_noJEC__644->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_H_jetmass_noJEC__644->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_noJEC__644->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_jetmass_noJEC__644->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_noJEC__644->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_noJEC__644->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_noJEC__644->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_noJEC__644->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_jetmass_noJEC__644->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_noJEC__644->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_algo_16->Modified();
   H_jetmass_noJEC_algo_16->cd();
   H_jetmass_noJEC_algo_16->SetSelected(H_jetmass_noJEC_algo_16);
}
