#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_DHZfirst_2b1c_16()
{
//=========Macro generated from canvas: Aplanarity_ZJets_DHZfirst_2b1c_16/Aplanarity_ZJets_DHZfirst_2b1c_16
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_DHZfirst_2b1c_16 = new TCanvas("Aplanarity_ZJets_DHZfirst_2b1c_16", "Aplanarity_ZJets_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_DHZfirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_ZJets_DHZfirst_2b1c_16->Range(-0.2,-1293.823,1.133333,11644.41);
   Aplanarity_ZJets_DHZfirst_2b1c_16->SetFillColor(0);
   Aplanarity_ZJets_DHZfirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_ZJets_DHZfirst_2b1c_16->SetBorderMode(0);
   Aplanarity_ZJets_DHZfirst_2b1c_16->SetBorderSize(2);
   Aplanarity_ZJets_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_ZJets_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZJets_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_ZJets_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZJets_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4063 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4063","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinContent(1,9857.699);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinContent(2,1003.089);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinContent(3,194.528);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinContent(4,38.74967);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinContent(5,16.32159);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinContent(6,2.981927);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinContent(7,0.5620349);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinContent(8,0.0604894);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinContent(9,0.2215525);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinContent(10,0.03675446);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinContent(15,0.1742222);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinError(1,73.80012);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinError(2,28.37391);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinError(3,13.66742);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinError(4,5.786737);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinError(5,4.518105);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinError(6,1.993022);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinError(7,0.3276272);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinError(8,0.04344745);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinError(9,0.2215525);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinError(10,0.03675446);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetBinError(15,0.1742222);
   VH_DHZfirst_2b1c_Aplanarity__4063->SetEntries(83543);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4063->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4063->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4063->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4063->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4063->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4063->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4063->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4063->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4063->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4063->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4063->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4063->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4063->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4063->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4063->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4063->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_DHZfirst_2b1c_16->Modified();
   Aplanarity_ZJets_DHZfirst_2b1c_16->cd();
   Aplanarity_ZJets_DHZfirst_2b1c_16->SetSelected(Aplanarity_ZJets_DHZfirst_2b1c_16);
}
