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
   Z_mass_both_16->Range(-80,-1.037042,453.3333,9.333373);
   Z_mass_both_16->SetFillColor(0);
   Z_mass_both_16->SetBorderMode(0);
   Z_mass_both_16->SetBorderSize(2);
   Z_mass_both_16->SetLeftMargin(0.15);
   Z_mass_both_16->SetFrameBorderMode(0);
   Z_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass__728 = new TH1D("VbbHcc_both_Z_mass__728","",40,0,400);
   VbbHcc_both_Z_mass__728->SetBinContent(3,0.07710242);
   VbbHcc_both_Z_mass__728->SetBinContent(4,0.8705264);
   VbbHcc_both_Z_mass__728->SetBinContent(5,7.901268);
   VbbHcc_both_Z_mass__728->SetBinContent(6,4.649583);
   VbbHcc_both_Z_mass__728->SetBinContent(7,7.191083);
   VbbHcc_both_Z_mass__728->SetBinContent(8,6.338205);
   VbbHcc_both_Z_mass__728->SetBinContent(9,6.672039);
   VbbHcc_both_Z_mass__728->SetBinContent(10,4.428234);
   VbbHcc_both_Z_mass__728->SetBinContent(11,5.826698);
   VbbHcc_both_Z_mass__728->SetBinContent(12,5.347426);
   VbbHcc_both_Z_mass__728->SetBinContent(13,4.551737);
   VbbHcc_both_Z_mass__728->SetBinContent(14,3.90484);
   VbbHcc_both_Z_mass__728->SetBinContent(15,4.265886);
   VbbHcc_both_Z_mass__728->SetBinContent(16,2.899813);
   VbbHcc_both_Z_mass__728->SetBinContent(17,5.886798);
   VbbHcc_both_Z_mass__728->SetBinContent(18,3.398689);
   VbbHcc_both_Z_mass__728->SetBinContent(19,3.06673);
   VbbHcc_both_Z_mass__728->SetBinContent(20,2.698821);
   VbbHcc_both_Z_mass__728->SetBinContent(21,2.45716);
   VbbHcc_both_Z_mass__728->SetBinContent(22,4.780146);
   VbbHcc_both_Z_mass__728->SetBinContent(23,2.28179);
   VbbHcc_both_Z_mass__728->SetBinContent(24,2.686055);
   VbbHcc_both_Z_mass__728->SetBinContent(25,6.18928);
   VbbHcc_both_Z_mass__728->SetBinContent(26,1.286841);
   VbbHcc_both_Z_mass__728->SetBinContent(27,1.389404);
   VbbHcc_both_Z_mass__728->SetBinContent(28,1.927592);
   VbbHcc_both_Z_mass__728->SetBinContent(29,2.185866);
   VbbHcc_both_Z_mass__728->SetBinContent(30,1.033488);
   VbbHcc_both_Z_mass__728->SetBinContent(31,1.919351);
   VbbHcc_both_Z_mass__728->SetBinContent(32,1.363108);
   VbbHcc_both_Z_mass__728->SetBinContent(33,3.338931);
   VbbHcc_both_Z_mass__728->SetBinContent(34,1.844185);
   VbbHcc_both_Z_mass__728->SetBinContent(35,2.187488);
   VbbHcc_both_Z_mass__728->SetBinContent(36,0.9024862);
   VbbHcc_both_Z_mass__728->SetBinContent(37,0.6162452);
   VbbHcc_both_Z_mass__728->SetBinContent(38,2.00335);
   VbbHcc_both_Z_mass__728->SetBinContent(39,2.002772);
   VbbHcc_both_Z_mass__728->SetBinContent(40,0.5830693);
   VbbHcc_both_Z_mass__728->SetBinContent(41,56.46114);
   VbbHcc_both_Z_mass__728->SetBinError(3,0.06812088);
   VbbHcc_both_Z_mass__728->SetBinError(4,0.3005162);
   VbbHcc_both_Z_mass__728->SetBinError(5,4.285374);
   VbbHcc_both_Z_mass__728->SetBinError(6,1.097616);
   VbbHcc_both_Z_mass__728->SetBinError(7,1.619616);
   VbbHcc_both_Z_mass__728->SetBinError(8,1.327674);
   VbbHcc_both_Z_mass__728->SetBinError(9,1.533045);
   VbbHcc_both_Z_mass__728->SetBinError(10,0.6819041);
   VbbHcc_both_Z_mass__728->SetBinError(11,1.258235);
   VbbHcc_both_Z_mass__728->SetBinError(12,1.013693);
   VbbHcc_both_Z_mass__728->SetBinError(13,1.287456);
   VbbHcc_both_Z_mass__728->SetBinError(14,1.028062);
   VbbHcc_both_Z_mass__728->SetBinError(15,0.9890831);
   VbbHcc_both_Z_mass__728->SetBinError(16,0.5845713);
   VbbHcc_both_Z_mass__728->SetBinError(17,1.672539);
   VbbHcc_both_Z_mass__728->SetBinError(18,0.980284);
   VbbHcc_both_Z_mass__728->SetBinError(19,0.918436);
   VbbHcc_both_Z_mass__728->SetBinError(20,0.5946357);
   VbbHcc_both_Z_mass__728->SetBinError(21,0.455919);
   VbbHcc_both_Z_mass__728->SetBinError(22,1.511467);
   VbbHcc_both_Z_mass__728->SetBinError(23,1.050273);
   VbbHcc_both_Z_mass__728->SetBinError(24,0.9502806);
   VbbHcc_both_Z_mass__728->SetBinError(25,4.489106);
   VbbHcc_both_Z_mass__728->SetBinError(26,0.3456745);
   VbbHcc_both_Z_mass__728->SetBinError(27,0.3509664);
   VbbHcc_both_Z_mass__728->SetBinError(28,1.06516);
   VbbHcc_both_Z_mass__728->SetBinError(29,0.9627041);
   VbbHcc_both_Z_mass__728->SetBinError(30,0.3127877);
   VbbHcc_both_Z_mass__728->SetBinError(31,0.4589049);
   VbbHcc_both_Z_mass__728->SetBinError(32,0.3351923);
   VbbHcc_both_Z_mass__728->SetBinError(33,1.158604);
   VbbHcc_both_Z_mass__728->SetBinError(34,0.5328065);
   VbbHcc_both_Z_mass__728->SetBinError(35,1.143983);
   VbbHcc_both_Z_mass__728->SetBinError(36,0.2793532);
   VbbHcc_both_Z_mass__728->SetBinError(37,0.2028635);
   VbbHcc_both_Z_mass__728->SetBinError(38,0.8500854);
   VbbHcc_both_Z_mass__728->SetBinError(39,0.8394643);
   VbbHcc_both_Z_mass__728->SetBinError(40,0.2201927);
   VbbHcc_both_Z_mass__728->SetBinError(41,3.323992);
   VbbHcc_both_Z_mass__728->SetEntries(3785);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_mass__728->SetFillColor(ci);
   VbbHcc_both_Z_mass__728->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass__728->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass__728->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__728->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__728->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__728->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__728->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__728->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__728->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__728->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__728->Draw("HIST");
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
