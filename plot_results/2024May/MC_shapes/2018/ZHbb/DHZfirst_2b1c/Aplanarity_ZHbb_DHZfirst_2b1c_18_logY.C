#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHbb_DHZfirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHbb_DHZfirst_2b1c_18/Aplanarity_ZHbb_DHZfirst_2b1c_18
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHbb_DHZfirst_2b1c_18 = new TCanvas("Aplanarity_ZHbb_DHZfirst_2b1c_18", "Aplanarity_ZHbb_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHbb_DHZfirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_ZHbb_DHZfirst_2b1c_18->Range(-0.2,-4.573564,1.133333,3.144079);
   Aplanarity_ZHbb_DHZfirst_2b1c_18->SetFillColor(0);
   Aplanarity_ZHbb_DHZfirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_ZHbb_DHZfirst_2b1c_18->SetBorderMode(0);
   Aplanarity_ZHbb_DHZfirst_2b1c_18->SetBorderSize(2);
   Aplanarity_ZHbb_DHZfirst_2b1c_18->SetLogy();
   Aplanarity_ZHbb_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_ZHbb_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_ZHbb_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4056 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4056","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinContent(1,124.3844);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinContent(2,9.869595);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinContent(3,1.611151);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinContent(4,0.291867);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinContent(5,0.0984263);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinContent(6,0.03397013);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinContent(7,0.01139063);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinContent(8,0.002549791);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinContent(9,0.0007749612);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinContent(10,0.0003156676);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinContent(12,0.0004023417);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinError(1,0.7276064);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinError(2,0.1730981);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinError(3,0.06994562);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinError(4,0.02431331);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinError(5,0.01668066);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinError(6,0.01335609);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinError(7,0.006790745);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinError(8,0.001214359);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinError(9,0.0005480113);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinError(10,0.0003156676);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetBinError(12,0.0004023417);
   VH_DHZfirst_2b1c_Aplanarity__4056->SetEntries(113096);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4056->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4056->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4056->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4056->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4056->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4056->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4056->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4056->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4056->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4056->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4056->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4056->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4056->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4056->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4056->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4056->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHbb_DHZfirst_2b1c_18->Modified();
   Aplanarity_ZHbb_DHZfirst_2b1c_18->cd();
   Aplanarity_ZHbb_DHZfirst_2b1c_18->SetSelected(Aplanarity_ZHbb_DHZfirst_2b1c_18);
}
