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
   H_mass_algo_16->Range(-80,-1.54452,453.3333,13.90068);
   H_mass_algo_16->SetFillColor(0);
   H_mass_algo_16->SetBorderMode(0);
   H_mass_algo_16->SetBorderSize(2);
   H_mass_algo_16->SetLeftMargin(0.15);
   H_mass_algo_16->SetFrameBorderMode(0);
   H_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_mass__386 = new TH1D("VbbHcc_algo_H_mass__386","",40,0,400);
   VbbHcc_algo_H_mass__386->SetBinContent(5,0.2196088);
   VbbHcc_algo_H_mass__386->SetBinContent(6,0.5006859);
   VbbHcc_algo_H_mass__386->SetBinContent(7,3.13043);
   VbbHcc_algo_H_mass__386->SetBinContent(8,5.419747);
   VbbHcc_algo_H_mass__386->SetBinContent(9,9.286939);
   VbbHcc_algo_H_mass__386->SetBinContent(10,11.76777);
   VbbHcc_algo_H_mass__386->SetBinContent(11,8.974327);
   VbbHcc_algo_H_mass__386->SetBinContent(12,2.678372);
   VbbHcc_algo_H_mass__386->SetBinContent(13,1.629146);
   VbbHcc_algo_H_mass__386->SetBinContent(14,3.128486);
   VbbHcc_algo_H_mass__386->SetBinContent(15,2.045304);
   VbbHcc_algo_H_mass__386->SetBinContent(16,1.682508);
   VbbHcc_algo_H_mass__386->SetBinContent(17,2.661228);
   VbbHcc_algo_H_mass__386->SetBinContent(18,1.751065);
   VbbHcc_algo_H_mass__386->SetBinContent(19,1.686872);
   VbbHcc_algo_H_mass__386->SetBinContent(20,2.334676);
   VbbHcc_algo_H_mass__386->SetBinContent(21,1.822313);
   VbbHcc_algo_H_mass__386->SetBinContent(22,2.080969);
   VbbHcc_algo_H_mass__386->SetBinContent(23,0.836519);
   VbbHcc_algo_H_mass__386->SetBinContent(24,1.126945);
   VbbHcc_algo_H_mass__386->SetBinContent(25,1.072508);
   VbbHcc_algo_H_mass__386->SetBinContent(26,1.043256);
   VbbHcc_algo_H_mass__386->SetBinContent(27,1.59019);
   VbbHcc_algo_H_mass__386->SetBinContent(28,0.9767501);
   VbbHcc_algo_H_mass__386->SetBinContent(29,1.13222);
   VbbHcc_algo_H_mass__386->SetBinContent(30,1.521304);
   VbbHcc_algo_H_mass__386->SetBinContent(31,1.900973);
   VbbHcc_algo_H_mass__386->SetBinContent(32,1.051075);
   VbbHcc_algo_H_mass__386->SetBinContent(33,1.131919);
   VbbHcc_algo_H_mass__386->SetBinContent(34,0.8777624);
   VbbHcc_algo_H_mass__386->SetBinContent(35,0.7941089);
   VbbHcc_algo_H_mass__386->SetBinContent(36,0.8347681);
   VbbHcc_algo_H_mass__386->SetBinContent(37,0.2108525);
   VbbHcc_algo_H_mass__386->SetBinContent(38,0.708579);
   VbbHcc_algo_H_mass__386->SetBinContent(39,0.7260701);
   VbbHcc_algo_H_mass__386->SetBinContent(40,0.6341599);
   VbbHcc_algo_H_mass__386->SetBinContent(41,53.26581);
   VbbHcc_algo_H_mass__386->SetBinError(5,0.2196088);
   VbbHcc_algo_H_mass__386->SetBinError(6,0.2901786);
   VbbHcc_algo_H_mass__386->SetBinError(7,0.7947192);
   VbbHcc_algo_H_mass__386->SetBinError(8,1.081394);
   VbbHcc_algo_H_mass__386->SetBinError(9,1.366798);
   VbbHcc_algo_H_mass__386->SetBinError(10,1.563059);
   VbbHcc_algo_H_mass__386->SetBinError(11,1.41775);
   VbbHcc_algo_H_mass__386->SetBinError(12,0.7317258);
   VbbHcc_algo_H_mass__386->SetBinError(13,0.5579657);
   VbbHcc_algo_H_mass__386->SetBinError(14,0.8096182);
   VbbHcc_algo_H_mass__386->SetBinError(15,0.660819);
   VbbHcc_algo_H_mass__386->SetBinError(16,0.6073294);
   VbbHcc_algo_H_mass__386->SetBinError(17,0.782153);
   VbbHcc_algo_H_mass__386->SetBinError(18,0.5733044);
   VbbHcc_algo_H_mass__386->SetBinError(19,0.6100808);
   VbbHcc_algo_H_mass__386->SetBinError(20,0.7161841);
   VbbHcc_algo_H_mass__386->SetBinError(21,0.5918993);
   VbbHcc_algo_H_mass__386->SetBinError(22,0.6308336);
   VbbHcc_algo_H_mass__386->SetBinError(23,0.4199547);
   VbbHcc_algo_H_mass__386->SetBinError(24,0.4638942);
   VbbHcc_algo_H_mass__386->SetBinError(25,0.4827361);
   VbbHcc_algo_H_mass__386->SetBinError(26,0.4698668);
   VbbHcc_algo_H_mass__386->SetBinError(27,0.5671586);
   VbbHcc_algo_H_mass__386->SetBinError(28,0.4443263);
   VbbHcc_algo_H_mass__386->SetBinError(29,0.4666653);
   VbbHcc_algo_H_mass__386->SetBinError(30,0.584064);
   VbbHcc_algo_H_mass__386->SetBinError(31,0.6083848);
   VbbHcc_algo_H_mass__386->SetBinError(32,0.4753693);
   VbbHcc_algo_H_mass__386->SetBinError(33,0.5222364);
   VbbHcc_algo_H_mass__386->SetBinError(34,0.4403103);
   VbbHcc_algo_H_mass__386->SetBinError(35,0.3989429);
   VbbHcc_algo_H_mass__386->SetBinError(36,0.4187591);
   VbbHcc_algo_H_mass__386->SetBinError(37,0.2108525);
   VbbHcc_algo_H_mass__386->SetBinError(38,0.4118594);
   VbbHcc_algo_H_mass__386->SetBinError(39,0.3645282);
   VbbHcc_algo_H_mass__386->SetBinError(40,0.3684134);
   VbbHcc_algo_H_mass__386->SetBinError(41,3.365795);
   VbbHcc_algo_H_mass__386->SetEntries(665);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_mass__386->SetFillColor(ci);
   VbbHcc_algo_H_mass__386->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_algo_H_mass__386->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_H_mass__386->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__386->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__386->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__386->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__386->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__386->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__386->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__386->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__386->Draw("HIST");
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
