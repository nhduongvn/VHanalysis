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
   Z_mass_algo_16->Range(-80,-0.4148777,453.3333,3.733899);
   Z_mass_algo_16->SetFillColor(0);
   Z_mass_algo_16->SetBorderMode(0);
   Z_mass_algo_16->SetBorderSize(2);
   Z_mass_algo_16->SetLeftMargin(0.15);
   Z_mass_algo_16->SetFrameBorderMode(0);
   Z_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__373 = new TH1D("VbbHcc_algo_Z_mass__373","",40,0,400);
   VbbHcc_algo_Z_mass__373->SetBinContent(3,0.0007289726);
   VbbHcc_algo_Z_mass__373->SetBinContent(4,0.02650929);
   VbbHcc_algo_Z_mass__373->SetBinContent(5,0.1644609);
   VbbHcc_algo_Z_mass__373->SetBinContent(6,0.4183989);
   VbbHcc_algo_Z_mass__373->SetBinContent(7,0.8211175);
   VbbHcc_algo_Z_mass__373->SetBinContent(8,1.700753);
   VbbHcc_algo_Z_mass__373->SetBinContent(9,2.900935);
   VbbHcc_algo_Z_mass__373->SetBinContent(10,3.160972);
   VbbHcc_algo_Z_mass__373->SetBinContent(11,2.317148);
   VbbHcc_algo_Z_mass__373->SetBinContent(12,1.870138);
   VbbHcc_algo_Z_mass__373->SetBinContent(13,1.500733);
   VbbHcc_algo_Z_mass__373->SetBinContent(14,1.120338);
   VbbHcc_algo_Z_mass__373->SetBinContent(15,0.8144908);
   VbbHcc_algo_Z_mass__373->SetBinContent(16,0.6418497);
   VbbHcc_algo_Z_mass__373->SetBinContent(17,0.5599424);
   VbbHcc_algo_Z_mass__373->SetBinContent(18,0.5695545);
   VbbHcc_algo_Z_mass__373->SetBinContent(19,0.503458);
   VbbHcc_algo_Z_mass__373->SetBinContent(20,0.466397);
   VbbHcc_algo_Z_mass__373->SetBinContent(21,0.4609193);
   VbbHcc_algo_Z_mass__373->SetBinContent(22,0.4310284);
   VbbHcc_algo_Z_mass__373->SetBinContent(23,0.4195302);
   VbbHcc_algo_Z_mass__373->SetBinContent(24,0.4082329);
   VbbHcc_algo_Z_mass__373->SetBinContent(25,0.3749106);
   VbbHcc_algo_Z_mass__373->SetBinContent(26,0.3653497);
   VbbHcc_algo_Z_mass__373->SetBinContent(27,0.3365019);
   VbbHcc_algo_Z_mass__373->SetBinContent(28,0.3320002);
   VbbHcc_algo_Z_mass__373->SetBinContent(29,0.3234638);
   VbbHcc_algo_Z_mass__373->SetBinContent(30,0.3137082);
   VbbHcc_algo_Z_mass__373->SetBinContent(31,0.2787715);
   VbbHcc_algo_Z_mass__373->SetBinContent(32,0.2842364);
   VbbHcc_algo_Z_mass__373->SetBinContent(33,0.2763317);
   VbbHcc_algo_Z_mass__373->SetBinContent(34,0.2663974);
   VbbHcc_algo_Z_mass__373->SetBinContent(35,0.2454092);
   VbbHcc_algo_Z_mass__373->SetBinContent(36,0.2427235);
   VbbHcc_algo_Z_mass__373->SetBinContent(37,0.2069159);
   VbbHcc_algo_Z_mass__373->SetBinContent(38,0.2139507);
   VbbHcc_algo_Z_mass__373->SetBinContent(39,0.2004023);
   VbbHcc_algo_Z_mass__373->SetBinContent(40,0.2102941);
   VbbHcc_algo_Z_mass__373->SetBinContent(41,8.493734);
   VbbHcc_algo_Z_mass__373->SetBinError(3,0.0005186753);
   VbbHcc_algo_Z_mass__373->SetBinError(4,0.002836774);
   VbbHcc_algo_Z_mass__373->SetBinError(5,0.00707848);
   VbbHcc_algo_Z_mass__373->SetBinError(6,0.01132224);
   VbbHcc_algo_Z_mass__373->SetBinError(7,0.01594994);
   VbbHcc_algo_Z_mass__373->SetBinError(8,0.02298115);
   VbbHcc_algo_Z_mass__373->SetBinError(9,0.03011289);
   VbbHcc_algo_Z_mass__373->SetBinError(10,0.03153646);
   VbbHcc_algo_Z_mass__373->SetBinError(11,0.02688212);
   VbbHcc_algo_Z_mass__373->SetBinError(12,0.02423256);
   VbbHcc_algo_Z_mass__373->SetBinError(13,0.02174858);
   VbbHcc_algo_Z_mass__373->SetBinError(14,0.01882833);
   VbbHcc_algo_Z_mass__373->SetBinError(15,0.01599416);
   VbbHcc_algo_Z_mass__373->SetBinError(16,0.01423905);
   VbbHcc_algo_Z_mass__373->SetBinError(17,0.01329677);
   VbbHcc_algo_Z_mass__373->SetBinError(18,0.01343662);
   VbbHcc_algo_Z_mass__373->SetBinError(19,0.01259275);
   VbbHcc_algo_Z_mass__373->SetBinError(20,0.01215256);
   VbbHcc_algo_Z_mass__373->SetBinError(21,0.01212222);
   VbbHcc_algo_Z_mass__373->SetBinError(22,0.01175175);
   VbbHcc_algo_Z_mass__373->SetBinError(23,0.0116416);
   VbbHcc_algo_Z_mass__373->SetBinError(24,0.01146858);
   VbbHcc_algo_Z_mass__373->SetBinError(25,0.01100876);
   VbbHcc_algo_Z_mass__373->SetBinError(26,0.01083386);
   VbbHcc_algo_Z_mass__373->SetBinError(27,0.01038478);
   VbbHcc_algo_Z_mass__373->SetBinError(28,0.01037036);
   VbbHcc_algo_Z_mass__373->SetBinError(29,0.01025884);
   VbbHcc_algo_Z_mass__373->SetBinError(30,0.01006747);
   VbbHcc_algo_Z_mass__373->SetBinError(31,0.009477589);
   VbbHcc_algo_Z_mass__373->SetBinError(32,0.009610112);
   VbbHcc_algo_Z_mass__373->SetBinError(33,0.009482639);
   VbbHcc_algo_Z_mass__373->SetBinError(34,0.009304175);
   VbbHcc_algo_Z_mass__373->SetBinError(35,0.008926959);
   VbbHcc_algo_Z_mass__373->SetBinError(36,0.00889472);
   VbbHcc_algo_Z_mass__373->SetBinError(37,0.008154156);
   VbbHcc_algo_Z_mass__373->SetBinError(38,0.008297989);
   VbbHcc_algo_Z_mass__373->SetBinError(39,0.008033552);
   VbbHcc_algo_Z_mass__373->SetBinError(40,0.008294838);
   VbbHcc_algo_Z_mass__373->SetBinError(41,0.0524142);
   VbbHcc_algo_Z_mass__373->SetEntries(112352);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_mass__373->SetFillColor(ci);
   VbbHcc_algo_Z_mass__373->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__373->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__373->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__373->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__373->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__373->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__373->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__373->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__373->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__373->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__373->Draw("HIST");
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
