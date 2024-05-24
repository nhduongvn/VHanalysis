#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_WW_tagFirst_18()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_WW_tagFirst_18/Z_jetmass_noJEC_WW_tagFirst_18
//=========  (Fri May 24 12:42:14 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_noJEC_WW_tagFirst_18 = new TCanvas("Z_jetmass_noJEC_WW_tagFirst_18", "Z_jetmass_noJEC_WW_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_WW_tagFirst_18->SetHighLightColor(2);
   Z_jetmass_noJEC_WW_tagFirst_18->Range(-60,-2.420537,340,21.78483);
   Z_jetmass_noJEC_WW_tagFirst_18->SetFillColor(0);
   Z_jetmass_noJEC_WW_tagFirst_18->SetFillStyle(4000);
   Z_jetmass_noJEC_WW_tagFirst_18->SetBorderMode(0);
   Z_jetmass_noJEC_WW_tagFirst_18->SetBorderSize(2);
   Z_jetmass_noJEC_WW_tagFirst_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_WW_tagFirst_18->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_WW_tagFirst_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_WW_tagFirst_18->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_WW_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_jetmass_noJEC__684 = new TH1D("VH_tagFirst_Z_jetmass_noJEC__684","",150,0,300);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(3,1.897529);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(4,7.613401);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(5,8.388474);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(6,18.44218);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(7,13.68753);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(8,10.5808);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(9,15.34768);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(10,3.699856);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(11,8.462485);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(12,4.154295);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(13,5.642977);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(14,3.793093);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(15,3.061362);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(17,2.035716);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(18,2.246414);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(23,1.18051);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(24,1.26019);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(36,0.6277395);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinContent(47,0.6842769);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(3,1.400633);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(4,3.325324);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(5,3.149374);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(6,3.595242);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(7,3.328049);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(8,2.529795);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(9,4.062748);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(10,1.426111);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(11,2.984976);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(12,2.162755);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(13,2.526074);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(14,1.918065);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(15,1.703857);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(17,1.200719);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(18,1.69873);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(23,1.18051);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(24,1.26019);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(36,0.6277395);
   VH_tagFirst_Z_jetmass_noJEC__684->SetBinError(47,0.6842769);
   VH_tagFirst_Z_jetmass_noJEC__684->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_jetmass_noJEC__684->SetLineColor(ci);
   VH_tagFirst_Z_jetmass_noJEC__684->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VH_tagFirst_Z_jetmass_noJEC__684->GetXaxis()->SetRange(1,150);
   VH_tagFirst_Z_jetmass_noJEC__684->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_noJEC__684->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_jetmass_noJEC__684->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_noJEC__684->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagFirst_Z_jetmass_noJEC__684->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_noJEC__684->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_jetmass_noJEC__684->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_jetmass_noJEC__684->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_jetmass_noJEC__684->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_noJEC__684->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_noJEC__684->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_jetmass_noJEC__684->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_noJEC__684->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_WW_tagFirst_18->Modified();
   Z_jetmass_noJEC_WW_tagFirst_18->cd();
   Z_jetmass_noJEC_WW_tagFirst_18->SetSelected(Z_jetmass_noJEC_WW_tagFirst_18);
}
