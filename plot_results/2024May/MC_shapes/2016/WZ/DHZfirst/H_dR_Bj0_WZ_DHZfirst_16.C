#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_WZ_DHZfirst_16()
{
//=========Macro generated from canvas: H_dR_Bj0_WZ_DHZfirst_16/H_dR_Bj0_WZ_DHZfirst_16
//=========  (Fri May 24 12:42:30 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0_WZ_DHZfirst_16 = new TCanvas("H_dR_Bj0_WZ_DHZfirst_16", "H_dR_Bj0_WZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_WZ_DHZfirst_16->SetHighLightColor(2);
   H_dR_Bj0_WZ_DHZfirst_16->Range(-1.2,-2.628675,6.8,23.65807);
   H_dR_Bj0_WZ_DHZfirst_16->SetFillColor(0);
   H_dR_Bj0_WZ_DHZfirst_16->SetFillStyle(4000);
   H_dR_Bj0_WZ_DHZfirst_16->SetBorderMode(0);
   H_dR_Bj0_WZ_DHZfirst_16->SetBorderSize(2);
   H_dR_Bj0_WZ_DHZfirst_16->SetLeftMargin(0.15);
   H_dR_Bj0_WZ_DHZfirst_16->SetFrameFillStyle(1000);
   H_dR_Bj0_WZ_DHZfirst_16->SetFrameBorderMode(0);
   H_dR_Bj0_WZ_DHZfirst_16->SetFrameFillStyle(1000);
   H_dR_Bj0_WZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR_Bj0__1765 = new TH1D("VH_DHZfirst_H_dR_Bj0__1765","",30,0,6);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(1,13.93252);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(2,20.028);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(3,7.837042);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(4,2.830043);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(5,1.95926);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(6,0.8707824);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(7,0.7619346);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(8,0.2176956);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(9,0.1088478);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(10,0.3265434);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(11,0.2176956);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(12,0.544239);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(13,0.1088478);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(14,0.544239);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(15,0.2176956);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(16,0.1088478);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(17,0.2176956);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(18,0.1088478);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinContent(21,0.1088478);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(1,1.231472);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(2,1.476483);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(3,0.9236042);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(4,0.5550171);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(5,0.4618021);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(6,0.3078681);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(7,0.2879842);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(8,0.153934);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(9,0.1088478);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(10,0.1885299);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(11,0.153934);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(12,0.2433911);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(13,0.1088478);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(14,0.2433911);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(15,0.153934);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(16,0.1088478);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(17,0.153934);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(18,0.1088478);
   VH_DHZfirst_H_dR_Bj0__1765->SetBinError(21,0.1088478);
   VH_DHZfirst_H_dR_Bj0__1765->SetEntries(469);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR_Bj0__1765->SetLineColor(ci);
   VH_DHZfirst_H_dR_Bj0__1765->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_DHZfirst_H_dR_Bj0__1765->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_dR_Bj0__1765->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1765->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1765->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1765->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR_Bj0__1765->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1765->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR_Bj0__1765->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR_Bj0__1765->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR_Bj0__1765->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1765->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1765->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1765->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1765->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_WZ_DHZfirst_16->Modified();
   H_dR_Bj0_WZ_DHZfirst_16->cd();
   H_dR_Bj0_WZ_DHZfirst_16->SetSelected(H_dR_Bj0_WZ_DHZfirst_16);
}
