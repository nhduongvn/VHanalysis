#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_WZ_DHZfirst_18()
{
//=========Macro generated from canvas: Z_mass_WZ_DHZfirst_18/Z_mass_WZ_DHZfirst_18
//=========  (Fri May 24 12:42:26 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_WZ_DHZfirst_18 = new TCanvas("Z_mass_WZ_DHZfirst_18", "Z_mass_WZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_WZ_DHZfirst_18->SetHighLightColor(2);
   Z_mass_WZ_DHZfirst_18->Range(-60,-1.946058,340,17.51452);
   Z_mass_WZ_DHZfirst_18->SetFillColor(0);
   Z_mass_WZ_DHZfirst_18->SetFillStyle(4000);
   Z_mass_WZ_DHZfirst_18->SetBorderMode(0);
   Z_mass_WZ_DHZfirst_18->SetBorderSize(2);
   Z_mass_WZ_DHZfirst_18->SetLeftMargin(0.15);
   Z_mass_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_mass_WZ_DHZfirst_18->SetFrameBorderMode(0);
   Z_mass_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_mass_WZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_mass__1467 = new TH1D("VH_DHZfirst_Z_mass__1467","",200,0,2000);
   VH_DHZfirst_Z_mass__1467->SetBinContent(5,0.2979028);
   VH_DHZfirst_Z_mass__1467->SetBinContent(6,0.7781391);
   VH_DHZfirst_Z_mass__1467->SetBinContent(8,2.974813);
   VH_DHZfirst_Z_mass__1467->SetBinContent(9,14.25505);
   VH_DHZfirst_Z_mass__1467->SetBinContent(10,14.82711);
   VH_DHZfirst_Z_mass__1467->SetBinContent(11,6.123407);
   VH_DHZfirst_Z_mass__1467->SetBinContent(12,1.933326);
   VH_DHZfirst_Z_mass__1467->SetBinContent(13,0.7972969);
   VH_DHZfirst_Z_mass__1467->SetBinContent(14,1.844276);
   VH_DHZfirst_Z_mass__1467->SetBinContent(15,0.2118123);
   VH_DHZfirst_Z_mass__1467->SetBinContent(17,0.5629164);
   VH_DHZfirst_Z_mass__1467->SetBinContent(18,0.3732109);
   VH_DHZfirst_Z_mass__1467->SetBinContent(21,0.5748383);
   VH_DHZfirst_Z_mass__1467->SetBinContent(22,0.8422943);
   VH_DHZfirst_Z_mass__1467->SetBinContent(23,0.3678572);
   VH_DHZfirst_Z_mass__1467->SetBinContent(26,0.9331785);
   VH_DHZfirst_Z_mass__1467->SetBinContent(35,0.3650346);
   VH_DHZfirst_Z_mass__1467->SetBinContent(44,0.3716468);
   VH_DHZfirst_Z_mass__1467->SetBinContent(60,0.8015598);
   VH_DHZfirst_Z_mass__1467->SetBinContent(65,0.5373678);
   VH_DHZfirst_Z_mass__1467->SetBinContent(80,0.4064084);
   VH_DHZfirst_Z_mass__1467->SetBinContent(109,0.3605006);
   VH_DHZfirst_Z_mass__1467->SetBinContent(124,1.175485);
   VH_DHZfirst_Z_mass__1467->SetBinContent(143,0.982841);
   VH_DHZfirst_Z_mass__1467->SetBinContent(147,0.3736304);
   VH_DHZfirst_Z_mass__1467->SetBinContent(165,0.4255825);
   VH_DHZfirst_Z_mass__1467->SetBinContent(192,1.274231);
   VH_DHZfirst_Z_mass__1467->SetBinContent(198,0.4328347);
   VH_DHZfirst_Z_mass__1467->SetBinError(5,0.2979028);
   VH_DHZfirst_Z_mass__1467->SetBinError(6,0.7781391);
   VH_DHZfirst_Z_mass__1467->SetBinError(8,1.601324);
   VH_DHZfirst_Z_mass__1467->SetBinError(9,3.8307);
   VH_DHZfirst_Z_mass__1467->SetBinError(10,3.357604);
   VH_DHZfirst_Z_mass__1467->SetBinError(11,1.97586);
   VH_DHZfirst_Z_mass__1467->SetBinError(12,1.270234);
   VH_DHZfirst_Z_mass__1467->SetBinError(13,0.5661599);
   VH_DHZfirst_Z_mass__1467->SetBinError(14,1.076654);
   VH_DHZfirst_Z_mass__1467->SetBinError(15,0.2118123);
   VH_DHZfirst_Z_mass__1467->SetBinError(17,0.5629164);
   VH_DHZfirst_Z_mass__1467->SetBinError(18,0.3732109);
   VH_DHZfirst_Z_mass__1467->SetBinError(21,0.5748383);
   VH_DHZfirst_Z_mass__1467->SetBinError(22,0.8422943);
   VH_DHZfirst_Z_mass__1467->SetBinError(23,0.3678572);
   VH_DHZfirst_Z_mass__1467->SetBinError(26,0.6657348);
   VH_DHZfirst_Z_mass__1467->SetBinError(35,0.3650346);
   VH_DHZfirst_Z_mass__1467->SetBinError(44,0.3716468);
   VH_DHZfirst_Z_mass__1467->SetBinError(60,0.8015598);
   VH_DHZfirst_Z_mass__1467->SetBinError(65,0.5373678);
   VH_DHZfirst_Z_mass__1467->SetBinError(80,0.4064084);
   VH_DHZfirst_Z_mass__1467->SetBinError(109,0.3605006);
   VH_DHZfirst_Z_mass__1467->SetBinError(124,1.175485);
   VH_DHZfirst_Z_mass__1467->SetBinError(143,0.982841);
   VH_DHZfirst_Z_mass__1467->SetBinError(147,0.3736304);
   VH_DHZfirst_Z_mass__1467->SetBinError(165,0.4255825);
   VH_DHZfirst_Z_mass__1467->SetBinError(192,1.274231);
   VH_DHZfirst_Z_mass__1467->SetBinError(198,0.4328347);
   VH_DHZfirst_Z_mass__1467->SetEntries(90);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_mass__1467->SetLineColor(ci);
   VH_DHZfirst_Z_mass__1467->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VH_DHZfirst_Z_mass__1467->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_mass__1467->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__1467->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__1467->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__1467->GetYaxis()->SetTitle("Events/10.0 GeV");
   VH_DHZfirst_Z_mass__1467->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__1467->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_mass__1467->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_mass__1467->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_mass__1467->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__1467->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__1467->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__1467->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__1467->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_WZ_DHZfirst_18->Modified();
   Z_mass_WZ_DHZfirst_18->cd();
   Z_mass_WZ_DHZfirst_18->SetSelected(Z_mass_WZ_DHZfirst_18);
}
