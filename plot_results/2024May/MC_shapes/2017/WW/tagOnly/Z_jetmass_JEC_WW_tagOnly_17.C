#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_WW_tagOnly_17()
{
//=========Macro generated from canvas: Z_jetmass_JEC_WW_tagOnly_17/Z_jetmass_JEC_WW_tagOnly_17
//=========  (Fri May 24 12:42:25 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_WW_tagOnly_17 = new TCanvas("Z_jetmass_JEC_WW_tagOnly_17", "Z_jetmass_JEC_WW_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_WW_tagOnly_17->SetHighLightColor(2);
   Z_jetmass_JEC_WW_tagOnly_17->Range(-60,-1.234844,340,11.11359);
   Z_jetmass_JEC_WW_tagOnly_17->SetFillColor(0);
   Z_jetmass_JEC_WW_tagOnly_17->SetFillStyle(4000);
   Z_jetmass_JEC_WW_tagOnly_17->SetBorderMode(0);
   Z_jetmass_JEC_WW_tagOnly_17->SetBorderSize(2);
   Z_jetmass_JEC_WW_tagOnly_17->SetLeftMargin(0.15);
   Z_jetmass_JEC_WW_tagOnly_17->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WW_tagOnly_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_WW_tagOnly_17->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WW_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_jetmass_JEC__1433 = new TH1D("VH_tagOnly_Z_jetmass_JEC__1433","",150,0,300);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(4,3.162903);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(5,8.234962);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(6,9.408331);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(7,7.993355);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(8,6.666987);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(9,5.797761);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(10,4.605681);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(11,2.127986);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(12,1.828478);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(13,0.4526219);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(14,1.172812);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(15,0.3010981);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(17,0.498961);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(18,1.104207);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(19,1.19007);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(20,0.2290723);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(21,0.5916579);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(22,0.3745624);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(27,0.4097937);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(28,0.3607803);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(30,0.2752491);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(32,0.3003038);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(34,0.2819712);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(39,0.2128171);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(45,0.07791458);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinContent(46,0.6293543);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(4,1.317398);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(5,1.886958);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(6,1.807324);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(7,1.668001);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(8,1.475895);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(9,1.449368);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(10,1.340232);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(11,0.9415746);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(12,0.7730355);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(13,0.3200767);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(14,0.6015653);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(15,0.3010981);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(17,0.3545565);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(18,0.5682687);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(19,0.5981024);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(20,0.2290723);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(21,0.4695451);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(22,0.3745624);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(27,0.4097937);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(28,0.3607803);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(30,0.2752491);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(32,0.3003038);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(34,0.2819712);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(39,0.2128171);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(45,0.07791458);
   VH_tagOnly_Z_jetmass_JEC__1433->SetBinError(46,0.4451342);
   VH_tagOnly_Z_jetmass_JEC__1433->SetEntries(198);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_jetmass_JEC__1433->SetLineColor(ci);
   VH_tagOnly_Z_jetmass_JEC__1433->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_tagOnly_Z_jetmass_JEC__1433->GetXaxis()->SetRange(1,150);
   VH_tagOnly_Z_jetmass_JEC__1433->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_JEC__1433->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetmass_JEC__1433->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_JEC__1433->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagOnly_Z_jetmass_JEC__1433->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_JEC__1433->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_jetmass_JEC__1433->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_jetmass_JEC__1433->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_jetmass_JEC__1433->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_JEC__1433->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_JEC__1433->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetmass_JEC__1433->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_JEC__1433->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_WW_tagOnly_17->Modified();
   Z_jetmass_JEC_WW_tagOnly_17->cd();
   Z_jetmass_JEC_WW_tagOnly_17->SetSelected(Z_jetmass_JEC_WW_tagOnly_17);
}
