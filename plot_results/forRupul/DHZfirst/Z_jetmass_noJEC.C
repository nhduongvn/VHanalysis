#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC()
{
//=========Macro generated from canvas: Z_jetmass_noJEC/Z_jetmass_noJEC
//=========  (Wed Mar 27 16:46:18 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_noJEC = new TCanvas("Z_jetmass_noJEC", "Z_jetmass_noJEC",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC->SetHighLightColor(2);
   Z_jetmass_noJEC->Range(-60,-0.0113897,340,0.1025073);
   Z_jetmass_noJEC->SetFillColor(0);
   Z_jetmass_noJEC->SetFillStyle(4000);
   Z_jetmass_noJEC->SetBorderMode(0);
   Z_jetmass_noJEC->SetBorderSize(2);
   Z_jetmass_noJEC->SetLeftMargin(0.15);
   Z_jetmass_noJEC->SetFrameFillStyle(1000);
   Z_jetmass_noJEC->SetFrameBorderMode(0);
   Z_jetmass_noJEC->SetFrameFillStyle(1000);
   Z_jetmass_noJEC->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_noJEC__71 = new TH1D("VH_DHZfirst_Z_jetmass_noJEC__71","",150,0,300);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(5,0.002613679);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(6,0.01879258);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(7,0.04990197);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(8,0.07222038);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(9,0.06584455);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(10,0.08677863);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(11,0.05460955);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(12,0.03771718);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(13,0.0125744);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(14,0.02604088);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(15,0.004748617);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(16,0.01311005);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(17,0.0109715);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(18,0.004945487);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(19,0.01182279);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(20,0.002199679);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(21,0.007958117);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(22,0.008838266);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(23,0.002462404);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(31,0.002643217);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinContent(48,0.002519259);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(5,0.002613679);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(6,0.008102696);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(7,0.01345633);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(8,0.01502026);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(9,0.01507067);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(10,0.02870434);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(11,0.01266744);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(12,0.009856133);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(13,0.005958047);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(14,0.00893338);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(15,0.003359262);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(16,0.00611533);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(17,0.0056489);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(18,0.003499881);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(19,0.006030704);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(20,0.002199679);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(21,0.004624242);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(22,0.00718678);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(23,0.002462404);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(31,0.002643217);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetBinError(48,0.002519259);
   VH_DHZfirst_Z_jetmass_noJEC__71->SetEntries(172);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_noJEC__71->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_noJEC__71->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VH_DHZfirst_Z_jetmass_noJEC__71->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_noJEC__71->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__71->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__71->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__71->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_noJEC__71->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__71->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_noJEC__71->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_noJEC__71->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_noJEC__71->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__71->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__71->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__71->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__71->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC->Modified();
   Z_jetmass_noJEC->cd();
   Z_jetmass_noJEC->SetSelected(Z_jetmass_noJEC);
}
