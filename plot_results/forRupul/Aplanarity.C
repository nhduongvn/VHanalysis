#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity()
{
//=========Macro generated from canvas: Aplanarity/Aplanarity
//=========  (Tue Mar 26 15:28:34 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity = new TCanvas("Aplanarity", "Aplanarity",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity->SetHighLightColor(2);
   Aplanarity->Range(-0.2,-19.60486,1.133333,176.4438);
   Aplanarity->SetFillColor(0);
   Aplanarity->SetBorderMode(0);
   Aplanarity->SetBorderSize(2);
   Aplanarity->SetLeftMargin(0.15);
   Aplanarity->SetFrameBorderMode(0);
   Aplanarity->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__16 = new TH1D("VH_tagFirst_Aplanarity__16","",50,0,1);
   VH_tagFirst_Aplanarity__16->SetBinContent(1,149.3704);
   VH_tagFirst_Aplanarity__16->SetBinContent(2,12.04199);
   VH_tagFirst_Aplanarity__16->SetBinContent(3,9.019907);
   VH_tagFirst_Aplanarity__16->SetBinError(1,15.13489);
   VH_tagFirst_Aplanarity__16->SetBinError(2,4.171623);
   VH_tagFirst_Aplanarity__16->SetBinError(3,4.618461);
   VH_tagFirst_Aplanarity__16->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VH_tagFirst_Aplanarity__16->SetFillColor(ci);
   VH_tagFirst_Aplanarity__16->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__16->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity__16->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__16->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__16->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__16->GetYaxis()->SetTitle("Events/2 GeV");
   VH_tagFirst_Aplanarity__16->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__16->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__16->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__16->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__16->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__16->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, lumi fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity->Modified();
   Aplanarity->cd();
   Aplanarity->SetSelected(Aplanarity);
}
