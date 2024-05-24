#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_WW_tagOnly_17_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_WW_tagOnly_17/Z_jetmass_noJEC_WW_tagOnly_17
//=========  (Thu May 23 20:48:44 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_noJEC_WW_tagOnly_17 = new TCanvas("Z_jetmass_noJEC_WW_tagOnly_17", "Z_jetmass_noJEC_WW_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_WW_tagOnly_17->SetHighLightColor(2);
   Z_jetmass_noJEC_WW_tagOnly_17->Range(-60,-1.254179,340,1.557373);
   Z_jetmass_noJEC_WW_tagOnly_17->SetFillColor(0);
   Z_jetmass_noJEC_WW_tagOnly_17->SetFillStyle(4000);
   Z_jetmass_noJEC_WW_tagOnly_17->SetBorderMode(0);
   Z_jetmass_noJEC_WW_tagOnly_17->SetBorderSize(2);
   Z_jetmass_noJEC_WW_tagOnly_17->SetLogy();
   Z_jetmass_noJEC_WW_tagOnly_17->SetLeftMargin(0.15);
   Z_jetmass_noJEC_WW_tagOnly_17->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_WW_tagOnly_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_WW_tagOnly_17->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_WW_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_jetmass_noJEC__1403 = new TH1D("VH_tagOnly_Z_jetmass_noJEC__1403","",150,0,300);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(3,0.2398935);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(4,4.158825);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(5,8.501474);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(6,9.969401);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(7,8.423271);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(8,4.781776);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(9,7.020703);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(10,2.860726);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(11,1.710724);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(12,1.834852);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(13,0.7774217);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(14,1.172812);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(16,0.6882986);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(17,0.2246883);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(18,0.9951138);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(19,1.186235);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(20,0.8207303);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(22,0.3745624);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(27,0.4097937);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(28,0.3607803);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(30,0.2752491);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(31,0.3003038);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(34,0.2819712);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(39,0.2128171);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(44,0.3854835);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinContent(45,0.3217853);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(3,0.2398935);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(4,1.408518);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(5,1.872001);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(6,1.890666);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(7,1.772344);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(8,1.279142);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(9,1.54065);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(10,1.092299);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(11,0.7267427);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(12,0.8976871);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(13,0.4560087);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(14,0.6015653);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(16,0.4904939);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(17,0.2246883);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(18,0.5002489);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(19,0.5964127);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(20,0.5224431);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(22,0.3745624);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(27,0.4097937);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(28,0.3607803);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(30,0.2752491);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(31,0.3003038);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(34,0.2819712);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(39,0.2128171);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(44,0.3172843);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetBinError(45,0.3217853);
   VH_tagOnly_Z_jetmass_noJEC__1403->SetEntries(198);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_jetmass_noJEC__1403->SetLineColor(ci);
   VH_tagOnly_Z_jetmass_noJEC__1403->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VH_tagOnly_Z_jetmass_noJEC__1403->GetXaxis()->SetRange(1,150);
   VH_tagOnly_Z_jetmass_noJEC__1403->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_noJEC__1403->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetmass_noJEC__1403->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_noJEC__1403->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagOnly_Z_jetmass_noJEC__1403->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_noJEC__1403->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_jetmass_noJEC__1403->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_jetmass_noJEC__1403->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_jetmass_noJEC__1403->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_noJEC__1403->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_noJEC__1403->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetmass_noJEC__1403->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_noJEC__1403->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_WW_tagOnly_17->Modified();
   Z_jetmass_noJEC_WW_tagOnly_17->cd();
   Z_jetmass_noJEC_WW_tagOnly_17->SetSelected(Z_jetmass_noJEC_WW_tagOnly_17);
}
