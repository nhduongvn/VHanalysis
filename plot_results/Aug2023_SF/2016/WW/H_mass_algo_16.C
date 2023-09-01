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
   H_mass_algo_16->Range(-80,-0.4845049,453.3333,4.360544);
   H_mass_algo_16->SetFillColor(0);
   H_mass_algo_16->SetBorderMode(0);
   H_mass_algo_16->SetBorderSize(2);
   H_mass_algo_16->SetLeftMargin(0.15);
   H_mass_algo_16->SetFrameBorderMode(0);
   H_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_mass__384 = new TH1D("VbbHcc_algo_H_mass__384","",40,0,400);
   VbbHcc_algo_H_mass__384->SetBinContent(6,0.4142723);
   VbbHcc_algo_H_mass__384->SetBinContent(7,0.4403686);
   VbbHcc_algo_H_mass__384->SetBinContent(8,2.892125);
   VbbHcc_algo_H_mass__384->SetBinContent(9,3.691466);
   VbbHcc_algo_H_mass__384->SetBinContent(10,2.140024);
   VbbHcc_algo_H_mass__384->SetBinContent(11,1.069864);
   VbbHcc_algo_H_mass__384->SetBinContent(12,0.8579344);
   VbbHcc_algo_H_mass__384->SetBinContent(13,0.5394273);
   VbbHcc_algo_H_mass__384->SetBinContent(14,0.7011103);
   VbbHcc_algo_H_mass__384->SetBinContent(15,0.7556993);
   VbbHcc_algo_H_mass__384->SetBinContent(16,0.6923706);
   VbbHcc_algo_H_mass__384->SetBinContent(17,1.069855);
   VbbHcc_algo_H_mass__384->SetBinContent(18,1.012735);
   VbbHcc_algo_H_mass__384->SetBinContent(19,0.9946139);
   VbbHcc_algo_H_mass__384->SetBinContent(20,1.104852);
   VbbHcc_algo_H_mass__384->SetBinContent(21,0.6073974);
   VbbHcc_algo_H_mass__384->SetBinContent(22,1.125844);
   VbbHcc_algo_H_mass__384->SetBinContent(23,0.3070911);
   VbbHcc_algo_H_mass__384->SetBinContent(24,0.5438936);
   VbbHcc_algo_H_mass__384->SetBinContent(25,0.9964964);
   VbbHcc_algo_H_mass__384->SetBinContent(26,0.4360168);
   VbbHcc_algo_H_mass__384->SetBinContent(27,1.056237);
   VbbHcc_algo_H_mass__384->SetBinContent(28,1.018068);
   VbbHcc_algo_H_mass__384->SetBinContent(29,0.5989325);
   VbbHcc_algo_H_mass__384->SetBinContent(30,0.954627);
   VbbHcc_algo_H_mass__384->SetBinContent(31,0.4194115);
   VbbHcc_algo_H_mass__384->SetBinContent(32,0.4387679);
   VbbHcc_algo_H_mass__384->SetBinContent(33,0.6207885);
   VbbHcc_algo_H_mass__384->SetBinContent(34,0.5823332);
   VbbHcc_algo_H_mass__384->SetBinContent(35,0.6556665);
   VbbHcc_algo_H_mass__384->SetBinContent(36,0.3226806);
   VbbHcc_algo_H_mass__384->SetBinContent(37,0.5484507);
   VbbHcc_algo_H_mass__384->SetBinContent(38,0.8383586);
   VbbHcc_algo_H_mass__384->SetBinContent(39,1.002516);
   VbbHcc_algo_H_mass__384->SetBinContent(40,0.4655694);
   VbbHcc_algo_H_mass__384->SetBinContent(41,30.70135);
   VbbHcc_algo_H_mass__384->SetBinError(6,0.2098499);
   VbbHcc_algo_H_mass__384->SetBinError(7,0.1980988);
   VbbHcc_algo_H_mass__384->SetBinError(8,0.5514774);
   VbbHcc_algo_H_mass__384->SetBinError(9,0.628527);
   VbbHcc_algo_H_mass__384->SetBinError(10,0.4825357);
   VbbHcc_algo_H_mass__384->SetBinError(11,0.3254809);
   VbbHcc_algo_H_mass__384->SetBinError(12,0.3037448);
   VbbHcc_algo_H_mass__384->SetBinError(13,0.2436985);
   VbbHcc_algo_H_mass__384->SetBinError(14,0.2661007);
   VbbHcc_algo_H_mass__384->SetBinError(15,0.289364);
   VbbHcc_algo_H_mass__384->SetBinError(16,0.2642915);
   VbbHcc_algo_H_mass__384->SetBinError(17,0.3418636);
   VbbHcc_algo_H_mass__384->SetBinError(18,0.3292351);
   VbbHcc_algo_H_mass__384->SetBinError(19,0.3153098);
   VbbHcc_algo_H_mass__384->SetBinError(20,0.3423779);
   VbbHcc_algo_H_mass__384->SetBinError(21,0.2482589);
   VbbHcc_algo_H_mass__384->SetBinError(22,0.3381745);
   VbbHcc_algo_H_mass__384->SetBinError(23,0.1785567);
   VbbHcc_algo_H_mass__384->SetBinError(24,0.24441);
   VbbHcc_algo_H_mass__384->SetBinError(25,0.333598);
   VbbHcc_algo_H_mass__384->SetBinError(26,0.2194303);
   VbbHcc_algo_H_mass__384->SetBinError(27,0.3485166);
   VbbHcc_algo_H_mass__384->SetBinError(28,0.3463821);
   VbbHcc_algo_H_mass__384->SetBinError(29,0.2695552);
   VbbHcc_algo_H_mass__384->SetBinError(30,0.3244323);
   VbbHcc_algo_H_mass__384->SetBinError(31,0.2108948);
   VbbHcc_algo_H_mass__384->SetBinError(32,0.2255114);
   VbbHcc_algo_H_mass__384->SetBinError(33,0.2791419);
   VbbHcc_algo_H_mass__384->SetBinError(34,0.2605211);
   VbbHcc_algo_H_mass__384->SetBinError(35,0.2686862);
   VbbHcc_algo_H_mass__384->SetBinError(36,0.1865586);
   VbbHcc_algo_H_mass__384->SetBinError(37,0.2471029);
   VbbHcc_algo_H_mass__384->SetBinError(38,0.3199245);
   VbbHcc_algo_H_mass__384->SetBinError(39,0.3315184);
   VbbHcc_algo_H_mass__384->SetBinError(40,0.2348464);
   VbbHcc_algo_H_mass__384->SetBinError(41,1.926632);
   VbbHcc_algo_H_mass__384->SetEntries(573);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_mass__384->SetFillColor(ci);
   VbbHcc_algo_H_mass__384->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_algo_H_mass__384->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_H_mass__384->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__384->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__384->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__384->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__384->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__384->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__384->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__384->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__384->Draw("HIST");
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
