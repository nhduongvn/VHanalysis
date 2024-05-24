#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_SingleTop_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Sphericity_SingleTop_DHZfirst_18/Sphericity_SingleTop_DHZfirst_18
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_SingleTop_DHZfirst_18 = new TCanvas("Sphericity_SingleTop_DHZfirst_18", "Sphericity_SingleTop_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_SingleTop_DHZfirst_18->SetHighLightColor(2);
   Sphericity_SingleTop_DHZfirst_18->Range(-0.2,-2.205736,1.133333,3.916538);
   Sphericity_SingleTop_DHZfirst_18->SetFillColor(0);
   Sphericity_SingleTop_DHZfirst_18->SetFillStyle(4000);
   Sphericity_SingleTop_DHZfirst_18->SetBorderMode(0);
   Sphericity_SingleTop_DHZfirst_18->SetBorderSize(2);
   Sphericity_SingleTop_DHZfirst_18->SetLogy();
   Sphericity_SingleTop_DHZfirst_18->SetLeftMargin(0.15);
   Sphericity_SingleTop_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_SingleTop_DHZfirst_18->SetFrameBorderMode(0);
   Sphericity_SingleTop_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_SingleTop_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1881 = new TH1D("VH_DHZfirst_Sphericity__1881","",25,0,1);
   VH_DHZfirst_Sphericity__1881->SetBinContent(1,1063.56);
   VH_DHZfirst_Sphericity__1881->SetBinContent(2,981.1908);
   VH_DHZfirst_Sphericity__1881->SetBinContent(3,594.0125);
   VH_DHZfirst_Sphericity__1881->SetBinContent(4,334.5293);
   VH_DHZfirst_Sphericity__1881->SetBinContent(5,163.6097);
   VH_DHZfirst_Sphericity__1881->SetBinContent(6,68.85475);
   VH_DHZfirst_Sphericity__1881->SetBinContent(7,20.41937);
   VH_DHZfirst_Sphericity__1881->SetBinContent(8,13.48076);
   VH_DHZfirst_Sphericity__1881->SetBinContent(9,1.860358);
   VH_DHZfirst_Sphericity__1881->SetBinContent(10,2.160878);
   VH_DHZfirst_Sphericity__1881->SetBinContent(11,2.918666);
   VH_DHZfirst_Sphericity__1881->SetBinContent(12,1.663542);
   VH_DHZfirst_Sphericity__1881->SetBinContent(13,1.111171);
   VH_DHZfirst_Sphericity__1881->SetBinContent(14,0.05099426);
   VH_DHZfirst_Sphericity__1881->SetBinContent(16,0.6509232);
   VH_DHZfirst_Sphericity__1881->SetBinContent(17,0.09156955);
   VH_DHZfirst_Sphericity__1881->SetBinContent(18,0.06089123);
   VH_DHZfirst_Sphericity__1881->SetBinError(1,20.78341);
   VH_DHZfirst_Sphericity__1881->SetBinError(2,19.3683);
   VH_DHZfirst_Sphericity__1881->SetBinError(3,26.05716);
   VH_DHZfirst_Sphericity__1881->SetBinError(4,14.14242);
   VH_DHZfirst_Sphericity__1881->SetBinError(5,8.31879);
   VH_DHZfirst_Sphericity__1881->SetBinError(6,5.217888);
   VH_DHZfirst_Sphericity__1881->SetBinError(7,2.554377);
   VH_DHZfirst_Sphericity__1881->SetBinError(8,2.445302);
   VH_DHZfirst_Sphericity__1881->SetBinError(9,0.5181823);
   VH_DHZfirst_Sphericity__1881->SetBinError(10,0.6748424);
   VH_DHZfirst_Sphericity__1881->SetBinError(11,1.511076);
   VH_DHZfirst_Sphericity__1881->SetBinError(12,0.9066552);
   VH_DHZfirst_Sphericity__1881->SetBinError(13,0.5403637);
   VH_DHZfirst_Sphericity__1881->SetBinError(14,0.05099426);
   VH_DHZfirst_Sphericity__1881->SetBinError(16,0.5498193);
   VH_DHZfirst_Sphericity__1881->SetBinError(17,0.06478168);
   VH_DHZfirst_Sphericity__1881->SetBinError(18,0.06089123);
   VH_DHZfirst_Sphericity__1881->SetEntries(22786);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1881->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1881->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1881->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1881->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1881->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1881->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1881->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1881->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1881->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1881->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1881->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1881->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1881->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1881->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1881->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1881->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_SingleTop_DHZfirst_18->Modified();
   Sphericity_SingleTop_DHZfirst_18->cd();
   Sphericity_SingleTop_DHZfirst_18->SetSelected(Sphericity_SingleTop_DHZfirst_18);
}
