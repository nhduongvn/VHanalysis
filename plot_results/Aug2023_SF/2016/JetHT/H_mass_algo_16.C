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
   H_mass_algo_16->Range(-80,-1884.619,453.3333,16961.57);
   H_mass_algo_16->SetFillColor(0);
   H_mass_algo_16->SetBorderMode(0);
   H_mass_algo_16->SetBorderSize(2);
   H_mass_algo_16->SetLeftMargin(0.15);
   H_mass_algo_16->SetFrameBorderMode(0);
   H_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_mass__378 = new TH1D("VbbHcc_algo_H_mass__378","",40,0,400);
   VbbHcc_algo_H_mass__378->SetBinContent(3,1);
   VbbHcc_algo_H_mass__378->SetBinContent(4,93);
   VbbHcc_algo_H_mass__378->SetBinContent(5,1040);
   VbbHcc_algo_H_mass__378->SetBinContent(6,3863);
   VbbHcc_algo_H_mass__378->SetBinContent(7,7110);
   VbbHcc_algo_H_mass__378->SetBinContent(8,9856);
   VbbHcc_algo_H_mass__378->SetBinContent(9,12088);
   VbbHcc_algo_H_mass__378->SetBinContent(10,13385);
   VbbHcc_algo_H_mass__378->SetBinContent(11,13876);
   VbbHcc_algo_H_mass__378->SetBinContent(12,14149);
   VbbHcc_algo_H_mass__378->SetBinContent(13,14359);
   VbbHcc_algo_H_mass__378->SetBinContent(14,13967);
   VbbHcc_algo_H_mass__378->SetBinContent(15,13409);
   VbbHcc_algo_H_mass__378->SetBinContent(16,13388);
   VbbHcc_algo_H_mass__378->SetBinContent(17,12872);
   VbbHcc_algo_H_mass__378->SetBinContent(18,12603);
   VbbHcc_algo_H_mass__378->SetBinContent(19,12476);
   VbbHcc_algo_H_mass__378->SetBinContent(20,11911);
   VbbHcc_algo_H_mass__378->SetBinContent(21,11443);
   VbbHcc_algo_H_mass__378->SetBinContent(22,11235);
   VbbHcc_algo_H_mass__378->SetBinContent(23,11050);
   VbbHcc_algo_H_mass__378->SetBinContent(24,10809);
   VbbHcc_algo_H_mass__378->SetBinContent(25,10654);
   VbbHcc_algo_H_mass__378->SetBinContent(26,10575);
   VbbHcc_algo_H_mass__378->SetBinContent(27,10364);
   VbbHcc_algo_H_mass__378->SetBinContent(28,10066);
   VbbHcc_algo_H_mass__378->SetBinContent(29,9801);
   VbbHcc_algo_H_mass__378->SetBinContent(30,9777);
   VbbHcc_algo_H_mass__378->SetBinContent(31,9450);
   VbbHcc_algo_H_mass__378->SetBinContent(32,9220);
   VbbHcc_algo_H_mass__378->SetBinContent(33,9170);
   VbbHcc_algo_H_mass__378->SetBinContent(34,8951);
   VbbHcc_algo_H_mass__378->SetBinContent(35,8788);
   VbbHcc_algo_H_mass__378->SetBinContent(36,8532);
   VbbHcc_algo_H_mass__378->SetBinContent(37,8422);
   VbbHcc_algo_H_mass__378->SetBinContent(38,8282);
   VbbHcc_algo_H_mass__378->SetBinContent(39,8160);
   VbbHcc_algo_H_mass__378->SetBinContent(40,8129);
   VbbHcc_algo_H_mass__378->SetBinContent(41,456043);
   VbbHcc_algo_H_mass__378->SetEntries(829367);
   VbbHcc_algo_H_mass__378->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_algo_H_mass__378->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_H_mass__378->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__378->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__378->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__378->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__378->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__378->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__378->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__378->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__378->Draw("HIST");
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
