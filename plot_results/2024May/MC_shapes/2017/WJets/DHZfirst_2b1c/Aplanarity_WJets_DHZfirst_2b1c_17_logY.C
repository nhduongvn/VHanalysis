#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_DHZfirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Aplanarity_WJets_DHZfirst_2b1c_17/Aplanarity_WJets_DHZfirst_2b1c_17
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_DHZfirst_2b1c_17 = new TCanvas("Aplanarity_WJets_DHZfirst_2b1c_17", "Aplanarity_WJets_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_DHZfirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_WJets_DHZfirst_2b1c_17->Range(-0.2,-2.184294,1.133333,4.281413);
   Aplanarity_WJets_DHZfirst_2b1c_17->SetFillColor(0);
   Aplanarity_WJets_DHZfirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_WJets_DHZfirst_2b1c_17->SetBorderMode(0);
   Aplanarity_WJets_DHZfirst_2b1c_17->SetBorderSize(2);
   Aplanarity_WJets_DHZfirst_2b1c_17->SetLogy();
   Aplanarity_WJets_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_WJets_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WJets_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_WJets_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WJets_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4061 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4061","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinContent(1,2276.634);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinContent(2,201.2919);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinContent(3,38.36021);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinContent(4,3.983135);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinContent(5,1.74734);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinContent(6,1.077827);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinContent(7,0.191648);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinContent(9,0.1774743);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinContent(10,0.05798378);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinError(1,57.51563);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinError(2,16.16804);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinError(3,8.134895);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinError(4,1.301826);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinError(5,1.344506);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinError(6,0.5982336);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinError(7,0.1391461);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinError(9,0.1774743);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetBinError(10,0.05798378);
   VH_DHZfirst_2b1c_Aplanarity__4061->SetEntries(14547);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4061->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4061->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4061->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4061->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4061->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4061->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4061->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4061->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4061->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4061->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4061->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4061->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4061->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4061->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4061->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4061->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_DHZfirst_2b1c_17->Modified();
   Aplanarity_WJets_DHZfirst_2b1c_17->cd();
   Aplanarity_WJets_DHZfirst_2b1c_17->SetSelected(Aplanarity_WJets_DHZfirst_2b1c_17);
}
