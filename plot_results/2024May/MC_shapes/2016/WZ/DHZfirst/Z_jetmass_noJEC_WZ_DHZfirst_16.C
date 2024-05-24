#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_WZ_DHZfirst_16()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_WZ_DHZfirst_16/Z_jetmass_noJEC_WZ_DHZfirst_16
//=========  (Fri May 24 12:42:35 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_noJEC_WZ_DHZfirst_16 = new TCanvas("Z_jetmass_noJEC_WZ_DHZfirst_16", "Z_jetmass_noJEC_WZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_WZ_DHZfirst_16->SetHighLightColor(2);
   Z_jetmass_noJEC_WZ_DHZfirst_16->Range(-60,-0.8867841,340,7.981056);
   Z_jetmass_noJEC_WZ_DHZfirst_16->SetFillColor(0);
   Z_jetmass_noJEC_WZ_DHZfirst_16->SetFillStyle(4000);
   Z_jetmass_noJEC_WZ_DHZfirst_16->SetBorderMode(0);
   Z_jetmass_noJEC_WZ_DHZfirst_16->SetBorderSize(2);
   Z_jetmass_noJEC_WZ_DHZfirst_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_WZ_DHZfirst_16->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_WZ_DHZfirst_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_WZ_DHZfirst_16->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_WZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_noJEC__2125 = new TH1D("VH_DHZfirst_Z_jetmass_noJEC__2125","",150,0,300);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(4,1.338999);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(5,2.659256);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(6,6.740277);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(7,6.75645);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(8,6.481887);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(9,4.456695);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(10,3.173127);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(11,2.593074);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(12,1.567109);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(13,1.491224);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(14,1.297817);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(15,1.196874);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(16,0.3153765);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(17,0.3256034);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(18,0.3885899);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(19,0.4405255);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(20,0.2725909);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(21,0.285784);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(22,0.0917086);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(24,0.1142668);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(26,0.1069853);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(27,0.09120662);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(31,0.09131494);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(34,0.08792136);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(37,0.04970937);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinContent(48,0.1343377);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(4,0.3403759);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(5,0.4776898);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(6,0.7741171);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(7,0.7850271);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(8,0.7786009);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(9,0.6517351);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(10,0.5542195);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(11,0.5082179);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(12,0.3976728);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(13,0.3899431);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(14,0.3643812);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(15,0.3481696);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(16,0.1656192);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(17,0.1889643);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(18,0.1987598);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(19,0.2208543);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(20,0.1590919);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(21,0.1704594);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(22,0.0917086);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(24,0.1142668);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(26,0.1069853);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(27,0.09120662);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(31,0.09131494);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(34,0.08792136);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(37,0.04970937);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetBinError(48,0.1343377);
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetEntries(469);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_noJEC__2125->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_noJEC__2125->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VH_DHZfirst_Z_jetmass_noJEC__2125->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_noJEC__2125->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2125->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__2125->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2125->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_noJEC__2125->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2125->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_noJEC__2125->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_noJEC__2125->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_noJEC__2125->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2125->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2125->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__2125->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2125->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_WZ_DHZfirst_16->Modified();
   Z_jetmass_noJEC_WZ_DHZfirst_16->cd();
   Z_jetmass_noJEC_WZ_DHZfirst_16->SetSelected(Z_jetmass_noJEC_WZ_DHZfirst_16);
}
