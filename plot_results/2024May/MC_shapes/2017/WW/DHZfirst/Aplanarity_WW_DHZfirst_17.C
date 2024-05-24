#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WW_DHZfirst_17()
{
//=========Macro generated from canvas: Aplanarity_WW_DHZfirst_17/Aplanarity_WW_DHZfirst_17
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WW_DHZfirst_17 = new TCanvas("Aplanarity_WW_DHZfirst_17", "Aplanarity_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WW_DHZfirst_17->SetHighLightColor(2);
   Aplanarity_WW_DHZfirst_17->Range(-0.2,-0.5301736,1.133333,4.771562);
   Aplanarity_WW_DHZfirst_17->SetFillColor(0);
   Aplanarity_WW_DHZfirst_17->SetFillStyle(4000);
   Aplanarity_WW_DHZfirst_17->SetBorderMode(0);
   Aplanarity_WW_DHZfirst_17->SetBorderSize(2);
   Aplanarity_WW_DHZfirst_17->SetLeftMargin(0.15);
   Aplanarity_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_WW_DHZfirst_17->SetFrameBorderMode(0);
   Aplanarity_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1913 = new TH1D("VH_DHZfirst_Aplanarity__1913","",50,0,1);
   VH_DHZfirst_Aplanarity__1913->SetBinContent(1,4.039418);
   VH_DHZfirst_Aplanarity__1913->SetBinError(1,1.151214);
   VH_DHZfirst_Aplanarity__1913->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1913->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1913->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1913->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1913->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1913->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1913->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1913->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1913->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1913->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1913->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1913->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1913->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1913->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1913->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1913->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1913->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WW_DHZfirst_17->Modified();
   Aplanarity_WW_DHZfirst_17->cd();
   Aplanarity_WW_DHZfirst_17->SetSelected(Aplanarity_WW_DHZfirst_17);
}
