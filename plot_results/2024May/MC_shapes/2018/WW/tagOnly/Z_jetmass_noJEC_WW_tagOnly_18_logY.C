#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_WW_tagOnly_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_WW_tagOnly_18/Z_jetmass_noJEC_WW_tagOnly_18
//=========  (Thu May 23 20:48:44 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_noJEC_WW_tagOnly_18 = new TCanvas("Z_jetmass_noJEC_WW_tagOnly_18", "Z_jetmass_noJEC_WW_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_WW_tagOnly_18->SetHighLightColor(2);
   Z_jetmass_noJEC_WW_tagOnly_18->Range(-60,-0.7605471,340,1.812419);
   Z_jetmass_noJEC_WW_tagOnly_18->SetFillColor(0);
   Z_jetmass_noJEC_WW_tagOnly_18->SetFillStyle(4000);
   Z_jetmass_noJEC_WW_tagOnly_18->SetBorderMode(0);
   Z_jetmass_noJEC_WW_tagOnly_18->SetBorderSize(2);
   Z_jetmass_noJEC_WW_tagOnly_18->SetLogy();
   Z_jetmass_noJEC_WW_tagOnly_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_WW_tagOnly_18->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_WW_tagOnly_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_WW_tagOnly_18->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_WW_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_jetmass_noJEC__1404 = new TH1D("VH_tagOnly_Z_jetmass_noJEC__1404","",150,0,300);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(3,0.6646294);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(4,7.613401);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(5,7.92671);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(6,18.94843);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(7,13.28842);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(8,10.5808);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(9,15.34768);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(10,3.699856);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(11,7.130541);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(12,3.800832);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(13,5.642977);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(14,3.328293);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(15,2.180293);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(17,2.035716);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(18,2.246414);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(23,1.18051);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(24,1.26019);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(36,0.6277395);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinContent(47,0.6842769);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(3,0.6646294);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(4,3.325324);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(5,2.990447);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(6,3.630709);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(7,3.304032);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(8,2.529795);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(9,4.062748);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(10,1.426111);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(11,2.823477);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(12,2.133676);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(13,2.526074);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(14,1.860896);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(15,1.458371);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(17,1.200719);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(18,1.69873);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(23,1.18051);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(24,1.26019);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(36,0.6277395);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetBinError(47,0.6842769);
   VH_tagOnly_Z_jetmass_noJEC__1404->SetEntries(144);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_jetmass_noJEC__1404->SetLineColor(ci);
   VH_tagOnly_Z_jetmass_noJEC__1404->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VH_tagOnly_Z_jetmass_noJEC__1404->GetXaxis()->SetRange(1,150);
   VH_tagOnly_Z_jetmass_noJEC__1404->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_noJEC__1404->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetmass_noJEC__1404->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_noJEC__1404->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagOnly_Z_jetmass_noJEC__1404->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_noJEC__1404->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_jetmass_noJEC__1404->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_jetmass_noJEC__1404->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_jetmass_noJEC__1404->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_noJEC__1404->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_noJEC__1404->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetmass_noJEC__1404->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_noJEC__1404->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_WW_tagOnly_18->Modified();
   Z_jetmass_noJEC_WW_tagOnly_18->cd();
   Z_jetmass_noJEC_WW_tagOnly_18->SetSelected(Z_jetmass_noJEC_WW_tagOnly_18);
}
