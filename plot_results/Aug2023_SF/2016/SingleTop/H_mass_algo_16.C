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
   H_mass_algo_16->Range(-80,-56.24391,453.3333,506.1951);
   H_mass_algo_16->SetFillColor(0);
   H_mass_algo_16->SetBorderMode(0);
   H_mass_algo_16->SetBorderSize(2);
   H_mass_algo_16->SetLeftMargin(0.15);
   H_mass_algo_16->SetFrameBorderMode(0);
   H_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_mass__380 = new TH1D("VbbHcc_algo_H_mass__380","",40,0,400);
   VbbHcc_algo_H_mass__380->SetBinContent(4,2.878238);
   VbbHcc_algo_H_mass__380->SetBinContent(5,30.07789);
   VbbHcc_algo_H_mass__380->SetBinContent(6,87.47729);
   VbbHcc_algo_H_mass__380->SetBinContent(7,159.8742);
   VbbHcc_algo_H_mass__380->SetBinContent(8,269.4018);
   VbbHcc_algo_H_mass__380->SetBinContent(9,394.4248);
   VbbHcc_algo_H_mass__380->SetBinContent(10,400.8266);
   VbbHcc_algo_H_mass__380->SetBinContent(11,403.6015);
   VbbHcc_algo_H_mass__380->SetBinContent(12,428.525);
   VbbHcc_algo_H_mass__380->SetBinContent(13,419.8673);
   VbbHcc_algo_H_mass__380->SetBinContent(14,427.7653);
   VbbHcc_algo_H_mass__380->SetBinContent(15,403.1646);
   VbbHcc_algo_H_mass__380->SetBinContent(16,402.4505);
   VbbHcc_algo_H_mass__380->SetBinContent(17,370.2108);
   VbbHcc_algo_H_mass__380->SetBinContent(18,359.6167);
   VbbHcc_algo_H_mass__380->SetBinContent(19,330.5726);
   VbbHcc_algo_H_mass__380->SetBinContent(20,320.406);
   VbbHcc_algo_H_mass__380->SetBinContent(21,296.6115);
   VbbHcc_algo_H_mass__380->SetBinContent(22,286.049);
   VbbHcc_algo_H_mass__380->SetBinContent(23,269.1347);
   VbbHcc_algo_H_mass__380->SetBinContent(24,265.1891);
   VbbHcc_algo_H_mass__380->SetBinContent(25,250.3917);
   VbbHcc_algo_H_mass__380->SetBinContent(26,240.955);
   VbbHcc_algo_H_mass__380->SetBinContent(27,232.5416);
   VbbHcc_algo_H_mass__380->SetBinContent(28,236.3292);
   VbbHcc_algo_H_mass__380->SetBinContent(29,223.0304);
   VbbHcc_algo_H_mass__380->SetBinContent(30,214.28);
   VbbHcc_algo_H_mass__380->SetBinContent(31,212.4674);
   VbbHcc_algo_H_mass__380->SetBinContent(32,201.256);
   VbbHcc_algo_H_mass__380->SetBinContent(33,194.1315);
   VbbHcc_algo_H_mass__380->SetBinContent(34,185.7528);
   VbbHcc_algo_H_mass__380->SetBinContent(35,189.7997);
   VbbHcc_algo_H_mass__380->SetBinContent(36,187.1428);
   VbbHcc_algo_H_mass__380->SetBinContent(37,173.9731);
   VbbHcc_algo_H_mass__380->SetBinContent(38,165.7611);
   VbbHcc_algo_H_mass__380->SetBinContent(39,172.8909);
   VbbHcc_algo_H_mass__380->SetBinContent(40,168.3661);
   VbbHcc_algo_H_mass__380->SetBinContent(41,7929.848);
   VbbHcc_algo_H_mass__380->SetBinError(4,0.5171677);
   VbbHcc_algo_H_mass__380->SetBinError(5,1.859881);
   VbbHcc_algo_H_mass__380->SetBinError(6,3.211605);
   VbbHcc_algo_H_mass__380->SetBinError(7,4.330538);
   VbbHcc_algo_H_mass__380->SetBinError(8,5.987683);
   VbbHcc_algo_H_mass__380->SetBinError(9,7.454752);
   VbbHcc_algo_H_mass__380->SetBinError(10,7.243747);
   VbbHcc_algo_H_mass__380->SetBinError(11,7.131643);
   VbbHcc_algo_H_mass__380->SetBinError(12,7.364878);
   VbbHcc_algo_H_mass__380->SetBinError(13,7.189734);
   VbbHcc_algo_H_mass__380->SetBinError(14,7.234428);
   VbbHcc_algo_H_mass__380->SetBinError(15,6.998366);
   VbbHcc_algo_H_mass__380->SetBinError(16,7.080721);
   VbbHcc_algo_H_mass__380->SetBinError(17,6.674426);
   VbbHcc_algo_H_mass__380->SetBinError(18,6.653778);
   VbbHcc_algo_H_mass__380->SetBinError(19,6.219937);
   VbbHcc_algo_H_mass__380->SetBinError(20,6.253446);
   VbbHcc_algo_H_mass__380->SetBinError(21,5.945275);
   VbbHcc_algo_H_mass__380->SetBinError(22,5.991974);
   VbbHcc_algo_H_mass__380->SetBinError(23,5.678466);
   VbbHcc_algo_H_mass__380->SetBinError(24,5.755147);
   VbbHcc_algo_H_mass__380->SetBinError(25,5.507299);
   VbbHcc_algo_H_mass__380->SetBinError(26,5.466283);
   VbbHcc_algo_H_mass__380->SetBinError(27,5.365748);
   VbbHcc_algo_H_mass__380->SetBinError(28,5.400831);
   VbbHcc_algo_H_mass__380->SetBinError(29,5.303956);
   VbbHcc_algo_H_mass__380->SetBinError(30,5.208159);
   VbbHcc_algo_H_mass__380->SetBinError(31,5.198381);
   VbbHcc_algo_H_mass__380->SetBinError(32,5.054141);
   VbbHcc_algo_H_mass__380->SetBinError(33,4.925394);
   VbbHcc_algo_H_mass__380->SetBinError(34,4.768929);
   VbbHcc_algo_H_mass__380->SetBinError(35,4.894546);
   VbbHcc_algo_H_mass__380->SetBinError(36,4.863132);
   VbbHcc_algo_H_mass__380->SetBinError(37,4.708963);
   VbbHcc_algo_H_mass__380->SetBinError(38,4.593344);
   VbbHcc_algo_H_mass__380->SetBinError(39,4.718159);
   VbbHcc_algo_H_mass__380->SetBinError(40,4.627642);
   VbbHcc_algo_H_mass__380->SetBinError(41,33.10741);
   VbbHcc_algo_H_mass__380->SetEntries(350651);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_mass__380->SetFillColor(ci);
   VbbHcc_algo_H_mass__380->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_algo_H_mass__380->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_H_mass__380->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__380->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__380->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__380->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__380->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__380->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__380->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__380->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__380->Draw("HIST");
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
