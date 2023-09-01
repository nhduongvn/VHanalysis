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
   H_mass_algo_16->Range(-80,-17.5676,453.3333,158.1084);
   H_mass_algo_16->SetFillColor(0);
   H_mass_algo_16->SetBorderMode(0);
   H_mass_algo_16->SetBorderSize(2);
   H_mass_algo_16->SetLeftMargin(0.15);
   H_mass_algo_16->SetFrameBorderMode(0);
   H_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_mass__383 = new TH1D("VbbHcc_algo_H_mass__383","",40,0,400);
   VbbHcc_algo_H_mass__383->SetBinContent(4,7.303528);
   VbbHcc_algo_H_mass__383->SetBinContent(5,13.122);
   VbbHcc_algo_H_mass__383->SetBinContent(6,35.91316);
   VbbHcc_algo_H_mass__383->SetBinContent(7,64.31144);
   VbbHcc_algo_H_mass__383->SetBinContent(8,106.7396);
   VbbHcc_algo_H_mass__383->SetBinContent(9,133.8484);
   VbbHcc_algo_H_mass__383->SetBinContent(10,124.3183);
   VbbHcc_algo_H_mass__383->SetBinContent(11,83.98625);
   VbbHcc_algo_H_mass__383->SetBinContent(12,90.20167);
   VbbHcc_algo_H_mass__383->SetBinContent(13,91.94155);
   VbbHcc_algo_H_mass__383->SetBinContent(14,92.56189);
   VbbHcc_algo_H_mass__383->SetBinContent(15,93.86275);
   VbbHcc_algo_H_mass__383->SetBinContent(16,93.18949);
   VbbHcc_algo_H_mass__383->SetBinContent(17,88.43991);
   VbbHcc_algo_H_mass__383->SetBinContent(18,100.0859);
   VbbHcc_algo_H_mass__383->SetBinContent(19,94.6758);
   VbbHcc_algo_H_mass__383->SetBinContent(20,91.39379);
   VbbHcc_algo_H_mass__383->SetBinContent(21,99.03165);
   VbbHcc_algo_H_mass__383->SetBinContent(22,62.92471);
   VbbHcc_algo_H_mass__383->SetBinContent(23,80.35152);
   VbbHcc_algo_H_mass__383->SetBinContent(24,98.53675);
   VbbHcc_algo_H_mass__383->SetBinContent(25,86.32741);
   VbbHcc_algo_H_mass__383->SetBinContent(26,77.23284);
   VbbHcc_algo_H_mass__383->SetBinContent(27,89.1031);
   VbbHcc_algo_H_mass__383->SetBinContent(28,70.66573);
   VbbHcc_algo_H_mass__383->SetBinContent(29,65.791);
   VbbHcc_algo_H_mass__383->SetBinContent(30,57.49827);
   VbbHcc_algo_H_mass__383->SetBinContent(31,53.57067);
   VbbHcc_algo_H_mass__383->SetBinContent(32,100.4521);
   VbbHcc_algo_H_mass__383->SetBinContent(33,60.54635);
   VbbHcc_algo_H_mass__383->SetBinContent(34,58.22976);
   VbbHcc_algo_H_mass__383->SetBinContent(35,66.2289);
   VbbHcc_algo_H_mass__383->SetBinContent(36,65.78168);
   VbbHcc_algo_H_mass__383->SetBinContent(37,64.72908);
   VbbHcc_algo_H_mass__383->SetBinContent(38,67.02844);
   VbbHcc_algo_H_mass__383->SetBinContent(39,59.08672);
   VbbHcc_algo_H_mass__383->SetBinContent(40,67.98482);
   VbbHcc_algo_H_mass__383->SetBinContent(41,3581.643);
   VbbHcc_algo_H_mass__383->SetBinError(4,5.03812);
   VbbHcc_algo_H_mass__383->SetBinError(5,6.070931);
   VbbHcc_algo_H_mass__383->SetBinError(6,8.212026);
   VbbHcc_algo_H_mass__383->SetBinError(7,11.68447);
   VbbHcc_algo_H_mass__383->SetBinError(8,15.74508);
   VbbHcc_algo_H_mass__383->SetBinError(9,14.14915);
   VbbHcc_algo_H_mass__383->SetBinError(10,15.38127);
   VbbHcc_algo_H_mass__383->SetBinError(11,12.64166);
   VbbHcc_algo_H_mass__383->SetBinError(12,12.54403);
   VbbHcc_algo_H_mass__383->SetBinError(13,11.95283);
   VbbHcc_algo_H_mass__383->SetBinError(14,13.83811);
   VbbHcc_algo_H_mass__383->SetBinError(15,10.84866);
   VbbHcc_algo_H_mass__383->SetBinError(16,13.67403);
   VbbHcc_algo_H_mass__383->SetBinError(17,11.51939);
   VbbHcc_algo_H_mass__383->SetBinError(18,14.81706);
   VbbHcc_algo_H_mass__383->SetBinError(19,12.31642);
   VbbHcc_algo_H_mass__383->SetBinError(20,13.69947);
   VbbHcc_algo_H_mass__383->SetBinError(21,13.95941);
   VbbHcc_algo_H_mass__383->SetBinError(22,8.018822);
   VbbHcc_algo_H_mass__383->SetBinError(23,11.4596);
   VbbHcc_algo_H_mass__383->SetBinError(24,14.20206);
   VbbHcc_algo_H_mass__383->SetBinError(25,12.69651);
   VbbHcc_algo_H_mass__383->SetBinError(26,9.928447);
   VbbHcc_algo_H_mass__383->SetBinError(27,11.58283);
   VbbHcc_algo_H_mass__383->SetBinError(28,9.507266);
   VbbHcc_algo_H_mass__383->SetBinError(29,8.631425);
   VbbHcc_algo_H_mass__383->SetBinError(30,6.90897);
   VbbHcc_algo_H_mass__383->SetBinError(31,6.398741);
   VbbHcc_algo_H_mass__383->SetBinError(32,14.13565);
   VbbHcc_algo_H_mass__383->SetBinError(33,9.505571);
   VbbHcc_algo_H_mass__383->SetBinError(34,6.527648);
   VbbHcc_algo_H_mass__383->SetBinError(35,8.408297);
   VbbHcc_algo_H_mass__383->SetBinError(36,8.686522);
   VbbHcc_algo_H_mass__383->SetBinError(37,10.2559);
   VbbHcc_algo_H_mass__383->SetBinError(38,10.24634);
   VbbHcc_algo_H_mass__383->SetBinError(39,7.059387);
   VbbHcc_algo_H_mass__383->SetBinError(40,7.913443);
   VbbHcc_algo_H_mass__383->SetBinError(41,55.40248);
   VbbHcc_algo_H_mass__383->SetEntries(71880);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_mass__383->SetFillColor(ci);
   VbbHcc_algo_H_mass__383->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_algo_H_mass__383->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_H_mass__383->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__383->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__383->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__383->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__383->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__383->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__383->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__383->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__383->Draw("HIST");
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
