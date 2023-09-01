#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_both_16()
{
//=========Macro generated from canvas: Z_mass_both_16/Z_mass_both_16
//=========  (Fri Sep  1 13:23:41 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_both_16 = new TCanvas("Z_mass_both_16", "Z_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_16->SetHighLightColor(2);
   Z_mass_both_16->Range(-80,-985.3329,453.3333,8867.996);
   Z_mass_both_16->SetFillColor(0);
   Z_mass_both_16->SetBorderMode(0);
   Z_mass_both_16->SetBorderSize(2);
   Z_mass_both_16->SetLeftMargin(0.15);
   Z_mass_both_16->SetFrameBorderMode(0);
   Z_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass__724 = new TH1D("VbbHcc_both_Z_mass__724","",40,0,400);
   VbbHcc_both_Z_mass__724->SetBinContent(4,1339.41);
   VbbHcc_both_Z_mass__724->SetBinContent(5,4737.638);
   VbbHcc_both_Z_mass__724->SetBinContent(6,6148.653);
   VbbHcc_both_Z_mass__724->SetBinContent(7,7507.298);
   VbbHcc_both_Z_mass__724->SetBinContent(8,6991.21);
   VbbHcc_both_Z_mass__724->SetBinContent(9,5610.386);
   VbbHcc_both_Z_mass__724->SetBinContent(10,4921.078);
   VbbHcc_both_Z_mass__724->SetBinContent(11,4069.349);
   VbbHcc_both_Z_mass__724->SetBinContent(12,4557.209);
   VbbHcc_both_Z_mass__724->SetBinContent(13,2791.271);
   VbbHcc_both_Z_mass__724->SetBinContent(14,4881.158);
   VbbHcc_both_Z_mass__724->SetBinContent(15,3766.023);
   VbbHcc_both_Z_mass__724->SetBinContent(16,2166.233);
   VbbHcc_both_Z_mass__724->SetBinContent(17,2344.597);
   VbbHcc_both_Z_mass__724->SetBinContent(18,4046.252);
   VbbHcc_both_Z_mass__724->SetBinContent(19,2362.223);
   VbbHcc_both_Z_mass__724->SetBinContent(20,2762.357);
   VbbHcc_both_Z_mass__724->SetBinContent(21,2202.954);
   VbbHcc_both_Z_mass__724->SetBinContent(22,1433.956);
   VbbHcc_both_Z_mass__724->SetBinContent(23,2959.417);
   VbbHcc_both_Z_mass__724->SetBinContent(24,3370.49);
   VbbHcc_both_Z_mass__724->SetBinContent(25,1301.515);
   VbbHcc_both_Z_mass__724->SetBinContent(26,3235.513);
   VbbHcc_both_Z_mass__724->SetBinContent(27,1417.928);
   VbbHcc_both_Z_mass__724->SetBinContent(28,1337.326);
   VbbHcc_both_Z_mass__724->SetBinContent(29,1237.501);
   VbbHcc_both_Z_mass__724->SetBinContent(30,1821.937);
   VbbHcc_both_Z_mass__724->SetBinContent(31,2549.214);
   VbbHcc_both_Z_mass__724->SetBinContent(32,2059.075);
   VbbHcc_both_Z_mass__724->SetBinContent(33,816.612);
   VbbHcc_both_Z_mass__724->SetBinContent(34,2484.854);
   VbbHcc_both_Z_mass__724->SetBinContent(35,1107.625);
   VbbHcc_both_Z_mass__724->SetBinContent(36,1108.829);
   VbbHcc_both_Z_mass__724->SetBinContent(37,735.883);
   VbbHcc_both_Z_mass__724->SetBinContent(38,1423.96);
   VbbHcc_both_Z_mass__724->SetBinContent(39,1336.655);
   VbbHcc_both_Z_mass__724->SetBinContent(40,1903.686);
   VbbHcc_both_Z_mass__724->SetBinContent(41,39959.59);
   VbbHcc_both_Z_mass__724->SetBinError(4,456.3543);
   VbbHcc_both_Z_mass__724->SetBinError(5,1105.817);
   VbbHcc_both_Z_mass__724->SetBinError(6,1354.444);
   VbbHcc_both_Z_mass__724->SetBinError(7,1473.685);
   VbbHcc_both_Z_mass__724->SetBinError(8,1059.634);
   VbbHcc_both_Z_mass__724->SetBinError(9,934.8846);
   VbbHcc_both_Z_mass__724->SetBinError(10,1411.84);
   VbbHcc_both_Z_mass__724->SetBinError(11,767.4866);
   VbbHcc_both_Z_mass__724->SetBinError(12,1207.656);
   VbbHcc_both_Z_mass__724->SetBinError(13,548.5426);
   VbbHcc_both_Z_mass__724->SetBinError(14,1346.08);
   VbbHcc_both_Z_mass__724->SetBinError(15,790.3713);
   VbbHcc_both_Z_mass__724->SetBinError(16,452.7092);
   VbbHcc_both_Z_mass__724->SetBinError(17,549.6966);
   VbbHcc_both_Z_mass__724->SetBinError(18,1512.004);
   VbbHcc_both_Z_mass__724->SetBinError(19,595.0033);
   VbbHcc_both_Z_mass__724->SetBinError(20,1201.098);
   VbbHcc_both_Z_mass__724->SetBinError(21,574.5698);
   VbbHcc_both_Z_mass__724->SetBinError(22,397.1137);
   VbbHcc_both_Z_mass__724->SetBinError(23,1429.53);
   VbbHcc_both_Z_mass__724->SetBinError(24,1390.082);
   VbbHcc_both_Z_mass__724->SetBinError(25,390.9819);
   VbbHcc_both_Z_mass__724->SetBinError(26,1324.017);
   VbbHcc_both_Z_mass__724->SetBinError(27,391.4864);
   VbbHcc_both_Z_mass__724->SetBinError(28,410.5815);
   VbbHcc_both_Z_mass__724->SetBinError(29,359.8152);
   VbbHcc_both_Z_mass__724->SetBinError(30,1044.137);
   VbbHcc_both_Z_mass__724->SetBinError(31,1093.29);
   VbbHcc_both_Z_mass__724->SetBinError(32,545.8736);
   VbbHcc_both_Z_mass__724->SetBinError(33,315.373);
   VbbHcc_both_Z_mass__724->SetBinError(34,703.3876);
   VbbHcc_both_Z_mass__724->SetBinError(35,390.9381);
   VbbHcc_both_Z_mass__724->SetBinError(36,363.3197);
   VbbHcc_both_Z_mass__724->SetBinError(37,261.8913);
   VbbHcc_both_Z_mass__724->SetBinError(38,456.0866);
   VbbHcc_both_Z_mass__724->SetBinError(39,464.6472);
   VbbHcc_both_Z_mass__724->SetBinError(40,584.3592);
   VbbHcc_both_Z_mass__724->SetBinError(41,2794.742);
   VbbHcc_both_Z_mass__724->SetEntries(10042);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_mass__724->SetFillColor(ci);
   VbbHcc_both_Z_mass__724->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass__724->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass__724->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__724->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__724->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__724->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__724->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__724->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__724->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__724->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__724->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_both_16->Modified();
   Z_mass_both_16->cd();
   Z_mass_both_16->SetSelected(Z_mass_both_16);
}
