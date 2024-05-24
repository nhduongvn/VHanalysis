#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_tagFirst_16()
{
//=========Macro generated from canvas: Aplanarity_WJets_tagFirst_16/Aplanarity_WJets_tagFirst_16
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_tagFirst_16 = new TCanvas("Aplanarity_WJets_tagFirst_16", "Aplanarity_WJets_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_tagFirst_16->SetHighLightColor(2);
   Aplanarity_WJets_tagFirst_16->Range(-0.2,-1180.565,1.133333,10625.08);
   Aplanarity_WJets_tagFirst_16->SetFillColor(0);
   Aplanarity_WJets_tagFirst_16->SetFillStyle(4000);
   Aplanarity_WJets_tagFirst_16->SetBorderMode(0);
   Aplanarity_WJets_tagFirst_16->SetBorderSize(2);
   Aplanarity_WJets_tagFirst_16->SetLeftMargin(0.15);
   Aplanarity_WJets_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagFirst_16->SetFrameBorderMode(0);
   Aplanarity_WJets_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__460 = new TH1D("VH_tagFirst_Aplanarity__460","",50,0,1);
   VH_tagFirst_Aplanarity__460->SetBinContent(1,8994.779);
   VH_tagFirst_Aplanarity__460->SetBinContent(2,953.7413);
   VH_tagFirst_Aplanarity__460->SetBinContent(3,273.522);
   VH_tagFirst_Aplanarity__460->SetBinContent(4,88.40968);
   VH_tagFirst_Aplanarity__460->SetBinContent(5,30.2819);
   VH_tagFirst_Aplanarity__460->SetBinContent(6,25.96099);
   VH_tagFirst_Aplanarity__460->SetBinContent(7,22.44935);
   VH_tagFirst_Aplanarity__460->SetBinContent(8,5.355267);
   VH_tagFirst_Aplanarity__460->SetBinContent(9,2.288635);
   VH_tagFirst_Aplanarity__460->SetBinContent(10,2.952279);
   VH_tagFirst_Aplanarity__460->SetBinContent(11,0.8900856);
   VH_tagFirst_Aplanarity__460->SetBinContent(12,1.242777);
   VH_tagFirst_Aplanarity__460->SetBinContent(13,0.4085634);
   VH_tagFirst_Aplanarity__460->SetBinContent(14,0.0002168231);
   VH_tagFirst_Aplanarity__460->SetBinContent(15,0.1683859);
   VH_tagFirst_Aplanarity__460->SetBinContent(20,0.1187145);
   VH_tagFirst_Aplanarity__460->SetBinError(1,89.14277);
   VH_tagFirst_Aplanarity__460->SetBinError(2,31.7095);
   VH_tagFirst_Aplanarity__460->SetBinError(3,20.67229);
   VH_tagFirst_Aplanarity__460->SetBinError(4,11.00869);
   VH_tagFirst_Aplanarity__460->SetBinError(5,3.635264);
   VH_tagFirst_Aplanarity__460->SetBinError(6,6.581163);
   VH_tagFirst_Aplanarity__460->SetBinError(7,8.407449);
   VH_tagFirst_Aplanarity__460->SetBinError(8,1.286744);
   VH_tagFirst_Aplanarity__460->SetBinError(9,0.6135286);
   VH_tagFirst_Aplanarity__460->SetBinError(10,1.506261);
   VH_tagFirst_Aplanarity__460->SetBinError(11,0.2705747);
   VH_tagFirst_Aplanarity__460->SetBinError(12,0.539585);
   VH_tagFirst_Aplanarity__460->SetBinError(13,0.1913917);
   VH_tagFirst_Aplanarity__460->SetBinError(14,0.0002168231);
   VH_tagFirst_Aplanarity__460->SetBinError(15,0.1683859);
   VH_tagFirst_Aplanarity__460->SetBinError(20,0.09043222);
   VH_tagFirst_Aplanarity__460->SetEntries(115312);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__460->SetLineColor(ci);
   VH_tagFirst_Aplanarity__460->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__460->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__460->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__460->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__460->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__460->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__460->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__460->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__460->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__460->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__460->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__460->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__460->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__460->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__460->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_tagFirst_16->Modified();
   Aplanarity_WJets_tagFirst_16->cd();
   Aplanarity_WJets_tagFirst_16->SetSelected(Aplanarity_WJets_tagFirst_16);
}
