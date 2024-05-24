#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHbb_DHZfirst_18()
{
//=========Macro generated from canvas: Sphericity_ZHbb_DHZfirst_18/Sphericity_ZHbb_DHZfirst_18
//=========  (Fri May 24 12:42:31 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHbb_DHZfirst_18 = new TCanvas("Sphericity_ZHbb_DHZfirst_18", "Sphericity_ZHbb_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHbb_DHZfirst_18->SetHighLightColor(2);
   Sphericity_ZHbb_DHZfirst_18->Range(-0.2,-1.263441,1.133333,11.37096);
   Sphericity_ZHbb_DHZfirst_18->SetFillColor(0);
   Sphericity_ZHbb_DHZfirst_18->SetFillStyle(4000);
   Sphericity_ZHbb_DHZfirst_18->SetBorderMode(0);
   Sphericity_ZHbb_DHZfirst_18->SetBorderSize(2);
   Sphericity_ZHbb_DHZfirst_18->SetLeftMargin(0.15);
   Sphericity_ZHbb_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_ZHbb_DHZfirst_18->SetFrameBorderMode(0);
   Sphericity_ZHbb_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_ZHbb_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1866 = new TH1D("VH_DHZfirst_Sphericity__1866","",25,0,1);
   VH_DHZfirst_Sphericity__1866->SetBinContent(1,9.626213);
   VH_DHZfirst_Sphericity__1866->SetBinContent(2,8.397314);
   VH_DHZfirst_Sphericity__1866->SetBinContent(3,4.770281);
   VH_DHZfirst_Sphericity__1866->SetBinContent(4,3.111863);
   VH_DHZfirst_Sphericity__1866->SetBinContent(5,2.012531);
   VH_DHZfirst_Sphericity__1866->SetBinContent(6,0.9502371);
   VH_DHZfirst_Sphericity__1866->SetBinContent(7,0.2552755);
   VH_DHZfirst_Sphericity__1866->SetBinContent(8,0.04580629);
   VH_DHZfirst_Sphericity__1866->SetBinContent(9,0.02832257);
   VH_DHZfirst_Sphericity__1866->SetBinContent(10,0.003990965);
   VH_DHZfirst_Sphericity__1866->SetBinContent(11,0.003548666);
   VH_DHZfirst_Sphericity__1866->SetBinContent(12,0.001227602);
   VH_DHZfirst_Sphericity__1866->SetBinContent(13,0.001641383);
   VH_DHZfirst_Sphericity__1866->SetBinContent(14,0.0006547701);
   VH_DHZfirst_Sphericity__1866->SetBinContent(16,0.0002604579);
   VH_DHZfirst_Sphericity__1866->SetBinContent(17,0.006306155);
   VH_DHZfirst_Sphericity__1866->SetBinContent(20,0.009429355);
   VH_DHZfirst_Sphericity__1866->SetBinError(1,0.315557);
   VH_DHZfirst_Sphericity__1866->SetBinError(2,0.1744377);
   VH_DHZfirst_Sphericity__1866->SetBinError(3,0.1562594);
   VH_DHZfirst_Sphericity__1866->SetBinError(4,0.09957462);
   VH_DHZfirst_Sphericity__1866->SetBinError(5,0.08239514);
   VH_DHZfirst_Sphericity__1866->SetBinError(6,0.05154235);
   VH_DHZfirst_Sphericity__1866->SetBinError(7,0.03066952);
   VH_DHZfirst_Sphericity__1866->SetBinError(8,0.008728708);
   VH_DHZfirst_Sphericity__1866->SetBinError(9,0.009539131);
   VH_DHZfirst_Sphericity__1866->SetBinError(10,0.001475852);
   VH_DHZfirst_Sphericity__1866->SetBinError(11,0.002651041);
   VH_DHZfirst_Sphericity__1866->SetBinError(12,0.0007134234);
   VH_DHZfirst_Sphericity__1866->SetBinError(13,0.0008255714);
   VH_DHZfirst_Sphericity__1866->SetBinError(14,0.0006547701);
   VH_DHZfirst_Sphericity__1866->SetBinError(16,0.0002604579);
   VH_DHZfirst_Sphericity__1866->SetBinError(17,0.006306155);
   VH_DHZfirst_Sphericity__1866->SetBinError(20,0.009429355);
   VH_DHZfirst_Sphericity__1866->SetEntries(23598);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1866->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1866->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1866->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1866->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1866->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1866->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1866->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1866->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1866->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1866->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1866->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1866->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1866->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1866->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1866->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1866->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHbb_DHZfirst_18->Modified();
   Sphericity_ZHbb_DHZfirst_18->cd();
   Sphericity_ZHbb_DHZfirst_18->SetSelected(Sphericity_ZHbb_DHZfirst_18);
}
