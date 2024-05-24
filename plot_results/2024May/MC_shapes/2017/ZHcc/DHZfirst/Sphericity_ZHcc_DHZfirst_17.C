#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_DHZfirst_17()
{
//=========Macro generated from canvas: Sphericity_ZHcc_DHZfirst_17/Sphericity_ZHcc_DHZfirst_17
//=========  (Fri May 24 12:42:31 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_DHZfirst_17 = new TCanvas("Sphericity_ZHcc_DHZfirst_17", "Sphericity_ZHcc_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_DHZfirst_17->SetHighLightColor(2);
   Sphericity_ZHcc_DHZfirst_17->Range(-0.2,-0.02059921,1.133333,0.1853929);
   Sphericity_ZHcc_DHZfirst_17->SetFillColor(0);
   Sphericity_ZHcc_DHZfirst_17->SetFillStyle(4000);
   Sphericity_ZHcc_DHZfirst_17->SetBorderMode(0);
   Sphericity_ZHcc_DHZfirst_17->SetBorderSize(2);
   Sphericity_ZHcc_DHZfirst_17->SetLeftMargin(0.15);
   Sphericity_ZHcc_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_ZHcc_DHZfirst_17->SetFrameBorderMode(0);
   Sphericity_ZHcc_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_ZHcc_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1862 = new TH1D("VH_DHZfirst_Sphericity__1862","",25,0,1);
   VH_DHZfirst_Sphericity__1862->SetBinContent(1,0.1569464);
   VH_DHZfirst_Sphericity__1862->SetBinContent(2,0.1175125);
   VH_DHZfirst_Sphericity__1862->SetBinContent(3,0.08498519);
   VH_DHZfirst_Sphericity__1862->SetBinContent(4,0.03982559);
   VH_DHZfirst_Sphericity__1862->SetBinContent(5,0.03971859);
   VH_DHZfirst_Sphericity__1862->SetBinContent(6,0.01335968);
   VH_DHZfirst_Sphericity__1862->SetBinContent(7,0.001358407);
   VH_DHZfirst_Sphericity__1862->SetBinContent(8,0.0009551064);
   VH_DHZfirst_Sphericity__1862->SetBinContent(9,0.001098324);
   VH_DHZfirst_Sphericity__1862->SetBinContent(10,0.0002420247);
   VH_DHZfirst_Sphericity__1862->SetBinError(1,0.01329513);
   VH_DHZfirst_Sphericity__1862->SetBinError(2,0.01101306);
   VH_DHZfirst_Sphericity__1862->SetBinError(3,0.01020879);
   VH_DHZfirst_Sphericity__1862->SetBinError(4,0.006742139);
   VH_DHZfirst_Sphericity__1862->SetBinError(5,0.006806591);
   VH_DHZfirst_Sphericity__1862->SetBinError(6,0.003619735);
   VH_DHZfirst_Sphericity__1862->SetBinError(7,0.0005641424);
   VH_DHZfirst_Sphericity__1862->SetBinError(8,0.0004034033);
   VH_DHZfirst_Sphericity__1862->SetBinError(9,0.001098324);
   VH_DHZfirst_Sphericity__1862->SetBinError(10,0.0002420247);
   VH_DHZfirst_Sphericity__1862->SetEntries(1018);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1862->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1862->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1862->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1862->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1862->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1862->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1862->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1862->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1862->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1862->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1862->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1862->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1862->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1862->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1862->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1862->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_DHZfirst_17->Modified();
   Sphericity_ZHcc_DHZfirst_17->cd();
   Sphericity_ZHcc_DHZfirst_17->SetSelected(Sphericity_ZHcc_DHZfirst_17);
}
