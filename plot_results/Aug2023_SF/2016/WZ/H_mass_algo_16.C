#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_algo_16()
{
//=========Macro generated from canvas: H_mass_algo_16/H_mass_algo_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *H_mass_algo_16 = new TCanvas("H_mass_algo_16", "H_mass_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_algo_16->SetHighLightColor(2);
   H_mass_algo_16->Range(-80,-1.212085,453.3333,10.90876);
   H_mass_algo_16->SetFillColor(0);
   H_mass_algo_16->SetBorderMode(0);
   H_mass_algo_16->SetBorderSize(2);
   H_mass_algo_16->SetLeftMargin(0.15);
   H_mass_algo_16->SetFrameBorderMode(0);
   H_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_mass__385 = new TH1D("VbbHcc_algo_H_mass__385","",40,0,400);
   VbbHcc_algo_H_mass__385->SetBinContent(4,0.06689547);
   VbbHcc_algo_H_mass__385->SetBinContent(5,0.2817642);
   VbbHcc_algo_H_mass__385->SetBinContent(6,0.2598655);
   VbbHcc_algo_H_mass__385->SetBinContent(7,1.572172);
   VbbHcc_algo_H_mass__385->SetBinContent(8,5.700718);
   VbbHcc_algo_H_mass__385->SetBinContent(9,9.234931);
   VbbHcc_algo_H_mass__385->SetBinContent(10,7.714316);
   VbbHcc_algo_H_mass__385->SetBinContent(11,2.904919);
   VbbHcc_algo_H_mass__385->SetBinContent(12,1.821308);
   VbbHcc_algo_H_mass__385->SetBinContent(13,2.504763);
   VbbHcc_algo_H_mass__385->SetBinContent(14,1.754307);
   VbbHcc_algo_H_mass__385->SetBinContent(15,1.499967);
   VbbHcc_algo_H_mass__385->SetBinContent(16,1.038809);
   VbbHcc_algo_H_mass__385->SetBinContent(17,0.810738);
   VbbHcc_algo_H_mass__385->SetBinContent(18,1.256692);
   VbbHcc_algo_H_mass__385->SetBinContent(19,1.241265);
   VbbHcc_algo_H_mass__385->SetBinContent(20,0.7525468);
   VbbHcc_algo_H_mass__385->SetBinContent(21,1.008128);
   VbbHcc_algo_H_mass__385->SetBinContent(22,1.188279);
   VbbHcc_algo_H_mass__385->SetBinContent(23,0.9889037);
   VbbHcc_algo_H_mass__385->SetBinContent(24,1.1696);
   VbbHcc_algo_H_mass__385->SetBinContent(25,0.942273);
   VbbHcc_algo_H_mass__385->SetBinContent(26,0.8685376);
   VbbHcc_algo_H_mass__385->SetBinContent(27,0.6241367);
   VbbHcc_algo_H_mass__385->SetBinContent(28,1.200011);
   VbbHcc_algo_H_mass__385->SetBinContent(29,0.7550438);
   VbbHcc_algo_H_mass__385->SetBinContent(30,0.6460474);
   VbbHcc_algo_H_mass__385->SetBinContent(31,0.8694147);
   VbbHcc_algo_H_mass__385->SetBinContent(32,1.067433);
   VbbHcc_algo_H_mass__385->SetBinContent(33,0.5660885);
   VbbHcc_algo_H_mass__385->SetBinContent(34,0.8545677);
   VbbHcc_algo_H_mass__385->SetBinContent(35,1.020584);
   VbbHcc_algo_H_mass__385->SetBinContent(36,0.2282425);
   VbbHcc_algo_H_mass__385->SetBinContent(37,1.162573);
   VbbHcc_algo_H_mass__385->SetBinContent(38,0.4365318);
   VbbHcc_algo_H_mass__385->SetBinContent(39,0.7491639);
   VbbHcc_algo_H_mass__385->SetBinContent(40,0.7894426);
   VbbHcc_algo_H_mass__385->SetBinContent(41,45.38126);
   VbbHcc_algo_H_mass__385->SetBinError(4,0.06689547);
   VbbHcc_algo_H_mass__385->SetBinError(5,0.1633809);
   VbbHcc_algo_H_mass__385->SetBinError(6,0.1518616);
   VbbHcc_algo_H_mass__385->SetBinError(7,0.3750108);
   VbbHcc_algo_H_mass__385->SetBinError(8,0.7159513);
   VbbHcc_algo_H_mass__385->SetBinError(9,0.9258693);
   VbbHcc_algo_H_mass__385->SetBinError(10,0.8373865);
   VbbHcc_algo_H_mass__385->SetBinError(11,0.5018256);
   VbbHcc_algo_H_mass__385->SetBinError(12,0.3964574);
   VbbHcc_algo_H_mass__385->SetBinError(13,0.4891546);
   VbbHcc_algo_H_mass__385->SetBinError(14,0.3917566);
   VbbHcc_algo_H_mass__385->SetBinError(15,0.371717);
   VbbHcc_algo_H_mass__385->SetBinError(16,0.3042438);
   VbbHcc_algo_H_mass__385->SetBinError(17,0.2637756);
   VbbHcc_algo_H_mass__385->SetBinError(18,0.3551919);
   VbbHcc_algo_H_mass__385->SetBinError(19,0.3241979);
   VbbHcc_algo_H_mass__385->SetBinError(20,0.2526515);
   VbbHcc_algo_H_mass__385->SetBinError(21,0.2932532);
   VbbHcc_algo_H_mass__385->SetBinError(22,0.3218223);
   VbbHcc_algo_H_mass__385->SetBinError(23,0.3016037);
   VbbHcc_algo_H_mass__385->SetBinError(24,0.3112852);
   VbbHcc_algo_H_mass__385->SetBinError(25,0.2997728);
   VbbHcc_algo_H_mass__385->SetBinError(26,0.2765351);
   VbbHcc_algo_H_mass__385->SetBinError(27,0.2391419);
   VbbHcc_algo_H_mass__385->SetBinError(28,0.3283885);
   VbbHcc_algo_H_mass__385->SetBinError(29,0.2689776);
   VbbHcc_algo_H_mass__385->SetBinError(30,0.2335764);
   VbbHcc_algo_H_mass__385->SetBinError(31,0.2816449);
   VbbHcc_algo_H_mass__385->SetBinError(32,0.3126548);
   VbbHcc_algo_H_mass__385->SetBinError(33,0.2323376);
   VbbHcc_algo_H_mass__385->SetBinError(34,0.2715857);
   VbbHcc_algo_H_mass__385->SetBinError(35,0.3078105);
   VbbHcc_algo_H_mass__385->SetBinError(36,0.132484);
   VbbHcc_algo_H_mass__385->SetBinError(37,0.3160764);
   VbbHcc_algo_H_mass__385->SetBinError(38,0.1955046);
   VbbHcc_algo_H_mass__385->SetBinError(39,0.2698213);
   VbbHcc_algo_H_mass__385->SetBinError(40,0.2683828);
   VbbHcc_algo_H_mass__385->SetBinError(41,2.07076);
   VbbHcc_algo_H_mass__385->SetEntries(1159);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_mass__385->SetFillColor(ci);
   VbbHcc_algo_H_mass__385->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_algo_H_mass__385->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_H_mass__385->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__385->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__385->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__385->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__385->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__385->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__385->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__385->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__385->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_algo_16->Modified();
   H_mass_algo_16->cd();
   H_mass_algo_16->SetSelected(H_mass_algo_16);
}
