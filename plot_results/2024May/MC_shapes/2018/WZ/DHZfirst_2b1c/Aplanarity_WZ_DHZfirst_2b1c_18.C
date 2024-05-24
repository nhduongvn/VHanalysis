#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WZ_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: Aplanarity_WZ_DHZfirst_2b1c_18/Aplanarity_WZ_DHZfirst_2b1c_18
//=========  (Fri May 24 12:43:08 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WZ_DHZfirst_2b1c_18 = new TCanvas("Aplanarity_WZ_DHZfirst_2b1c_18", "Aplanarity_WZ_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WZ_DHZfirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_WZ_DHZfirst_2b1c_18->Range(-0.2,-26.77495,1.133333,240.9745);
   Aplanarity_WZ_DHZfirst_2b1c_18->SetFillColor(0);
   Aplanarity_WZ_DHZfirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_WZ_DHZfirst_2b1c_18->SetBorderMode(0);
   Aplanarity_WZ_DHZfirst_2b1c_18->SetBorderSize(2);
   Aplanarity_WZ_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_WZ_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WZ_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_WZ_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WZ_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4077 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4077","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4077->SetBinContent(1,203.9996);
   VH_DHZfirst_2b1c_Aplanarity__4077->SetBinContent(2,16.7198);
   VH_DHZfirst_2b1c_Aplanarity__4077->SetBinContent(3,2.861926);
   VH_DHZfirst_2b1c_Aplanarity__4077->SetBinContent(6,0.3917701);
   VH_DHZfirst_2b1c_Aplanarity__4077->SetBinError(1,12.10165);
   VH_DHZfirst_2b1c_Aplanarity__4077->SetBinError(2,3.419609);
   VH_DHZfirst_2b1c_Aplanarity__4077->SetBinError(3,1.969438);
   VH_DHZfirst_2b1c_Aplanarity__4077->SetBinError(6,0.3917701);
   VH_DHZfirst_2b1c_Aplanarity__4077->SetEntries(389);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4077->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4077->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4077->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4077->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4077->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4077->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4077->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4077->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4077->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4077->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4077->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4077->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4077->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4077->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4077->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4077->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WZ_DHZfirst_2b1c_18->Modified();
   Aplanarity_WZ_DHZfirst_2b1c_18->cd();
   Aplanarity_WZ_DHZfirst_2b1c_18->SetSelected(Aplanarity_WZ_DHZfirst_2b1c_18);
}
