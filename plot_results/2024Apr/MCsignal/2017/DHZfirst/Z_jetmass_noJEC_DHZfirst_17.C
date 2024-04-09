#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_DHZfirst_17()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_DHZfirst_17/Z_jetmass_noJEC_DHZfirst_17
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_noJEC_DHZfirst_17 = new TCanvas("Z_jetmass_noJEC_DHZfirst_17", "Z_jetmass_noJEC_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_DHZfirst_17->SetHighLightColor(2);
   Z_jetmass_noJEC_DHZfirst_17->Range(-60,-0.004490966,340,0.04041869);
   Z_jetmass_noJEC_DHZfirst_17->SetFillColor(0);
   Z_jetmass_noJEC_DHZfirst_17->SetFillStyle(4000);
   Z_jetmass_noJEC_DHZfirst_17->SetBorderMode(0);
   Z_jetmass_noJEC_DHZfirst_17->SetBorderSize(2);
   Z_jetmass_noJEC_DHZfirst_17->SetLeftMargin(0.15);
   Z_jetmass_noJEC_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_DHZfirst_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_noJEC__212 = new TH1D("VH_DHZfirst_Z_jetmass_noJEC__212","",150,0,300);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(5,0.005568768);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(6,0.01448071);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(7,0.030714);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(8,0.02899277);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(9,0.03382071);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(10,0.03421688);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(11,0.02915319);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(12,0.02132506);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(13,0.008921054);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(14,0.007594596);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(15,0.01068589);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(16,0.005131555);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(17,0.0054692);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(18,0.007984754);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(19,0.001090118);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(20,0.001373193);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(21,0.002924168);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(24,0.001398903);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinContent(57,0.002896017);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(5,0.00285044);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(6,0.004234507);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(7,0.006779775);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(8,0.006076166);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(9,0.007111198);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(10,0.007581057);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(11,0.005986786);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(12,0.005299486);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(13,0.003535063);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(14,0.002942921);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(15,0.004086343);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(16,0.002942537);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(17,0.002971487);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(18,0.004684747);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(19,0.0008114135);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(20,0.001373193);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(21,0.002076859);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(24,0.001398903);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetBinError(57,0.002896017);
   VH_DHZfirst_Z_jetmass_noJEC__212->SetEntries(199);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_noJEC__212->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_noJEC__212->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VH_DHZfirst_Z_jetmass_noJEC__212->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_noJEC__212->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__212->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__212->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__212->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_noJEC__212->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__212->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_noJEC__212->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_noJEC__212->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_noJEC__212->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__212->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__212->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__212->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__212->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_DHZfirst_17->Modified();
   Z_jetmass_noJEC_DHZfirst_17->cd();
   Z_jetmass_noJEC_DHZfirst_17->SetSelected(Z_jetmass_noJEC_DHZfirst_17);
}
