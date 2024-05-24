#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHbb_DHZfirst_16()
{
//=========Macro generated from canvas: Sphericity_ZHbb_DHZfirst_16/Sphericity_ZHbb_DHZfirst_16
//=========  (Fri May 24 12:42:31 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHbb_DHZfirst_16 = new TCanvas("Sphericity_ZHbb_DHZfirst_16", "Sphericity_ZHbb_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHbb_DHZfirst_16->SetHighLightColor(2);
   Sphericity_ZHbb_DHZfirst_16->Range(-0.2,-0.7455625,1.133333,6.710062);
   Sphericity_ZHbb_DHZfirst_16->SetFillColor(0);
   Sphericity_ZHbb_DHZfirst_16->SetFillStyle(4000);
   Sphericity_ZHbb_DHZfirst_16->SetBorderMode(0);
   Sphericity_ZHbb_DHZfirst_16->SetBorderSize(2);
   Sphericity_ZHbb_DHZfirst_16->SetLeftMargin(0.15);
   Sphericity_ZHbb_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_ZHbb_DHZfirst_16->SetFrameBorderMode(0);
   Sphericity_ZHbb_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_ZHbb_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1864 = new TH1D("VH_DHZfirst_Sphericity__1864","",25,0,1);
   VH_DHZfirst_Sphericity__1864->SetBinContent(1,5.680476);
   VH_DHZfirst_Sphericity__1864->SetBinContent(2,5.38639);
   VH_DHZfirst_Sphericity__1864->SetBinContent(3,3.111621);
   VH_DHZfirst_Sphericity__1864->SetBinContent(4,2.103899);
   VH_DHZfirst_Sphericity__1864->SetBinContent(5,1.304377);
   VH_DHZfirst_Sphericity__1864->SetBinContent(6,0.6530078);
   VH_DHZfirst_Sphericity__1864->SetBinContent(7,0.1599599);
   VH_DHZfirst_Sphericity__1864->SetBinContent(8,0.03739604);
   VH_DHZfirst_Sphericity__1864->SetBinContent(9,0.01199622);
   VH_DHZfirst_Sphericity__1864->SetBinContent(10,0.002396985);
   VH_DHZfirst_Sphericity__1864->SetBinContent(11,0.001656216);
   VH_DHZfirst_Sphericity__1864->SetBinContent(12,0.001747669);
   VH_DHZfirst_Sphericity__1864->SetBinContent(13,0.0009858196);
   VH_DHZfirst_Sphericity__1864->SetBinContent(14,0.001751752);
   VH_DHZfirst_Sphericity__1864->SetBinContent(15,0.0009370424);
   VH_DHZfirst_Sphericity__1864->SetBinContent(16,0.0001564318);
   VH_DHZfirst_Sphericity__1864->SetBinError(1,0.07037015);
   VH_DHZfirst_Sphericity__1864->SetBinError(2,0.06790118);
   VH_DHZfirst_Sphericity__1864->SetBinError(3,0.05192167);
   VH_DHZfirst_Sphericity__1864->SetBinError(4,0.04311191);
   VH_DHZfirst_Sphericity__1864->SetBinError(5,0.03464808);
   VH_DHZfirst_Sphericity__1864->SetBinError(6,0.02463182);
   VH_DHZfirst_Sphericity__1864->SetBinError(7,0.01194851);
   VH_DHZfirst_Sphericity__1864->SetBinError(8,0.005522949);
   VH_DHZfirst_Sphericity__1864->SetBinError(9,0.003307036);
   VH_DHZfirst_Sphericity__1864->SetBinError(10,0.0008864009);
   VH_DHZfirst_Sphericity__1864->SetBinError(11,0.001138741);
   VH_DHZfirst_Sphericity__1864->SetBinError(12,0.00109747);
   VH_DHZfirst_Sphericity__1864->SetBinError(13,0.0004958406);
   VH_DHZfirst_Sphericity__1864->SetBinError(14,0.00141427);
   VH_DHZfirst_Sphericity__1864->SetBinError(15,0.0009370424);
   VH_DHZfirst_Sphericity__1864->SetBinError(16,0.0001564318);
   VH_DHZfirst_Sphericity__1864->SetEntries(30046);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1864->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1864->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1864->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1864->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1864->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1864->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1864->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1864->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1864->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1864->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1864->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1864->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1864->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1864->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1864->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1864->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHbb_DHZfirst_16->Modified();
   Sphericity_ZHbb_DHZfirst_16->cd();
   Sphericity_ZHbb_DHZfirst_16->SetSelected(Sphericity_ZHbb_DHZfirst_16);
}
