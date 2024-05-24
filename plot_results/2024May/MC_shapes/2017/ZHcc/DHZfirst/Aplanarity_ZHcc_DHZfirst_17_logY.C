#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_DHZfirst_17/Aplanarity_ZHcc_DHZfirst_17
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_DHZfirst_17 = new TCanvas("Aplanarity_ZHcc_DHZfirst_17", "Aplanarity_ZHcc_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_DHZfirst_17->SetHighLightColor(2);
   Aplanarity_ZHcc_DHZfirst_17->Range(-0.2,-4.634944,1.133333,0.4129304);
   Aplanarity_ZHcc_DHZfirst_17->SetFillColor(0);
   Aplanarity_ZHcc_DHZfirst_17->SetFillStyle(4000);
   Aplanarity_ZHcc_DHZfirst_17->SetBorderMode(0);
   Aplanarity_ZHcc_DHZfirst_17->SetBorderSize(2);
   Aplanarity_ZHcc_DHZfirst_17->SetLogy();
   Aplanarity_ZHcc_DHZfirst_17->SetLeftMargin(0.15);
   Aplanarity_ZHcc_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_DHZfirst_17->SetFrameBorderMode(0);
   Aplanarity_ZHcc_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1892 = new TH1D("VH_DHZfirst_Aplanarity__1892","",50,0,1);
   VH_DHZfirst_Aplanarity__1892->SetBinContent(1,0.4271634);
   VH_DHZfirst_Aplanarity__1892->SetBinContent(2,0.02576874);
   VH_DHZfirst_Aplanarity__1892->SetBinContent(3,0.002698585);
   VH_DHZfirst_Aplanarity__1892->SetBinContent(4,0.0002229178);
   VH_DHZfirst_Aplanarity__1892->SetBinContent(5,0.0001482086);
   VH_DHZfirst_Aplanarity__1892->SetBinError(1,0.02203696);
   VH_DHZfirst_Aplanarity__1892->SetBinError(2,0.004635715);
   VH_DHZfirst_Aplanarity__1892->SetBinError(3,0.0013181);
   VH_DHZfirst_Aplanarity__1892->SetBinError(4,0.0001580586);
   VH_DHZfirst_Aplanarity__1892->SetBinError(5,0.0001482086);
   VH_DHZfirst_Aplanarity__1892->SetEntries(1018);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1892->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1892->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1892->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1892->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1892->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1892->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1892->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1892->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1892->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1892->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1892->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1892->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1892->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1892->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1892->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1892->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_DHZfirst_17->Modified();
   Aplanarity_ZHcc_DHZfirst_17->cd();
   Aplanarity_ZHcc_DHZfirst_17->SetSelected(Aplanarity_ZHcc_DHZfirst_17);
}
