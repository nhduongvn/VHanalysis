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
   Z_mass_algo_16->Range(-80,-98.20055,453.3333,883.8049);
   Z_mass_algo_16->SetFillColor(0);
   Z_mass_algo_16->SetBorderMode(0);
   Z_mass_algo_16->SetBorderSize(2);
   Z_mass_algo_16->SetLeftMargin(0.15);
   Z_mass_algo_16->SetFrameBorderMode(0);
   Z_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__367 = new TH1D("VbbHcc_algo_Z_mass__367","",40,0,400);
   VbbHcc_algo_Z_mass__367->SetBinContent(3,0.2442016);
   VbbHcc_algo_Z_mass__367->SetBinContent(4,18.14995);
   VbbHcc_algo_Z_mass__367->SetBinContent(5,106.8366);
   VbbHcc_algo_Z_mass__367->SetBinContent(6,228.1797);
   VbbHcc_algo_Z_mass__367->SetBinContent(7,319.4557);
   VbbHcc_algo_Z_mass__367->SetBinContent(8,441.6224);
   VbbHcc_algo_Z_mass__367->SetBinContent(9,741.7971);
   VbbHcc_algo_Z_mass__367->SetBinContent(10,748.1946);
   VbbHcc_algo_Z_mass__367->SetBinContent(11,577.572);
   VbbHcc_algo_Z_mass__367->SetBinContent(12,458.8855);
   VbbHcc_algo_Z_mass__367->SetBinContent(13,393.6801);
   VbbHcc_algo_Z_mass__367->SetBinContent(14,378.2107);
   VbbHcc_algo_Z_mass__367->SetBinContent(15,362.0305);
   VbbHcc_algo_Z_mass__367->SetBinContent(16,336.489);
   VbbHcc_algo_Z_mass__367->SetBinContent(17,303.5536);
   VbbHcc_algo_Z_mass__367->SetBinContent(18,297.3882);
   VbbHcc_algo_Z_mass__367->SetBinContent(19,290.2017);
   VbbHcc_algo_Z_mass__367->SetBinContent(20,253.1762);
   VbbHcc_algo_Z_mass__367->SetBinContent(21,227.7852);
   VbbHcc_algo_Z_mass__367->SetBinContent(22,242.8127);
   VbbHcc_algo_Z_mass__367->SetBinContent(23,222.0795);
   VbbHcc_algo_Z_mass__367->SetBinContent(24,196.1022);
   VbbHcc_algo_Z_mass__367->SetBinContent(25,171.9451);
   VbbHcc_algo_Z_mass__367->SetBinContent(26,159.4613);
   VbbHcc_algo_Z_mass__367->SetBinContent(27,173.6233);
   VbbHcc_algo_Z_mass__367->SetBinContent(28,142.9836);
   VbbHcc_algo_Z_mass__367->SetBinContent(29,144.7524);
   VbbHcc_algo_Z_mass__367->SetBinContent(30,135.5127);
   VbbHcc_algo_Z_mass__367->SetBinContent(31,150.616);
   VbbHcc_algo_Z_mass__367->SetBinContent(32,120.603);
   VbbHcc_algo_Z_mass__367->SetBinContent(33,131.4934);
   VbbHcc_algo_Z_mass__367->SetBinContent(34,112.3836);
   VbbHcc_algo_Z_mass__367->SetBinContent(35,112.3368);
   VbbHcc_algo_Z_mass__367->SetBinContent(36,109.7813);
   VbbHcc_algo_Z_mass__367->SetBinContent(37,101.1818);
   VbbHcc_algo_Z_mass__367->SetBinContent(38,94.45907);
   VbbHcc_algo_Z_mass__367->SetBinContent(39,94.33136);
   VbbHcc_algo_Z_mass__367->SetBinContent(40,94.26893);
   VbbHcc_algo_Z_mass__367->SetBinContent(41,3319.689);
   VbbHcc_algo_Z_mass__367->SetBinError(3,0.2442016);
   VbbHcc_algo_Z_mass__367->SetBinError(4,4.579528);
   VbbHcc_algo_Z_mass__367->SetBinError(5,10.92995);
   VbbHcc_algo_Z_mass__367->SetBinError(6,14.75871);
   VbbHcc_algo_Z_mass__367->SetBinError(7,15.98469);
   VbbHcc_algo_Z_mass__367->SetBinError(8,18.20983);
   VbbHcc_algo_Z_mass__367->SetBinError(9,24.68157);
   VbbHcc_algo_Z_mass__367->SetBinError(10,22.59271);
   VbbHcc_algo_Z_mass__367->SetBinError(11,20.60723);
   VbbHcc_algo_Z_mass__367->SetBinError(12,18.81564);
   VbbHcc_algo_Z_mass__367->SetBinError(13,16.30476);
   VbbHcc_algo_Z_mass__367->SetBinError(14,15.07196);
   VbbHcc_algo_Z_mass__367->SetBinError(15,15.36094);
   VbbHcc_algo_Z_mass__367->SetBinError(16,14.15886);
   VbbHcc_algo_Z_mass__367->SetBinError(17,11.85955);
   VbbHcc_algo_Z_mass__367->SetBinError(18,13.1289);
   VbbHcc_algo_Z_mass__367->SetBinError(19,12.54065);
   VbbHcc_algo_Z_mass__367->SetBinError(20,10.90809);
   VbbHcc_algo_Z_mass__367->SetBinError(21,10.52124);
   VbbHcc_algo_Z_mass__367->SetBinError(22,12.17271);
   VbbHcc_algo_Z_mass__367->SetBinError(23,10.99915);
   VbbHcc_algo_Z_mass__367->SetBinError(24,10.24586);
   VbbHcc_algo_Z_mass__367->SetBinError(25,8.649512);
   VbbHcc_algo_Z_mass__367->SetBinError(26,6.807344);
   VbbHcc_algo_Z_mass__367->SetBinError(27,9.983321);
   VbbHcc_algo_Z_mass__367->SetBinError(28,6.75146);
   VbbHcc_algo_Z_mass__367->SetBinError(29,8.562925);
   VbbHcc_algo_Z_mass__367->SetBinError(30,8.024068);
   VbbHcc_algo_Z_mass__367->SetBinError(31,10.6586);
   VbbHcc_algo_Z_mass__367->SetBinError(32,7.40984);
   VbbHcc_algo_Z_mass__367->SetBinError(33,8.908116);
   VbbHcc_algo_Z_mass__367->SetBinError(34,7.663891);
   VbbHcc_algo_Z_mass__367->SetBinError(35,8.087329);
   VbbHcc_algo_Z_mass__367->SetBinError(36,7.483438);
   VbbHcc_algo_Z_mass__367->SetBinError(37,7.628606);
   VbbHcc_algo_Z_mass__367->SetBinError(38,6.230508);
   VbbHcc_algo_Z_mass__367->SetBinError(39,6.792869);
   VbbHcc_algo_Z_mass__367->SetBinError(40,7.00931);
   VbbHcc_algo_Z_mass__367->SetBinError(41,39.93731);
   VbbHcc_algo_Z_mass__367->SetEntries(93738);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_mass__367->SetFillColor(ci);
   VbbHcc_algo_Z_mass__367->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__367->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__367->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__367->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__367->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__367->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__367->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__367->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__367->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__367->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__367->Draw("HIST");
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
