#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_ZZ_tagOnly_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_ZZ_tagOnly_16/Z_jetmass_JEC_ZZ_tagOnly_16
//=========  (Fri May 24 12:42:25 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_ZZ_tagOnly_16 = new TCanvas("Z_jetmass_JEC_ZZ_tagOnly_16", "Z_jetmass_JEC_ZZ_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_ZZ_tagOnly_16->SetHighLightColor(2);
   Z_jetmass_JEC_ZZ_tagOnly_16->Range(-60,-4.353902,340,39.18512);
   Z_jetmass_JEC_ZZ_tagOnly_16->SetFillColor(0);
   Z_jetmass_JEC_ZZ_tagOnly_16->SetFillStyle(4000);
   Z_jetmass_JEC_ZZ_tagOnly_16->SetBorderMode(0);
   Z_jetmass_JEC_ZZ_tagOnly_16->SetBorderSize(2);
   Z_jetmass_JEC_ZZ_tagOnly_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_ZZ_tagOnly_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_ZZ_tagOnly_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_ZZ_tagOnly_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_ZZ_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_jetmass_JEC__1438 = new TH1D("VH_tagOnly_Z_jetmass_JEC__1438","",150,0,300);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(2,0.3399482);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(3,0.8108501);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(4,8.834546);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(5,33.17258);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(6,32.20013);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(7,27.14846);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(8,18.54886);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(9,13.68613);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(10,9.293682);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(11,5.22713);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(12,3.083982);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(13,3.592475);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(14,2.383387);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(15,1.609389);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(16,0.9319883);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(17,0.6538208);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(18,0.5958403);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(19,0.9979714);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(20,1.507323);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(22,0.6859439);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(23,0.2380728);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(24,0.2644574);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(26,0.2346839);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(28,0.2307977);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(32,0.4225152);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(35,0.2055858);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(43,0.1996654);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(53,0.2669709);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinContent(54,0.2077888);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(2,0.3399482);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(3,0.4787384);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(4,1.336407);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(5,2.630103);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(6,2.556653);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(7,2.411662);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(8,1.966979);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(9,1.694809);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(10,1.408341);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(11,1.078635);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(12,0.7996588);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(13,0.8775164);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(14,0.7012869);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(15,0.5796934);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(16,0.4743197);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(17,0.3817195);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(18,0.3450368);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(19,0.5007651);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(20,0.6203902);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(22,0.3993344);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(23,0.2380728);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(24,0.2644574);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(26,0.2346839);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(28,0.2307977);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(32,0.2995926);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(35,0.2055858);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(43,0.1996654);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(53,0.2669709);
   VH_tagOnly_Z_jetmass_JEC__1438->SetBinError(54,0.2077888);
   VH_tagOnly_Z_jetmass_JEC__1438->SetEntries(834);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_jetmass_JEC__1438->SetLineColor(ci);
   VH_tagOnly_Z_jetmass_JEC__1438->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_tagOnly_Z_jetmass_JEC__1438->GetXaxis()->SetRange(1,150);
   VH_tagOnly_Z_jetmass_JEC__1438->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_JEC__1438->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetmass_JEC__1438->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_JEC__1438->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagOnly_Z_jetmass_JEC__1438->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_JEC__1438->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_jetmass_JEC__1438->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_jetmass_JEC__1438->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_jetmass_JEC__1438->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_JEC__1438->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_JEC__1438->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetmass_JEC__1438->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_JEC__1438->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_ZZ_tagOnly_16->Modified();
   Z_jetmass_JEC_ZZ_tagOnly_16->cd();
   Z_jetmass_JEC_ZZ_tagOnly_16->SetSelected(Z_jetmass_JEC_ZZ_tagOnly_16);
}
