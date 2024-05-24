#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_DHZfirst_18()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_DHZfirst_18/Aplanarity_SingleTop_DHZfirst_18
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_DHZfirst_18 = new TCanvas("Aplanarity_SingleTop_DHZfirst_18", "Aplanarity_SingleTop_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_DHZfirst_18->SetHighLightColor(2);
   Aplanarity_SingleTop_DHZfirst_18->Range(-0.2,-367.9536,1.133333,3311.582);
   Aplanarity_SingleTop_DHZfirst_18->SetFillColor(0);
   Aplanarity_SingleTop_DHZfirst_18->SetFillStyle(4000);
   Aplanarity_SingleTop_DHZfirst_18->SetBorderMode(0);
   Aplanarity_SingleTop_DHZfirst_18->SetBorderSize(2);
   Aplanarity_SingleTop_DHZfirst_18->SetLeftMargin(0.15);
   Aplanarity_SingleTop_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_DHZfirst_18->SetFrameBorderMode(0);
   Aplanarity_SingleTop_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1911 = new TH1D("VH_DHZfirst_Aplanarity__1911","",50,0,1);
   VH_DHZfirst_Aplanarity__1911->SetBinContent(1,2803.455);
   VH_DHZfirst_Aplanarity__1911->SetBinContent(2,346.3253);
   VH_DHZfirst_Aplanarity__1911->SetBinContent(3,70.00735);
   VH_DHZfirst_Aplanarity__1911->SetBinContent(4,22.84241);
   VH_DHZfirst_Aplanarity__1911->SetBinContent(5,4.822288);
   VH_DHZfirst_Aplanarity__1911->SetBinContent(6,0.7714834);
   VH_DHZfirst_Aplanarity__1911->SetBinContent(7,1.431706);
   VH_DHZfirst_Aplanarity__1911->SetBinContent(8,0.2467156);
   VH_DHZfirst_Aplanarity__1911->SetBinContent(9,0.2168986);
   VH_DHZfirst_Aplanarity__1911->SetBinContent(11,0.05524582);
   VH_DHZfirst_Aplanarity__1911->SetBinContent(13,0.05134134);
   VH_DHZfirst_Aplanarity__1911->SetBinError(1,40.3207);
   VH_DHZfirst_Aplanarity__1911->SetBinError(2,11.67127);
   VH_DHZfirst_Aplanarity__1911->SetBinError(3,5.094452);
   VH_DHZfirst_Aplanarity__1911->SetBinError(4,3.067995);
   VH_DHZfirst_Aplanarity__1911->SetBinError(5,1.189907);
   VH_DHZfirst_Aplanarity__1911->SetBinError(6,0.3300235);
   VH_DHZfirst_Aplanarity__1911->SetBinError(7,0.7058286);
   VH_DHZfirst_Aplanarity__1911->SetBinError(8,0.1890714);
   VH_DHZfirst_Aplanarity__1911->SetBinError(9,0.1563765);
   VH_DHZfirst_Aplanarity__1911->SetBinError(11,0.05524582);
   VH_DHZfirst_Aplanarity__1911->SetBinError(13,0.05134134);
   VH_DHZfirst_Aplanarity__1911->SetEntries(22786);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1911->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1911->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1911->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1911->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1911->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1911->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1911->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1911->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1911->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1911->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1911->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1911->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1911->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1911->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1911->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1911->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_DHZfirst_18->Modified();
   Aplanarity_SingleTop_DHZfirst_18->cd();
   Aplanarity_SingleTop_DHZfirst_18->SetSelected(Aplanarity_SingleTop_DHZfirst_18);
}
