#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_algo_16()
{
//=========Macro generated from canvas: Z_mass_algo_16/Z_mass_algo_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_algo_16 = new TCanvas("Z_mass_algo_16", "Z_mass_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_algo_16->SetHighLightColor(2);
   Z_mass_algo_16->Range(-80,-1.177589,453.3333,10.5983);
   Z_mass_algo_16->SetFillColor(0);
   Z_mass_algo_16->SetBorderMode(0);
   Z_mass_algo_16->SetBorderSize(2);
   Z_mass_algo_16->SetLeftMargin(0.15);
   Z_mass_algo_16->SetFrameBorderMode(0);
   Z_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__372 = new TH1D("VbbHcc_algo_Z_mass__372","",40,0,400);
   VbbHcc_algo_Z_mass__372->SetBinContent(3,0.001898635);
   VbbHcc_algo_Z_mass__372->SetBinContent(4,0.08958366);
   VbbHcc_algo_Z_mass__372->SetBinContent(5,0.5117694);
   VbbHcc_algo_Z_mass__372->SetBinContent(6,1.192549);
   VbbHcc_algo_Z_mass__372->SetBinContent(7,2.421439);
   VbbHcc_algo_Z_mass__372->SetBinContent(8,5.152857);
   VbbHcc_algo_Z_mass__372->SetBinContent(9,8.765587);
   VbbHcc_algo_Z_mass__372->SetBinContent(10,8.972105);
   VbbHcc_algo_Z_mass__372->SetBinContent(11,6.492153);
   VbbHcc_algo_Z_mass__372->SetBinContent(12,5.12105);
   VbbHcc_algo_Z_mass__372->SetBinContent(13,4.27373);
   VbbHcc_algo_Z_mass__372->SetBinContent(14,2.978016);
   VbbHcc_algo_Z_mass__372->SetBinContent(15,1.844376);
   VbbHcc_algo_Z_mass__372->SetBinContent(16,1.436428);
   VbbHcc_algo_Z_mass__372->SetBinContent(17,1.286559);
   VbbHcc_algo_Z_mass__372->SetBinContent(18,1.107499);
   VbbHcc_algo_Z_mass__372->SetBinContent(19,0.9676522);
   VbbHcc_algo_Z_mass__372->SetBinContent(20,0.9170339);
   VbbHcc_algo_Z_mass__372->SetBinContent(21,0.8321697);
   VbbHcc_algo_Z_mass__372->SetBinContent(22,0.8044933);
   VbbHcc_algo_Z_mass__372->SetBinContent(23,0.7891071);
   VbbHcc_algo_Z_mass__372->SetBinContent(24,0.6893576);
   VbbHcc_algo_Z_mass__372->SetBinContent(25,0.6499808);
   VbbHcc_algo_Z_mass__372->SetBinContent(26,0.6405051);
   VbbHcc_algo_Z_mass__372->SetBinContent(27,0.5700365);
   VbbHcc_algo_Z_mass__372->SetBinContent(28,0.6346913);
   VbbHcc_algo_Z_mass__372->SetBinContent(29,0.5069838);
   VbbHcc_algo_Z_mass__372->SetBinContent(30,0.5217215);
   VbbHcc_algo_Z_mass__372->SetBinContent(31,0.524464);
   VbbHcc_algo_Z_mass__372->SetBinContent(32,0.4683095);
   VbbHcc_algo_Z_mass__372->SetBinContent(33,0.4512031);
   VbbHcc_algo_Z_mass__372->SetBinContent(34,0.4605955);
   VbbHcc_algo_Z_mass__372->SetBinContent(35,0.4173686);
   VbbHcc_algo_Z_mass__372->SetBinContent(36,0.422609);
   VbbHcc_algo_Z_mass__372->SetBinContent(37,0.4519952);
   VbbHcc_algo_Z_mass__372->SetBinContent(38,0.361801);
   VbbHcc_algo_Z_mass__372->SetBinContent(39,0.355535);
   VbbHcc_algo_Z_mass__372->SetBinContent(40,0.3541965);
   VbbHcc_algo_Z_mass__372->SetBinContent(41,17.5186);
   VbbHcc_algo_Z_mass__372->SetBinError(3,0.001350491);
   VbbHcc_algo_Z_mass__372->SetBinError(4,0.01002127);
   VbbHcc_algo_Z_mass__372->SetBinError(5,0.02491361);
   VbbHcc_algo_Z_mass__372->SetBinError(6,0.03792692);
   VbbHcc_algo_Z_mass__372->SetBinError(7,0.05435743);
   VbbHcc_algo_Z_mass__372->SetBinError(8,0.08013733);
   VbbHcc_algo_Z_mass__372->SetBinError(9,0.1049186);
   VbbHcc_algo_Z_mass__372->SetBinError(10,0.1062993);
   VbbHcc_algo_Z_mass__372->SetBinError(11,0.09011871);
   VbbHcc_algo_Z_mass__372->SetBinError(12,0.07999509);
   VbbHcc_algo_Z_mass__372->SetBinError(13,0.07306269);
   VbbHcc_algo_Z_mass__372->SetBinError(14,0.06089135);
   VbbHcc_algo_Z_mass__372->SetBinError(15,0.04715798);
   VbbHcc_algo_Z_mass__372->SetBinError(16,0.04148796);
   VbbHcc_algo_Z_mass__372->SetBinError(17,0.03897196);
   VbbHcc_algo_Z_mass__372->SetBinError(18,0.03636457);
   VbbHcc_algo_Z_mass__372->SetBinError(19,0.03386326);
   VbbHcc_algo_Z_mass__372->SetBinError(20,0.03331007);
   VbbHcc_algo_Z_mass__372->SetBinError(21,0.03157246);
   VbbHcc_algo_Z_mass__372->SetBinError(22,0.03121866);
   VbbHcc_algo_Z_mass__372->SetBinError(23,0.03091857);
   VbbHcc_algo_Z_mass__372->SetBinError(24,0.02903851);
   VbbHcc_algo_Z_mass__372->SetBinError(25,0.02828863);
   VbbHcc_algo_Z_mass__372->SetBinError(26,0.02786542);
   VbbHcc_algo_Z_mass__372->SetBinError(27,0.02645133);
   VbbHcc_algo_Z_mass__372->SetBinError(28,0.02772923);
   VbbHcc_algo_Z_mass__372->SetBinError(29,0.02498615);
   VbbHcc_algo_Z_mass__372->SetBinError(30,0.02530617);
   VbbHcc_algo_Z_mass__372->SetBinError(31,0.02531154);
   VbbHcc_algo_Z_mass__372->SetBinError(32,0.02397329);
   VbbHcc_algo_Z_mass__372->SetBinError(33,0.02338871);
   VbbHcc_algo_Z_mass__372->SetBinError(34,0.02388515);
   VbbHcc_algo_Z_mass__372->SetBinError(35,0.02279717);
   VbbHcc_algo_Z_mass__372->SetBinError(36,0.02301475);
   VbbHcc_algo_Z_mass__372->SetBinError(37,0.02344902);
   VbbHcc_algo_Z_mass__372->SetBinError(38,0.02138391);
   VbbHcc_algo_Z_mass__372->SetBinError(39,0.0210727);
   VbbHcc_algo_Z_mass__372->SetBinError(40,0.02077731);
   VbbHcc_algo_Z_mass__372->SetBinError(41,0.1473942);
   VbbHcc_algo_Z_mass__372->SetEntries(72469);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_mass__372->SetFillColor(ci);
   VbbHcc_algo_Z_mass__372->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__372->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__372->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__372->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__372->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__372->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__372->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__372->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__372->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__372->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__372->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_algo_16->Modified();
   Z_mass_algo_16->cd();
   Z_mass_algo_16->SetSelected(Z_mass_algo_16);
}
