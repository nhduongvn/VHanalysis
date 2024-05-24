#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_DHZfirst_17/Aplanarity_SingleTop_DHZfirst_17
//=========  (Thu May 23 20:48:52 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_DHZfirst_17 = new TCanvas("Aplanarity_SingleTop_DHZfirst_17", "Aplanarity_SingleTop_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_DHZfirst_17->SetHighLightColor(2);
   Aplanarity_SingleTop_DHZfirst_17->Range(-0.2,-2.882629,1.133333,4.042085);
   Aplanarity_SingleTop_DHZfirst_17->SetFillColor(0);
   Aplanarity_SingleTop_DHZfirst_17->SetFillStyle(4000);
   Aplanarity_SingleTop_DHZfirst_17->SetBorderMode(0);
   Aplanarity_SingleTop_DHZfirst_17->SetBorderSize(2);
   Aplanarity_SingleTop_DHZfirst_17->SetLogy();
   Aplanarity_SingleTop_DHZfirst_17->SetLeftMargin(0.15);
   Aplanarity_SingleTop_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_DHZfirst_17->SetFrameBorderMode(0);
   Aplanarity_SingleTop_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1910 = new TH1D("VH_DHZfirst_Aplanarity__1910","",50,0,1);
   VH_DHZfirst_Aplanarity__1910->SetBinContent(1,1180.496);
   VH_DHZfirst_Aplanarity__1910->SetBinContent(2,161.0801);
   VH_DHZfirst_Aplanarity__1910->SetBinContent(3,35.95063);
   VH_DHZfirst_Aplanarity__1910->SetBinContent(4,6.290653);
   VH_DHZfirst_Aplanarity__1910->SetBinContent(5,2.475769);
   VH_DHZfirst_Aplanarity__1910->SetBinContent(6,1.645638);
   VH_DHZfirst_Aplanarity__1910->SetBinContent(7,0.1267005);
   VH_DHZfirst_Aplanarity__1910->SetBinContent(8,0.5557769);
   VH_DHZfirst_Aplanarity__1910->SetBinContent(9,0.09394306);
   VH_DHZfirst_Aplanarity__1910->SetBinContent(10,0.1879022);
   VH_DHZfirst_Aplanarity__1910->SetBinContent(11,0.01290839);
   VH_DHZfirst_Aplanarity__1910->SetBinContent(13,0.2323615);
   VH_DHZfirst_Aplanarity__1910->SetBinError(1,14.89266);
   VH_DHZfirst_Aplanarity__1910->SetBinError(2,5.478282);
   VH_DHZfirst_Aplanarity__1910->SetBinError(3,2.529683);
   VH_DHZfirst_Aplanarity__1910->SetBinError(4,0.7741864);
   VH_DHZfirst_Aplanarity__1910->SetBinError(5,0.6638614);
   VH_DHZfirst_Aplanarity__1910->SetBinError(6,0.7622476);
   VH_DHZfirst_Aplanarity__1910->SetBinError(7,0.0715372);
   VH_DHZfirst_Aplanarity__1910->SetBinError(8,0.4404173);
   VH_DHZfirst_Aplanarity__1910->SetBinError(9,0.07681856);
   VH_DHZfirst_Aplanarity__1910->SetBinError(10,0.09830956);
   VH_DHZfirst_Aplanarity__1910->SetBinError(11,0.01290839);
   VH_DHZfirst_Aplanarity__1910->SetBinError(13,0.2323615);
   VH_DHZfirst_Aplanarity__1910->SetEntries(19010);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1910->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1910->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1910->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1910->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1910->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1910->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1910->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1910->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1910->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1910->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1910->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1910->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1910->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1910->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1910->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1910->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_DHZfirst_17->Modified();
   Aplanarity_SingleTop_DHZfirst_17->cd();
   Aplanarity_SingleTop_DHZfirst_17->SetSelected(Aplanarity_SingleTop_DHZfirst_17);
}
