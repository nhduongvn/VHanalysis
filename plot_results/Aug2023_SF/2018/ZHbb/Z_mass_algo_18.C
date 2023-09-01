#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_algo_18()
{
//=========Macro generated from canvas: Z_mass_algo_18/Z_mass_algo_18
//=========  (Fri Sep  1 13:34:47 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_algo_18 = new TCanvas("Z_mass_algo_18", "Z_mass_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_algo_18->SetHighLightColor(2);
   Z_mass_algo_18->Range(-80,-2.225563,453.3333,20.03007);
   Z_mass_algo_18->SetFillColor(0);
   Z_mass_algo_18->SetBorderMode(0);
   Z_mass_algo_18->SetBorderSize(2);
   Z_mass_algo_18->SetLeftMargin(0.15);
   Z_mass_algo_18->SetFrameBorderMode(0);
   Z_mass_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__372 = new TH1D("VbbHcc_algo_Z_mass__372","",40,0,400);
   VbbHcc_algo_Z_mass__372->SetBinContent(4,0.06714159);
   VbbHcc_algo_Z_mass__372->SetBinContent(5,0.5272045);
   VbbHcc_algo_Z_mass__372->SetBinContent(6,1.564627);
   VbbHcc_algo_Z_mass__372->SetBinContent(7,3.509382);
   VbbHcc_algo_Z_mass__372->SetBinContent(8,8.137174);
   VbbHcc_algo_Z_mass__372->SetBinContent(9,15.49993);
   VbbHcc_algo_Z_mass__372->SetBinContent(10,16.95667);
   VbbHcc_algo_Z_mass__372->SetBinContent(11,11.75337);
   VbbHcc_algo_Z_mass__372->SetBinContent(12,9.588551);
   VbbHcc_algo_Z_mass__372->SetBinContent(13,7.965018);
   VbbHcc_algo_Z_mass__372->SetBinContent(14,5.323016);
   VbbHcc_algo_Z_mass__372->SetBinContent(15,2.870417);
   VbbHcc_algo_Z_mass__372->SetBinContent(16,2.140567);
   VbbHcc_algo_Z_mass__372->SetBinContent(17,1.758172);
   VbbHcc_algo_Z_mass__372->SetBinContent(18,1.618471);
   VbbHcc_algo_Z_mass__372->SetBinContent(19,1.48883);
   VbbHcc_algo_Z_mass__372->SetBinContent(20,1.37199);
   VbbHcc_algo_Z_mass__372->SetBinContent(21,1.27601);
   VbbHcc_algo_Z_mass__372->SetBinContent(22,1.329904);
   VbbHcc_algo_Z_mass__372->SetBinContent(23,1.166716);
   VbbHcc_algo_Z_mass__372->SetBinContent(24,1.196408);
   VbbHcc_algo_Z_mass__372->SetBinContent(25,1.082812);
   VbbHcc_algo_Z_mass__372->SetBinContent(26,1.161147);
   VbbHcc_algo_Z_mass__372->SetBinContent(27,1.023496);
   VbbHcc_algo_Z_mass__372->SetBinContent(28,0.9706549);
   VbbHcc_algo_Z_mass__372->SetBinContent(29,1.051895);
   VbbHcc_algo_Z_mass__372->SetBinContent(30,0.8868369);
   VbbHcc_algo_Z_mass__372->SetBinContent(31,0.9474085);
   VbbHcc_algo_Z_mass__372->SetBinContent(32,0.8380936);
   VbbHcc_algo_Z_mass__372->SetBinContent(33,0.8274558);
   VbbHcc_algo_Z_mass__372->SetBinContent(34,0.8089451);
   VbbHcc_algo_Z_mass__372->SetBinContent(35,0.7614424);
   VbbHcc_algo_Z_mass__372->SetBinContent(36,0.797093);
   VbbHcc_algo_Z_mass__372->SetBinContent(37,0.6738325);
   VbbHcc_algo_Z_mass__372->SetBinContent(38,0.6912867);
   VbbHcc_algo_Z_mass__372->SetBinContent(39,0.6817933);
   VbbHcc_algo_Z_mass__372->SetBinContent(40,0.5986711);
   VbbHcc_algo_Z_mass__372->SetBinContent(41,31.51376);
   VbbHcc_algo_Z_mass__372->SetBinError(4,0.01745193);
   VbbHcc_algo_Z_mass__372->SetBinError(5,0.04368353);
   VbbHcc_algo_Z_mass__372->SetBinError(6,0.07886763);
   VbbHcc_algo_Z_mass__372->SetBinError(7,0.1157999);
   VbbHcc_algo_Z_mass__372->SetBinError(8,0.1913531);
   VbbHcc_algo_Z_mass__372->SetBinError(9,0.2798478);
   VbbHcc_algo_Z_mass__372->SetBinError(10,0.257061);
   VbbHcc_algo_Z_mass__372->SetBinError(11,0.2250341);
   VbbHcc_algo_Z_mass__372->SetBinError(12,0.2010352);
   VbbHcc_algo_Z_mass__372->SetBinError(13,0.1851298);
   VbbHcc_algo_Z_mass__372->SetBinError(14,0.1515902);
   VbbHcc_algo_Z_mass__372->SetBinError(15,0.102384);
   VbbHcc_algo_Z_mass__372->SetBinError(16,0.1081929);
   VbbHcc_algo_Z_mass__372->SetBinError(17,0.1031905);
   VbbHcc_algo_Z_mass__372->SetBinError(18,0.07858093);
   VbbHcc_algo_Z_mass__372->SetBinError(19,0.075027);
   VbbHcc_algo_Z_mass__372->SetBinError(20,0.07256586);
   VbbHcc_algo_Z_mass__372->SetBinError(21,0.06884887);
   VbbHcc_algo_Z_mass__372->SetBinError(22,0.07839674);
   VbbHcc_algo_Z_mass__372->SetBinError(23,0.06634046);
   VbbHcc_algo_Z_mass__372->SetBinError(24,0.0784138);
   VbbHcc_algo_Z_mass__372->SetBinError(25,0.06665507);
   VbbHcc_algo_Z_mass__372->SetBinError(26,0.06660896);
   VbbHcc_algo_Z_mass__372->SetBinError(27,0.06153172);
   VbbHcc_algo_Z_mass__372->SetBinError(28,0.0607765);
   VbbHcc_algo_Z_mass__372->SetBinError(29,0.06630885);
   VbbHcc_algo_Z_mass__372->SetBinError(30,0.05733833);
   VbbHcc_algo_Z_mass__372->SetBinError(31,0.05941116);
   VbbHcc_algo_Z_mass__372->SetBinError(32,0.05921399);
   VbbHcc_algo_Z_mass__372->SetBinError(33,0.05652899);
   VbbHcc_algo_Z_mass__372->SetBinError(34,0.06188781);
   VbbHcc_algo_Z_mass__372->SetBinError(35,0.05330942);
   VbbHcc_algo_Z_mass__372->SetBinError(36,0.05831185);
   VbbHcc_algo_Z_mass__372->SetBinError(37,0.0510932);
   VbbHcc_algo_Z_mass__372->SetBinError(38,0.05107731);
   VbbHcc_algo_Z_mass__372->SetBinError(39,0.04972372);
   VbbHcc_algo_Z_mass__372->SetBinError(40,0.04861827);
   VbbHcc_algo_Z_mass__372->SetBinError(41,0.3622364);
   VbbHcc_algo_Z_mass__372->SetEntries(47604);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_algo_18->Modified();
   Z_mass_algo_18->cd();
   Z_mass_algo_18->SetSelected(Z_mass_algo_18);
}
