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
   H_mass_algo_16->Range(-80,-7977.876,453.3333,71800.88);
   H_mass_algo_16->SetFillColor(0);
   H_mass_algo_16->SetBorderMode(0);
   H_mass_algo_16->SetBorderSize(2);
   H_mass_algo_16->SetLeftMargin(0.15);
   H_mass_algo_16->SetFrameBorderMode(0);
   H_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_mass__379 = new TH1D("VbbHcc_algo_H_mass__379","",40,0,400);
   VbbHcc_algo_H_mass__379->SetBinContent(4,1307.23);
   VbbHcc_algo_H_mass__379->SetBinContent(5,10795.2);
   VbbHcc_algo_H_mass__379->SetBinContent(6,30726.05);
   VbbHcc_algo_H_mass__379->SetBinContent(7,37705.9);
   VbbHcc_algo_H_mass__379->SetBinContent(8,35902.58);
   VbbHcc_algo_H_mass__379->SetBinContent(9,37648.72);
   VbbHcc_algo_H_mass__379->SetBinContent(10,47082.17);
   VbbHcc_algo_H_mass__379->SetBinContent(11,45622.68);
   VbbHcc_algo_H_mass__379->SetBinContent(12,43271.19);
   VbbHcc_algo_H_mass__379->SetBinContent(13,47468.64);
   VbbHcc_algo_H_mass__379->SetBinContent(14,50068.5);
   VbbHcc_algo_H_mass__379->SetBinContent(15,45922.83);
   VbbHcc_algo_H_mass__379->SetBinContent(16,49013.4);
   VbbHcc_algo_H_mass__379->SetBinContent(17,57811.66);
   VbbHcc_algo_H_mass__379->SetBinContent(18,50371.92);
   VbbHcc_algo_H_mass__379->SetBinContent(19,41992.15);
   VbbHcc_algo_H_mass__379->SetBinContent(20,45330.48);
   VbbHcc_algo_H_mass__379->SetBinContent(21,60783.81);
   VbbHcc_algo_H_mass__379->SetBinContent(22,42858.33);
   VbbHcc_algo_H_mass__379->SetBinContent(23,44919.05);
   VbbHcc_algo_H_mass__379->SetBinContent(24,35145.17);
   VbbHcc_algo_H_mass__379->SetBinContent(25,59444.04);
   VbbHcc_algo_H_mass__379->SetBinContent(26,43104.09);
   VbbHcc_algo_H_mass__379->SetBinContent(27,43672.5);
   VbbHcc_algo_H_mass__379->SetBinContent(28,35382.81);
   VbbHcc_algo_H_mass__379->SetBinContent(29,42068.19);
   VbbHcc_algo_H_mass__379->SetBinContent(30,37665.18);
   VbbHcc_algo_H_mass__379->SetBinContent(31,33940.19);
   VbbHcc_algo_H_mass__379->SetBinContent(32,36645.22);
   VbbHcc_algo_H_mass__379->SetBinContent(33,34726.06);
   VbbHcc_algo_H_mass__379->SetBinContent(34,47939.84);
   VbbHcc_algo_H_mass__379->SetBinContent(35,27887.09);
   VbbHcc_algo_H_mass__379->SetBinContent(36,34074.2);
   VbbHcc_algo_H_mass__379->SetBinContent(37,27633.92);
   VbbHcc_algo_H_mass__379->SetBinContent(38,35002.85);
   VbbHcc_algo_H_mass__379->SetBinContent(39,32509.26);
   VbbHcc_algo_H_mass__379->SetBinContent(40,30516.12);
   VbbHcc_algo_H_mass__379->SetBinContent(41,1182721);
   VbbHcc_algo_H_mass__379->SetBinError(4,843.8015);
   VbbHcc_algo_H_mass__379->SetBinError(5,2107.848);
   VbbHcc_algo_H_mass__379->SetBinError(6,3651.669);
   VbbHcc_algo_H_mass__379->SetBinError(7,3368.626);
   VbbHcc_algo_H_mass__379->SetBinError(8,2540.055);
   VbbHcc_algo_H_mass__379->SetBinError(9,3436.707);
   VbbHcc_algo_H_mass__379->SetBinError(10,4350.393);
   VbbHcc_algo_H_mass__379->SetBinError(11,3726.845);
   VbbHcc_algo_H_mass__379->SetBinError(12,3654.92);
   VbbHcc_algo_H_mass__379->SetBinError(13,4421.496);
   VbbHcc_algo_H_mass__379->SetBinError(14,4370.085);
   VbbHcc_algo_H_mass__379->SetBinError(15,3529.378);
   VbbHcc_algo_H_mass__379->SetBinError(16,3866.021);
   VbbHcc_algo_H_mass__379->SetBinError(17,4789.085);
   VbbHcc_algo_H_mass__379->SetBinError(18,4215.949);
   VbbHcc_algo_H_mass__379->SetBinError(19,3090.596);
   VbbHcc_algo_H_mass__379->SetBinError(20,3860.913);
   VbbHcc_algo_H_mass__379->SetBinError(21,19684.06);
   VbbHcc_algo_H_mass__379->SetBinError(22,3046.306);
   VbbHcc_algo_H_mass__379->SetBinError(23,3662.369);
   VbbHcc_algo_H_mass__379->SetBinError(24,2562.312);
   VbbHcc_algo_H_mass__379->SetBinError(25,14687.11);
   VbbHcc_algo_H_mass__379->SetBinError(26,3875.205);
   VbbHcc_algo_H_mass__379->SetBinError(27,4138.093);
   VbbHcc_algo_H_mass__379->SetBinError(28,3198.89);
   VbbHcc_algo_H_mass__379->SetBinError(29,3555.179);
   VbbHcc_algo_H_mass__379->SetBinError(30,2953.481);
   VbbHcc_algo_H_mass__379->SetBinError(31,3212.656);
   VbbHcc_algo_H_mass__379->SetBinError(32,3265.12);
   VbbHcc_algo_H_mass__379->SetBinError(33,3077.326);
   VbbHcc_algo_H_mass__379->SetBinError(34,16725.2);
   VbbHcc_algo_H_mass__379->SetBinError(35,2332.037);
   VbbHcc_algo_H_mass__379->SetBinError(36,3231.496);
   VbbHcc_algo_H_mass__379->SetBinError(37,2050.745);
   VbbHcc_algo_H_mass__379->SetBinError(38,3205.759);
   VbbHcc_algo_H_mass__379->SetBinError(39,2901.624);
   VbbHcc_algo_H_mass__379->SetBinError(40,3025.49);
   VbbHcc_algo_H_mass__379->SetBinError(41,21426.67);
   VbbHcc_algo_H_mass__379->SetEntries(133403);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_mass__379->SetFillColor(ci);
   VbbHcc_algo_H_mass__379->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_algo_H_mass__379->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_H_mass__379->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__379->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__379->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__379->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__379->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__379->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__379->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__379->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__379->Draw("HIST");
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
