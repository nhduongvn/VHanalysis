#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC()
{
//=========Macro generated from canvas: H_jetmass_JEC/H_jetmass_JEC
//=========  (Wed Mar 27 16:46:16 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_JEC = new TCanvas("H_jetmass_JEC", "H_jetmass_JEC",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC->SetHighLightColor(2);
   H_jetmass_JEC->Range(-60,-0.06882126,340,0.6193913);
   H_jetmass_JEC->SetFillColor(0);
   H_jetmass_JEC->SetFillStyle(4000);
   H_jetmass_JEC->SetBorderMode(0);
   H_jetmass_JEC->SetBorderSize(2);
   H_jetmass_JEC->SetLeftMargin(0.15);
   H_jetmass_JEC->SetFrameFillStyle(1000);
   H_jetmass_JEC->SetFrameBorderMode(0);
   H_jetmass_JEC->SetFrameFillStyle(1000);
   H_jetmass_JEC->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_jetmass_JEC__20 = new TH1D("VH_tagFirst_H_jetmass_JEC__20","",150,0,300);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(2,0.002236962);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(3,0.05849259);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(4,0.2267666);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(5,0.5243524);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(6,0.4981169);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(7,0.4572237);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(8,0.2738588);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(9,0.2067529);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(10,0.1580854);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(11,0.1089537);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(12,0.07617217);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(13,0.05448121);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(14,0.04847529);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(15,0.03341488);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(16,0.02439144);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(17,0.0136342);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(18,0.003071098);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(19,0.01090071);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(20,0.005073588);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(21,0.00228835);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(22,0.002958613);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(23,0.003340142);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(24,0.007439358);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(25,0.006009777);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(27,0.002349545);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(38,0.007668334);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(41,0.003209975);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(2,0.002236962);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(3,0.02174631);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(4,0.0340954);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(5,0.04191755);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(6,0.04313117);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(7,0.04057523);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(8,0.02882049);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(9,0.03502469);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(10,0.02991241);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(11,0.01881755);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(12,0.01581306);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(13,0.01212149);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(14,0.0134406);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(15,0.009631819);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(16,0.01039537);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(17,0.00612945);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(18,0.003071098);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(19,0.00727472);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(20,0.003624251);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(21,0.00228835);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(22,0.002958613);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(23,0.003340142);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(24,0.00526525);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(25,0.006009777);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(27,0.002349545);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(38,0.00448185);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(41,0.003209975);
   VH_tagFirst_H_jetmass_JEC__20->SetEntries(939);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_jetmass_JEC__20->SetLineColor(ci);
   VH_tagFirst_H_jetmass_JEC__20->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VH_tagFirst_H_jetmass_JEC__20->GetXaxis()->SetRange(1,150);
   VH_tagFirst_H_jetmass_JEC__20->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_JEC__20->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_jetmass_JEC__20->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_JEC__20->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagFirst_H_jetmass_JEC__20->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_JEC__20->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_jetmass_JEC__20->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_jetmass_JEC__20->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_jetmass_JEC__20->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_JEC__20->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_JEC__20->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_jetmass_JEC__20->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_JEC__20->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC->Modified();
   H_jetmass_JEC->cd();
   H_jetmass_JEC->SetSelected(H_jetmass_JEC);
}
